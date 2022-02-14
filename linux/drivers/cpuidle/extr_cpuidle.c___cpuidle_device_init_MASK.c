
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {scalar_t__ next_hrtimer; scalar_t__ last_residency; int states_usage; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cpuidle_device *VAR_0)
{
 FUNC_0(VAR_0->states_usage, 0, sizeof(VAR_0->states_usage));
 VAR_0->last_residency = 0;
 VAR_0->next_hrtimer = 0;
}
