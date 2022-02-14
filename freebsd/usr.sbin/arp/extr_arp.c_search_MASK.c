
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr_dl {int sdl_index; } ;
struct rt_msghdr {int rtm_msglen; } ;
typedef int (* action_fn ) (struct sockaddr_dl*,struct sockaddr_in*,struct rt_msghdr*) ;


 int AF_INET ;
 int CTL_NET ;
 scalar_t__ ENOMEM ;
 int IF_NAMESIZE ;
 int NET_RT_FLAGS ;
 int PF_ROUTE ;
 int RTF_LLINFO ;
 int SA_SIZE (struct sockaddr_in*) ;
 scalar_t__ errno ;
 int free (char*) ;
 scalar_t__ if_indextoname (int ,char*) ;
 char* reallocf (char*,size_t) ;
 scalar_t__ rifname ;
 scalar_t__ strcmp (char*,scalar_t__) ;
 int stub1 (struct sockaddr_dl*,struct sockaddr_in*,struct rt_msghdr*) ;
 int sysctl (int*,int,char*,size_t*,int *,int ) ;
 int xo_err (int,char*) ;
 int xo_errx (int,char*) ;

__attribute__((used)) static int
search(u_long addr, action_fn *action)
{
 int mib[6];
 size_t needed;
 char *lim, *buf, *next;
 struct rt_msghdr *rtm;
 struct sockaddr_in *sin2;
 struct sockaddr_dl *sdl;
 char ifname[IF_NAMESIZE];
 int st, found_entry = 0;

 mib[0] = CTL_NET;
 mib[1] = PF_ROUTE;
 mib[2] = 0;
 mib[3] = AF_INET;
 mib[4] = NET_RT_FLAGS;



 mib[5] = 0;

 if (sysctl(mib, 6, ((void*)0), &needed, ((void*)0), 0) < 0)
  xo_err(1, "route-sysctl-estimate");
 if (needed == 0)
  return 0;
 buf = ((void*)0);
 for (;;) {
  buf = reallocf(buf, needed);
  if (buf == ((void*)0))
   xo_errx(1, "could not reallocate memory");
  st = sysctl(mib, 6, buf, &needed, ((void*)0), 0);
  if (st == 0 || errno != ENOMEM)
   break;
  needed += needed / 8;
 }
 if (st == -1)
  xo_err(1, "actual retrieval of routing table");
 lim = buf + needed;
 for (next = buf; next < lim; next += rtm->rtm_msglen) {
  rtm = (struct rt_msghdr *)next;
  sin2 = (struct sockaddr_in *)(rtm + 1);
  sdl = (struct sockaddr_dl *)((char *)sin2 + SA_SIZE(sin2));
  if (rifname && if_indextoname(sdl->sdl_index, ifname) &&
      strcmp(ifname, rifname))
   continue;
  if (addr) {
   if (addr != sin2->sin_addr.s_addr)
    continue;
   found_entry = 1;
  }
  (*action)(sdl, sin2, rtm);
 }
 free(buf);
 return (found_entry);
}
