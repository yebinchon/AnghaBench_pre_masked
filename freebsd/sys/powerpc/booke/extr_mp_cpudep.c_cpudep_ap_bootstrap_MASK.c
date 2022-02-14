
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_2__* pc_curpcb; TYPE_1__* pc_curthread; TYPE_1__* pc_idlethread; } ;
struct TYPE_5__ {uintptr_t pcb_sp; } ;
struct TYPE_4__ {TYPE_2__* td_pcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 TYPE_3__* VAR_6 ;

uintptr_t
FUNC_6()
{
 uint32_t VAR_7, VAR_8;
 uintptr_t VAR_9;


 VAR_8 = FUNC_4(VAR_4);
 if ((VAR_8 & VAR_0) == 0) {
  FUNC_1();
  FUNC_0();
 }

 VAR_8 = FUNC_4(VAR_5);
 if ((VAR_8 & VAR_1) == 0) {
  FUNC_3();
  FUNC_2();
 }





 VAR_7 = VAR_3;

 FUNC_5(VAR_7);


 VAR_6->pc_curthread = VAR_6->pc_idlethread;



 __asm __volatile("mr 2,%0" :: "r"(VAR_6->pc_curthread));

 VAR_6->pc_curpcb = VAR_6->pc_curthread->td_pcb;
 VAR_9 = VAR_6->pc_curpcb->pcb_sp;



 return (VAR_9);
}
