
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcptemp {int tt_t; int tt_ipgen; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcptemp* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct inpcb*,void*,void*) ;

struct tcptemp *
FUNC_2(struct inpcb *VAR_2)
{
 struct tcptemp *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1, VAR_0);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_2, (void *)&VAR_3->tt_ipgen, (void *)&VAR_3->tt_t);
 return (VAR_3);
}
