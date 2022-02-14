
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct trapframe {int dummy; } ;
struct thread {int td_intr_nesting_level; struct trapframe* td_intr_frame; } ;
struct TYPE_2__ {int pc_ipi_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct thread* VAR_5 ;
 int FUNC_4 () ;
 int ** VAR_6 ;
 int ** VAR_7 ;
 int ** VAR_8 ;
 int FUNC_5 (struct thread*) ;

void
FUNC_6(struct trapframe VAR_9)
{
 struct trapframe *VAR_10;
 struct thread *VAR_11;
 int VAR_12 = FUNC_0(VAR_3);
 u_int VAR_13;

 FUNC_2();
 VAR_11 = VAR_5;
 VAR_11->td_intr_nesting_level++;
 VAR_10 = VAR_11->td_intr_frame;
 VAR_11->td_intr_frame = &VAR_9;
 VAR_13 = FUNC_1(&VAR_4[VAR_12]->pc_ipi_bitmap);
 if (VAR_13 & (1 << VAR_2)) {



  FUNC_5(VAR_11);
 }
 if (VAR_13 & (1 << VAR_0)) {




 }
 if (VAR_13 & (1 << VAR_1)) {



  FUNC_4();
 }
 VAR_11->td_intr_frame = VAR_10;
 VAR_11->td_intr_nesting_level--;
 FUNC_3();
}
