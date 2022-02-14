
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sched_param {scalar_t__ sched_priority; } ;
struct cpuidle_state {int target_residency; } ;
struct cpuidle_driver {int state_count; struct cpuidle_state* states; } ;
struct cpuidle_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 struct cpuidle_driver* FUNC_2 (struct cpuidle_device*) ;
 int VAR_6 ;
 int FUNC_3 (struct timer_list*) ;
 int FUNC_4 (struct timer_list*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct timer_list*,scalar_t__) ;
 int VAR_9 ;
 int FUNC_10 (char*,int,int,int,int) ;
 int FUNC_11 (char*,int,int,...) ;
 int FUNC_12 (char*,int) ;
 scalar_t__ FUNC_13 (int ,int ,struct sched_param*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 struct cpuidle_device* FUNC_17 (int ) ;
 int FUNC_18 (struct timer_list*,int ,int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(void *VAR_12)
{
 int VAR_13 = (long)VAR_12;
 int VAR_14, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 struct sched_param VAR_18 = { .sched_priority = VAR_0-1 };
 struct cpuidle_device *VAR_19;
 struct cpuidle_driver *VAR_20;

 struct timer_list VAR_21;


 FUNC_20(&VAR_11);


 if (FUNC_13(VAR_6, VAR_2, &VAR_18))
  FUNC_12("Failed to set suspend thread scheduler on CPU %d\n",
   VAR_13);

 VAR_19 = FUNC_17(VAR_5);
 VAR_20 = FUNC_2(VAR_19);

 FUNC_11("CPU %d entering suspend cycles, states 1 through %d\n",
  VAR_13, VAR_20->state_count - 1);

 FUNC_18(&VAR_21, VAR_7, 0);
 for (VAR_14 = 0; VAR_14 < VAR_1; ++VAR_14) {
  int VAR_22;




  for (VAR_22 = 1; VAR_22 < VAR_20->state_count; ++VAR_22) {
   int VAR_23;
   struct cpuidle_state *VAR_24 = &VAR_20->states[VAR_22];
   FUNC_9(&VAR_21, VAR_8 +
      FUNC_19(VAR_24->target_residency));


   FUNC_7();

   VAR_23 = FUNC_16(VAR_19, VAR_20, VAR_22);






   FUNC_8();

   if (VAR_23 == VAR_22) {
    ++VAR_15;
   } else if (VAR_23 >= 0) {

    ++VAR_16;
   } else {
    FUNC_10("Failed to suspend CPU %d: error %d "
           "(requested state %d, cycle %d)\n",
           VAR_13, VAR_23, VAR_22, VAR_14);
    ++VAR_17;
   }
  }
 }





 FUNC_3(&VAR_21);
 FUNC_4(&VAR_21);

 if (FUNC_0(&VAR_9) == 0)
  FUNC_1(&VAR_10);


 VAR_18.sched_priority = 0;
 if (FUNC_13(VAR_6, VAR_3, &VAR_18))
  FUNC_12("Failed to set suspend thread scheduler on CPU %d\n",
   VAR_13);
 for (;;) {

  FUNC_15(VAR_4);
  if (FUNC_6())
   break;
  FUNC_14();
 }

 FUNC_11("CPU %d suspend test results: success %d, shallow states %d, errors %d\n",
  VAR_13, VAR_15, VAR_16, VAR_17);

 FUNC_5();

 return VAR_17;
}
