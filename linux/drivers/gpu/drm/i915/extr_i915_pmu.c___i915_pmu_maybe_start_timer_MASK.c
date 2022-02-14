
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_pmu {int timer_enabled; int timer; int timer_last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct i915_pmu*,int) ;

__attribute__((used)) static void FUNC_4(struct i915_pmu *VAR_2)
{
 if (!VAR_2->timer_enabled && FUNC_3(VAR_2, 1)) {
  VAR_2->timer_enabled = 1;
  VAR_2->timer_last = FUNC_1();
  FUNC_0(&VAR_2->timer,
           FUNC_2(VAR_1), 0,
           VAR_0);
 }
}
