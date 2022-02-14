
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct thread {int td_intr_nesting_level; struct trapframe* td_intr_frame; } ;
struct lapic {int * la_timer_count; } ;
struct TYPE_3__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;


 scalar_t__ FUNC_0 (size_t,int *) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct thread* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 TYPE_1__ VAR_4 ;
 struct lapic* VAR_5 ;
 int FUNC_5 (TYPE_1__*,int ) ;

void
FUNC_6(struct trapframe *VAR_6)
{
 struct lapic *VAR_7;
 struct trapframe *VAR_8;
 struct thread *VAR_9;


 FUNC_4();
 VAR_7 = &VAR_5[FUNC_1(VAR_0)];
 (*VAR_7->la_timer_count)++;
 FUNC_2();
 if (VAR_4.et_active) {
  VAR_9 = VAR_2;
  VAR_9->td_intr_nesting_level++;
  VAR_8 = VAR_9->td_intr_frame;
  VAR_9->td_intr_frame = VAR_6;
  VAR_4.et_event_cb(&VAR_4, VAR_4.et_arg);
  VAR_9->td_intr_frame = VAR_8;
  VAR_9->td_intr_nesting_level--;
 }
 FUNC_3();
}
