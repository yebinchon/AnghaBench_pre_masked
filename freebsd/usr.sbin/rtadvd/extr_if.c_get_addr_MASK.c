
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rt_msghdr {int rtm_addrs; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {struct in6_addr sin6_addr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (int ,struct sockaddr*,struct sockaddr**) ;

struct in6_addr *
FUNC_2(char *VAR_2)
{
 struct rt_msghdr *VAR_3 = (struct rt_msghdr *)VAR_2;
 struct sockaddr *VAR_4, *VAR_5[VAR_1];

 VAR_4 = (struct sockaddr *)(VAR_3 + 1);
 FUNC_1(VAR_3->rtm_addrs, VAR_4, VAR_5);

 return (&FUNC_0(VAR_5[VAR_0])->sin6_addr);
}
