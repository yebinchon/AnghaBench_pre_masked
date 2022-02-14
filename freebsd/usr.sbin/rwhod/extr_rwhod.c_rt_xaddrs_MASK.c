
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rt_addrinfo {int rti_addrs; struct sockaddr** rti_info; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (struct sockaddr**,int ,int) ;

void
FUNC_2(caddr_t VAR_1, caddr_t VAR_2, struct rt_addrinfo *VAR_3)
{
 struct sockaddr *VAR_4;
 int VAR_5;

 FUNC_1(VAR_3->rti_info, 0, sizeof(VAR_3->rti_info));
 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_1 < VAR_2; VAR_5++) {
  if ((VAR_3->rti_addrs & (1 << VAR_5)) == 0)
   continue;
  VAR_4 = (struct sockaddr *)VAR_1;
  VAR_3->rti_info[VAR_5] = VAR_4;
  VAR_1 += FUNC_0(VAR_4);
 }
}
