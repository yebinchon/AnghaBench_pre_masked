
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u_char ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; void* sin6_family; int sin6_scope_id; } ;
struct TYPE_2__ {int rmx_hopcount; } ;
struct rt_msghdr {int rtm_addrs; int rtm_msglen; int rtm_inits; TYPE_1__ rtm_rmx; int rtm_flags; int rtm_pid; scalar_t__ rtm_seq; int rtm_version; int rtm_type; } ;
struct netinfo6 {int rip6_plen; int rip6_metric; struct in6_addr rip6_dest; } ;
struct riprt {int rrt_flags; struct netinfo6 rrt_info; } ;
struct ifc {int ifc_index; int ifc_mylladdr; } ;
typedef int buf2 ;
typedef int buf1 ;
typedef int buf ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct in6_addr*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (scalar_t__,char*,char*,...) ;
 char* FUNC_3 () ;
 char* FUNC_4 (struct in6_addr*) ;
 int FUNC_5 (void*,void*,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 struct in6_addr* FUNC_7 (int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,char*,char*,...) ;
 int FUNC_10 (int,char*,char*,int,char*,int,char*) ;
 scalar_t__ FUNC_11 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_12(struct riprt *VAR_16,
 const struct in6_addr *VAR_17,
 struct ifc *VAR_18)
{
 struct netinfo6 *VAR_19;
 u_char VAR_20[VAR_1], VAR_21[VAR_1], VAR_22[VAR_1];
 struct rt_msghdr *VAR_23;
 struct sockaddr_in6 *VAR_24;
 int VAR_25;

 VAR_19 = &VAR_16->rrt_info;
 FUNC_5(VAR_0, (const void *)VAR_17, (char *)VAR_21, sizeof(VAR_21));
 FUNC_5(VAR_0, (void *)&VAR_18->ifc_mylladdr, (char *)VAR_22, sizeof(VAR_22));
 FUNC_10(1, "ADD: %s/%d gw %s [%d] ifa %s\n",
  FUNC_4(&VAR_19->rip6_dest), VAR_19->rip6_plen, VAR_21,
  VAR_19->rip6_metric - 1, VAR_22);
 if (VAR_13)
  FUNC_2(VAR_13, "%s: ADD: %s/%d gw %s [%d] ifa %s\n", FUNC_3(),
   FUNC_4(&VAR_19->rip6_dest), VAR_19->rip6_plen, VAR_21,
   VAR_19->rip6_metric - 1, VAR_22);
 if (VAR_11)
  return 0;

 FUNC_6(VAR_20, 0, sizeof(VAR_20));
 VAR_23 = (struct rt_msghdr *)(void *)VAR_20;
 VAR_23->rtm_type = VAR_7;
 VAR_23->rtm_version = VAR_8;
 VAR_23->rtm_seq = ++VAR_15;
 VAR_23->rtm_pid = VAR_12;
 VAR_23->rtm_flags = VAR_16->rrt_flags;
 VAR_23->rtm_flags |= VAR_3;
 VAR_23->rtm_addrs = VAR_4 | VAR_5 | VAR_6;
 VAR_23->rtm_rmx.rmx_hopcount = VAR_19->rip6_metric - 1;
 VAR_23->rtm_inits = VAR_9;
 VAR_24 = (struct sockaddr_in6 *)(void *)&VAR_20[sizeof(struct rt_msghdr)];

 VAR_24->sin6_len = sizeof(struct sockaddr_in6);
 VAR_24->sin6_family = VAR_0;
 VAR_24->sin6_addr = VAR_19->rip6_dest;
 VAR_24 = (struct sockaddr_in6 *)(void *)((char *)VAR_24 + FUNC_1(VAR_24->sin6_len));

 VAR_24->sin6_len = sizeof(struct sockaddr_in6);
 VAR_24->sin6_family = VAR_0;
 VAR_24->sin6_addr = *VAR_17;
 if (FUNC_0(&VAR_24->sin6_addr))
  VAR_24->sin6_scope_id = VAR_18->ifc_index;
 VAR_24 = (struct sockaddr_in6 *)(void *)((char *)VAR_24 + FUNC_1(VAR_24->sin6_len));

 VAR_24->sin6_len = sizeof(struct sockaddr_in6);
 VAR_24->sin6_family = VAR_0;
 VAR_24->sin6_addr = *(FUNC_7(VAR_19->rip6_plen));
 VAR_24 = (struct sockaddr_in6 *)(void *)((char *)VAR_24 + FUNC_1(VAR_24->sin6_len));

 VAR_25 = (char *)VAR_24 - (char *)VAR_20;
 VAR_23->rtm_msglen = VAR_25;
 if (FUNC_11(VAR_14, VAR_20, VAR_25) > 0)
  return 0;

 if (VAR_10 == VAR_2) {
  FUNC_9(0, "ADD: Route already exists %s/%d gw %s\n",
      FUNC_4(&VAR_19->rip6_dest), VAR_19->rip6_plen, VAR_21);
  if (VAR_13)
   FUNC_2(VAR_13, "ADD: Route already exists %s/%d gw %s\n",
       FUNC_4(&VAR_19->rip6_dest), VAR_19->rip6_plen, VAR_21);
 } else {
  FUNC_9(0, "Can not write to rtsock (addroute): %s\n",
      FUNC_8(VAR_10));
  if (VAR_13)
   FUNC_2(VAR_13, "\tCan not write to rtsock: %s\n",
       FUNC_8(VAR_10));
 }
 return -1;
}
