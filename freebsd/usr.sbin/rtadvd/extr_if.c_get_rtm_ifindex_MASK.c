
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {int sdl_index; } ;
struct sockaddr {int dummy; } ;
struct rt_msghdr {int rtm_addrs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sockaddr*,struct sockaddr**) ;

int
FUNC_1(char *VAR_2)
{
 struct rt_msghdr *VAR_3 = (struct rt_msghdr *)VAR_2;
 struct sockaddr *VAR_4, *VAR_5[VAR_1];

 VAR_4 = (struct sockaddr *)(VAR_3 + 1);
 FUNC_0(VAR_3->rtm_addrs, VAR_4, VAR_5);

 return (((struct sockaddr_dl *)VAR_5[VAR_0])->sdl_index);
}
