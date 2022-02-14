
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_len; } ;
struct rt_msghdr {int rtm_addrs; } ;
struct TYPE_2__ {int sin6_addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (int ,struct sockaddr*,struct sockaddr**) ;
 int FUNC_2 (char*,char*) ;

int
FUNC_3(char *VAR_2)
{
 struct rt_msghdr *VAR_3 = (struct rt_msghdr *)VAR_2;
 struct sockaddr *VAR_4, *VAR_5[VAR_0];
 char *VAR_6, *VAR_7;

 VAR_4 = (struct sockaddr *)(VAR_3 + 1);
 FUNC_1(VAR_3->rtm_addrs, VAR_4, VAR_5);
 VAR_4 = VAR_5[VAR_1];

 VAR_6 = (char *)(&FUNC_0(VAR_4)->sin6_addr);
 VAR_7 = (char *)VAR_4 + VAR_4->sa_len;
 return FUNC_2(VAR_6, VAR_7);
}
