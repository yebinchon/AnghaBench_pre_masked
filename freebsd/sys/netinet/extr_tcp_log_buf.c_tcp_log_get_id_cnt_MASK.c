
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct tcpcb {TYPE_1__* t_lib; int t_inpcb; } ;
struct TYPE_2__ {int tlb_refcnt; } ;


 int FUNC_0 (int ) ;

u_int
FUNC_1(struct tcpcb *VAR_0)
{

 FUNC_0(VAR_0->t_inpcb);
 return ((VAR_0->t_lib == ((void*)0)) ? 0 : VAR_0->t_lib->tlb_refcnt);
}
