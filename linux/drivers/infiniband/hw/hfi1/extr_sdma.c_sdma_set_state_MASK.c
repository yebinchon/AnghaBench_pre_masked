
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_state {size_t current_state; size_t previous_state; unsigned int previous_op; unsigned int current_op; int go_s99_running; } ;
struct sdma_set_state_action {scalar_t__ go_s99_running_totrue; scalar_t__ go_s99_running_tofalse; scalar_t__ op_cleanup; scalar_t__ op_halt; scalar_t__ op_intenable; scalar_t__ op_enable; } ;
struct sdma_engine {struct sdma_state state; } ;
typedef enum sdma_states { ____Placeholder_sdma_states } sdma_states ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct sdma_set_state_action* VAR_4 ;
 int FUNC_0 (struct sdma_engine*) ;
 int FUNC_1 (struct sdma_engine*,unsigned int) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sdma_engine*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sdma_engine *VAR_7,
      enum sdma_states VAR_8)
{
 struct sdma_state *VAR_9 = &VAR_7->state;
 const struct sdma_set_state_action *VAR_10 = VAR_4;
 unsigned VAR_11 = 0;

 FUNC_2(
  VAR_7,
  VAR_5[VAR_9->current_state],
  VAR_5[VAR_8]);


 VAR_9->previous_state = VAR_9->current_state;
 VAR_9->previous_op = VAR_9->current_op;
 VAR_9->current_state = VAR_8;

 if (VAR_9->previous_state != VAR_6 &&
     VAR_8 == VAR_6)
  FUNC_0(VAR_7);

 if (VAR_10[VAR_8].op_enable)
  VAR_11 |= VAR_1;

 if (VAR_10[VAR_8].op_intenable)
  VAR_11 |= VAR_3;

 if (VAR_10[VAR_8].op_halt)
  VAR_11 |= VAR_2;

 if (VAR_10[VAR_8].op_cleanup)
  VAR_11 |= VAR_0;

 if (VAR_10[VAR_8].go_s99_running_tofalse)
  VAR_9->go_s99_running = 0;

 if (VAR_10[VAR_8].go_s99_running_totrue)
  VAR_9->go_s99_running = 1;

 VAR_9->current_op = VAR_11;
 FUNC_1(VAR_7, VAR_9->current_op);
}
