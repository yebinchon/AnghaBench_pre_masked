
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; void* sin6_family; } ;
struct rt_msghdr {int rtm_flags; int rtm_addrs; int rtm_msglen; int rtm_pid; scalar_t__ rtm_seq; int rtm_version; int rtm_type; } ;
struct netinfo6 {int rip6_plen; struct in6_addr rip6_dest; } ;
typedef int buf2 ;
typedef int buf ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (scalar_t__,char*,char*,...) ;
 char* FUNC_2 () ;
 char* FUNC_3 (struct in6_addr*) ;
 int FUNC_4 (void*,void*,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 struct in6_addr* FUNC_6 (int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*,char*,...) ;
 int FUNC_9 (int,char*,char*,int,char*) ;
 scalar_t__ FUNC_10 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_11(struct netinfo6 *VAR_18, struct in6_addr *VAR_19)
{
 u_char VAR_20[VAR_1], VAR_21[VAR_1];
 struct rt_msghdr *VAR_22;
 struct sockaddr_in6 *VAR_23;
 int VAR_24;

 FUNC_4(VAR_0, (void *)VAR_19, (char *)VAR_21, sizeof(VAR_21));
 FUNC_9(1, "DEL: %s/%d gw %s\n", FUNC_3(&VAR_18->rip6_dest),
  VAR_18->rip6_plen, VAR_21);
 if (VAR_15)
  FUNC_1(VAR_15, "%s: DEL: %s/%d gw %s\n",
   FUNC_2(), FUNC_3(&VAR_18->rip6_dest), VAR_18->rip6_plen, VAR_21);
 if (VAR_13)
  return 0;

 FUNC_5(VAR_20, 0, sizeof(VAR_20));
 VAR_22 = (struct rt_msghdr *)(void *)VAR_20;
 VAR_22->rtm_type = VAR_10;
 VAR_22->rtm_version = VAR_11;
 VAR_22->rtm_seq = ++VAR_17;
 VAR_22->rtm_pid = VAR_14;
 VAR_22->rtm_flags = VAR_9 | VAR_7;
 VAR_22->rtm_flags |= VAR_3;
 if (VAR_18->rip6_plen == sizeof(struct in6_addr) * 8)
  VAR_22->rtm_flags |= VAR_8;
 VAR_22->rtm_addrs = VAR_4 | VAR_5 | VAR_6;
 VAR_23 = (struct sockaddr_in6 *)(void *)&VAR_20[sizeof(struct rt_msghdr)];

 VAR_23->sin6_len = sizeof(struct sockaddr_in6);
 VAR_23->sin6_family = VAR_0;
 VAR_23->sin6_addr = VAR_18->rip6_dest;
 VAR_23 = (struct sockaddr_in6 *)(void *)((char *)VAR_23 + FUNC_0(VAR_23->sin6_len));

 VAR_23->sin6_len = sizeof(struct sockaddr_in6);
 VAR_23->sin6_family = VAR_0;
 VAR_23->sin6_addr = *VAR_19;
 VAR_23 = (struct sockaddr_in6 *)(void *)((char *)VAR_23 + FUNC_0(VAR_23->sin6_len));

 VAR_23->sin6_len = sizeof(struct sockaddr_in6);
 VAR_23->sin6_family = VAR_0;
 VAR_23->sin6_addr = *(FUNC_6(VAR_18->rip6_plen));
 VAR_23 = (struct sockaddr_in6 *)(void *)((char *)VAR_23 + FUNC_0(VAR_23->sin6_len));

 VAR_24 = (char *)VAR_23 - (char *)VAR_20;
 VAR_22->rtm_msglen = VAR_24;
 if (FUNC_10(VAR_16, VAR_20, VAR_24) >= 0)
  return 0;

 if (VAR_12 == VAR_2) {
  FUNC_8(0, "RTDEL: Route does not exist: %s/%d gw %s\n",
      FUNC_3(&VAR_18->rip6_dest), VAR_18->rip6_plen, VAR_21);
  if (VAR_15)
   FUNC_1(VAR_15, "RTDEL: Route does not exist: %s/%d gw %s\n",
       FUNC_3(&VAR_18->rip6_dest), VAR_18->rip6_plen, VAR_21);
 } else {
  FUNC_8(0, "Can not write to rtsock (delroute): %s\n",
      FUNC_7(VAR_12));
  if (VAR_15)
   FUNC_1(VAR_15, "\tCan not write to rtsock: %s\n",
       FUNC_7(VAR_12));
 }
 return -1;
}
