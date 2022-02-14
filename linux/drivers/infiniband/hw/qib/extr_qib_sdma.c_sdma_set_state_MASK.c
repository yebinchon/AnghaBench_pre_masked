
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_set_state_action {scalar_t__ go_s99_running_totrue; scalar_t__ go_s99_running_tofalse; scalar_t__ op_drain; scalar_t__ op_halt; scalar_t__ op_intenable; scalar_t__ op_enable; } ;
struct qib_sdma_state {int previous_state; int current_state; unsigned int previous_op; unsigned int current_op; int go_s99_running; struct sdma_set_state_action* set_state_action; } ;
struct qib_pportdata {TYPE_1__* dd; struct qib_sdma_state sdma_state; } ;
typedef enum qib_sdma_states { ____Placeholder_qib_sdma_states } qib_sdma_states ;
struct TYPE_2__ {int (* f_sdma_sendctrl ) (struct qib_pportdata*,unsigned int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct qib_pportdata*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct qib_pportdata *VAR_4,
 enum qib_sdma_states VAR_5)
{
 struct qib_sdma_state *VAR_6 = &VAR_4->sdma_state;
 struct sdma_set_state_action *VAR_7 = VAR_6->set_state_action;
 unsigned VAR_8 = 0;


 VAR_6->previous_state = VAR_6->current_state;
 VAR_6->previous_op = VAR_6->current_op;

 VAR_6->current_state = VAR_5;

 if (VAR_7[VAR_5].op_enable)
  VAR_8 |= VAR_1;

 if (VAR_7[VAR_5].op_intenable)
  VAR_8 |= VAR_3;

 if (VAR_7[VAR_5].op_halt)
  VAR_8 |= VAR_2;

 if (VAR_7[VAR_5].op_drain)
  VAR_8 |= VAR_0;

 if (VAR_7[VAR_5].go_s99_running_tofalse)
  VAR_6->go_s99_running = 0;

 if (VAR_7[VAR_5].go_s99_running_totrue)
  VAR_6->go_s99_running = 1;

 VAR_6->current_op = VAR_8;

 VAR_4->dd->f_sdma_sendctrl(VAR_4, VAR_6->current_op);
}
