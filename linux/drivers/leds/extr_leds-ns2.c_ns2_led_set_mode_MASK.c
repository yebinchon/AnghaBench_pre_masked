
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ns2_led_data {int num_modes; int rw_lock; TYPE_1__* modval; int slow; int cmd; int can_sleep; } ;
typedef enum ns2_led_modes { ____Placeholder_ns2_led_modes } ns2_led_modes ;
struct TYPE_2__ {int mode; int slow_level; int cmd_level; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ns2_led_data *VAR_0,
        enum ns2_led_modes VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;
 unsigned long VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_modes; VAR_2++)
  if (VAR_1 == VAR_0->modval[VAR_2].mode) {
   VAR_3 = 1;
   break;
  }

 if (!VAR_3)
  return;

 FUNC_2(&VAR_0->rw_lock, VAR_4);

 if (!VAR_0->can_sleep) {
  FUNC_0(VAR_0->cmd,
          VAR_0->modval[VAR_2].cmd_level);
  FUNC_0(VAR_0->slow,
          VAR_0->modval[VAR_2].slow_level);
  goto exit_unlock;
 }

 FUNC_1(VAR_0->cmd, VAR_0->modval[VAR_2].cmd_level);
 FUNC_1(VAR_0->slow, VAR_0->modval[VAR_2].slow_level);

exit_unlock:
 FUNC_3(&VAR_0->rw_lock, VAR_4);
}
