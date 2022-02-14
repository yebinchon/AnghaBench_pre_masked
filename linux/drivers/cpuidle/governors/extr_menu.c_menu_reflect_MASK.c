
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu_device {int needs_update; int tick_wakeup; } ;
struct cpuidle_device {int last_state_idx; } ;


 int VAR_0 ;
 struct menu_device* FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct cpuidle_device *VAR_1, int VAR_2)
{
 struct menu_device *VAR_3 = FUNC_0(&VAR_0);

 VAR_1->last_state_idx = VAR_2;
 VAR_3->needs_update = 1;
 VAR_3->tick_wakeup = FUNC_1();
}
