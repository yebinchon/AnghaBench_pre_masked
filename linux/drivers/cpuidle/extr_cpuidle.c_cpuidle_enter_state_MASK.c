
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_state {int flags; scalar_t__ exit_latency; int (* enter ) (struct cpuidle_device*,struct cpuidle_driver*,int) ;scalar_t__ target_residency; scalar_t__ disabled; } ;
struct cpuidle_driver {int state_count; struct cpuidle_state* states; } ;
struct cpuidle_device {int last_residency; TYPE_1__* states_usage; int cpu; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;
struct TYPE_2__ {int time; int below; scalar_t__ disable; int above; int usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cpuidle_driver*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct cpuidle_driver*,struct cpuidle_device*,scalar_t__,int,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (struct cpuidle_state*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int,int ) ;

int FUNC_18(struct cpuidle_device *VAR_4, struct cpuidle_driver *VAR_5,
   int VAR_6)
{
 int VAR_7;

 struct cpuidle_state *VAR_8 = &VAR_5->states[VAR_6];
 bool VAR_9 = !!(VAR_8->flags & VAR_0);
 ktime_t VAR_10, VAR_11;






 if (VAR_9 && FUNC_15()) {
  VAR_6 = FUNC_3(VAR_5, VAR_4, VAR_8->exit_latency,
        VAR_0, 0);
  if (VAR_6 < 0) {
   FUNC_2();
   return -VAR_1;
  }
  VAR_8 = &VAR_5->states[VAR_6];
  VAR_9 = 0;
 }


 FUNC_11(VAR_8);

 FUNC_17(VAR_6, VAR_4->cpu);
 VAR_10 = FUNC_9(FUNC_6());

 FUNC_13();
 VAR_7 = VAR_8->enter(VAR_4, VAR_5, VAR_6);
 FUNC_12();

 FUNC_10();
 VAR_11 = FUNC_9(FUNC_6());
 FUNC_17(VAR_3, VAR_4->cpu);


 FUNC_11(((void*)0));

 if (VAR_9) {
  if (FUNC_0(!FUNC_4()))
   FUNC_7();

  FUNC_16();
 }

 if (!FUNC_1(VAR_5, VAR_6))
  FUNC_8();

 if (VAR_7 >= 0) {
  s64 VAR_12, VAR_13 = VAR_5->states[VAR_7].exit_latency;
  int VAR_14;






  VAR_12 = FUNC_5(VAR_11, VAR_10);
  if (VAR_12 > VAR_2)
   VAR_12 = VAR_2;

  VAR_4->last_residency = (int)VAR_12;
  VAR_4->states_usage[VAR_7].time += VAR_4->last_residency;
  VAR_4->states_usage[VAR_7].usage++;

  if (VAR_12 < VAR_5->states[VAR_7].target_residency) {
   for (VAR_14 = VAR_7 - 1; VAR_14 >= 0; VAR_14--) {
    if (VAR_5->states[VAR_14].disabled ||
        VAR_4->states_usage[VAR_14].disable)
     continue;


    VAR_4->states_usage[VAR_7].above++;
    break;
   }
  } else if (VAR_12 > VAR_13) {
   for (VAR_14 = VAR_7 + 1; VAR_14 < VAR_5->state_count; VAR_14++) {
    if (VAR_5->states[VAR_14].disabled ||
        VAR_4->states_usage[VAR_14].disable)
     continue;





    if (VAR_12 - VAR_13 >= VAR_5->states[VAR_14].target_residency)
     VAR_4->states_usage[VAR_7].below++;

    break;
   }
  }
 } else {
  VAR_4->last_residency = 0;
 }

 return VAR_7;
}
