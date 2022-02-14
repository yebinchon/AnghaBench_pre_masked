
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef uintptr_t register_t ;
struct TYPE_6__ {TYPE_2__* pc_curpcb; TYPE_1__* pc_curthread; TYPE_1__* pc_idlethread; } ;
struct TYPE_5__ {uintptr_t pcb_sp; } ;
struct TYPE_4__ {TYPE_2__* td_pcb; } ;


 uintptr_t VAR_0 ;
 int FUNC_0 (uintptr_t) ;
 TYPE_3__* VAR_1 ;
 uintptr_t VAR_2 ;

uintptr_t
FUNC_1(void)
{
 register_t VAR_3, VAR_4;

 VAR_3 = VAR_2 & ~VAR_0;
 FUNC_0(VAR_3);

 VAR_1->pc_curthread = VAR_1->pc_idlethread;



 __asm __volatile("mr 2,%0" :: "r"(VAR_1->pc_curthread));

 VAR_1->pc_curpcb = VAR_1->pc_curthread->td_pcb;
 VAR_4 = VAR_1->pc_curpcb->pcb_sp;

 return (VAR_4);
}
