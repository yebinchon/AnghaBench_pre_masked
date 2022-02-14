
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {int last_state_idx; int last_residency; } ;


 int FUNC_0 (struct cpuidle_device*,int ) ;

__attribute__((used)) static void FUNC_1(struct cpuidle_device *VAR_0, int VAR_1)
{
 VAR_0->last_state_idx = VAR_1;

 if (VAR_1 != 0)
  FUNC_0(VAR_0, VAR_0->last_residency);
}
