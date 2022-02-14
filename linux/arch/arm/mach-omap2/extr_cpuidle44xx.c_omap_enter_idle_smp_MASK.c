
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idle_statedata {scalar_t__ mpu_state_vote; int cpu_state; int mpu_state; int mpu_logic_state; } ;
struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct idle_statedata* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct cpuidle_device *VAR_4,
          struct cpuidle_driver *VAR_5,
          int VAR_6)
{
 struct idle_statedata *VAR_7 = VAR_3 + VAR_6;
 unsigned long VAR_8;

 FUNC_4(&VAR_1, VAR_8);
 VAR_7->mpu_state_vote++;
 if (VAR_7->mpu_state_vote == FUNC_0()) {
  FUNC_3(VAR_2, VAR_7->mpu_logic_state);
  FUNC_2(VAR_2, VAR_7->mpu_state);
 }
 FUNC_5(&VAR_1, VAR_8);

 FUNC_1(VAR_4->cpu, VAR_7->cpu_state);

 FUNC_4(&VAR_1, VAR_8);
 if (VAR_7->mpu_state_vote == FUNC_0())
  FUNC_2(VAR_2, VAR_0);
 VAR_7->mpu_state_vote--;
 FUNC_5(&VAR_1, VAR_8);

 return VAR_6;
}
