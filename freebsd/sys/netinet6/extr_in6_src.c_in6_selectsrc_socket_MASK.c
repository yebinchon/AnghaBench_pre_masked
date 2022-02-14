
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ucred {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct ip6_pktopts {int dummy; } ;
struct TYPE_2__ {int inc_fibnum; } ;
struct inpcb {TYPE_1__ inp_inc; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct inpcb*,struct ifnet*) ;
 int FUNC_1 (int ,struct sockaddr_in6*,struct ip6_pktopts*,struct inpcb*,struct ucred*,struct ifnet**,struct in6_addr*) ;
 int FUNC_2 (int *,struct ifnet*,int *) ;

int
FUNC_3(struct sockaddr_in6 *VAR_0, struct ip6_pktopts *VAR_1,
    struct inpcb *VAR_2, struct ucred *VAR_3, int VAR_4,
    struct in6_addr *VAR_5, int *VAR_6)
{
 struct ifnet *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_8 = VAR_2->inp_inc.inc_fibnum;
 VAR_7 = ((void*)0);

 VAR_9 = FUNC_1(VAR_8, VAR_0, VAR_1, VAR_2, VAR_3, &VAR_7, VAR_5);
 if (VAR_9 != 0)
  return (VAR_9);

 if (VAR_6 != ((void*)0))
  *VAR_6 = FUNC_0(VAR_2, VAR_7);

 if (VAR_7 == ((void*)0) || VAR_4 == 0)
  return (0);
 VAR_9 = FUNC_2(&VAR_0->sin6_addr, VAR_7, ((void*)0));

 return (VAR_9);
}
