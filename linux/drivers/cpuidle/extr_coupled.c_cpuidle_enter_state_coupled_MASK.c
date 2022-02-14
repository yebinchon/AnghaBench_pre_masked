
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int safe_state_index; } ;
struct cpuidle_device {int cpu; struct cpuidle_coupled* coupled; } ;
struct cpuidle_coupled {int online_count; int abort_barrier; scalar_t__ prevent; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct cpuidle_coupled*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct cpuidle_coupled*) ;
 int FUNC_4 (struct cpuidle_coupled*) ;
 int FUNC_5 (struct cpuidle_device*,struct cpuidle_coupled*) ;
 int FUNC_6 (struct cpuidle_coupled*) ;
 int FUNC_7 (struct cpuidle_device*,int *) ;
 int FUNC_8 (int ,struct cpuidle_coupled*) ;
 int VAR_1 ;
 int FUNC_9 (int ,struct cpuidle_coupled*) ;
 int FUNC_10 (struct cpuidle_coupled*) ;
 int FUNC_11 (int ,struct cpuidle_coupled*) ;
 int FUNC_12 (struct cpuidle_coupled*) ;
 int FUNC_13 (int ,struct cpuidle_coupled*,int) ;
 int FUNC_14 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;

int FUNC_23(struct cpuidle_device *VAR_2,
  struct cpuidle_driver *VAR_3, int VAR_4)
{
 int VAR_5 = -1;
 struct cpuidle_coupled *VAR_6 = VAR_2->coupled;
 int VAR_7;

 if (!VAR_6)
  return -VAR_0;

 while (VAR_6->prevent) {
  FUNC_2(VAR_2->cpu);
  if (FUNC_20()) {
   FUNC_19();
   return VAR_5;
  }
  VAR_5 = FUNC_14(VAR_2, VAR_3,
   VAR_3->safe_state_index);
  FUNC_18();
 }


 FUNC_21();

reset:
 FUNC_15(VAR_2->cpu, &VAR_1);

 VAR_7 = FUNC_13(VAR_2->cpu, VAR_6, VAR_4);







 if (VAR_7 == VAR_6->online_count) {
  FUNC_16(VAR_2->cpu, &VAR_1);
  FUNC_8(VAR_2->cpu, VAR_6);
 }

retry:
 while (!FUNC_4(VAR_6) ||
   !FUNC_17(VAR_2->cpu, &VAR_1)) {
  if (FUNC_2(VAR_2->cpu))
   continue;

  if (FUNC_20()) {
   FUNC_11(VAR_2->cpu, VAR_6);
   goto out;
  }

  if (VAR_6->prevent) {
   FUNC_11(VAR_2->cpu, VAR_6);
   goto out;
  }

  VAR_5 = FUNC_14(VAR_2, VAR_3,
   VAR_3->safe_state_index);
  FUNC_18();
 }

 FUNC_2(VAR_2->cpu);
 if (FUNC_20()) {
  FUNC_11(VAR_2->cpu, VAR_6);
  goto out;
 }





 FUNC_22();
 FUNC_12(VAR_6);
 while (!FUNC_3(VAR_6)) {

  if (!FUNC_4(VAR_6))
   if (!FUNC_10(VAR_6))
    goto retry;

  FUNC_0();
 }




 FUNC_21();
 if (FUNC_1(VAR_6)) {
  FUNC_9(VAR_2->cpu, VAR_6);

  FUNC_7(VAR_2, &VAR_6->abort_barrier);
  goto reset;
 }


 VAR_4 = FUNC_5(VAR_2, VAR_6);

 VAR_5 = FUNC_14(VAR_2, VAR_3, VAR_4);

 FUNC_9(VAR_2->cpu, VAR_6);

out:
 FUNC_19();






 while (!FUNC_6(VAR_6))
  FUNC_0();

 return VAR_5;
}
