
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct teo_cpu {unsigned int* intervals; TYPE_1__* states; int sleep_length_ns; int time_span_ns; } ;
struct cpuidle_state_usage {scalar_t__ disable; } ;
struct cpuidle_state {unsigned int target_residency; int exit_latency; int flags; scalar_t__ disabled; } ;
struct cpuidle_driver {int state_count; struct cpuidle_state* states; } ;
struct cpuidle_device {int last_state_idx; struct cpuidle_state_usage* states_usage; int cpu; } ;
typedef int ktime_t ;
struct TYPE_2__ {unsigned int early_hits; scalar_t__ hits; scalar_t__ misses; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 () ;
 struct teo_cpu* FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct cpuidle_driver*,struct cpuidle_device*,int,unsigned int) ;
 int FUNC_6 (struct cpuidle_driver*,struct cpuidle_device*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct cpuidle_driver *VAR_4, struct cpuidle_device *VAR_5,
        bool *VAR_6)
{
 struct teo_cpu *VAR_7 = FUNC_4(&VAR_3, VAR_5->cpu);
 int VAR_8 = FUNC_0(VAR_5->cpu);
 unsigned int VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 ktime_t VAR_15;

 if (VAR_5->last_state_idx >= 0) {
  FUNC_6(VAR_4, VAR_5);
  VAR_5->last_state_idx = -1;
 }

 VAR_7->time_span_ns = FUNC_3();

 VAR_7->sleep_length_ns = FUNC_7(&VAR_15);
 VAR_9 = FUNC_2(VAR_7->sleep_length_ns);

 VAR_10 = 0;
 VAR_11 = -1;
 VAR_12 = VAR_4->state_count;
 VAR_13 = -1;

 for (VAR_14 = 0; VAR_14 < VAR_4->state_count; VAR_14++) {
  struct cpuidle_state *VAR_16 = &VAR_4->states[VAR_14];
  struct cpuidle_state_usage *VAR_17 = &VAR_5->states_usage[VAR_14];

  if (VAR_16->disabled || VAR_17->disable) {
   if (VAR_11 >= 0 &&
       VAR_10 < VAR_7->states[VAR_14].early_hits)
    VAR_10 = VAR_7->states[VAR_14].early_hits;

   continue;
  }

  if (VAR_13 < 0)
   VAR_13 = VAR_14;

  if (VAR_16->target_residency > VAR_9)
   break;

  if (VAR_16->exit_latency > VAR_8 && VAR_12 > VAR_14)
   VAR_12 = VAR_14;

  VAR_13 = VAR_14;

  if (VAR_10 < VAR_7->states[VAR_14].early_hits &&
      !(FUNC_8() &&
        VAR_4->states[VAR_14].target_residency < VAR_2)) {
   VAR_10 = VAR_7->states[VAR_14].early_hits;
   VAR_11 = VAR_14;
  }
 }
 if (VAR_7->states[VAR_13].hits <= VAR_7->states[VAR_13].misses &&
     VAR_11 >= 0) {
  VAR_13 = VAR_11;
  VAR_9 = VAR_4->states[VAR_13].target_residency;
 }





 if (VAR_12 < VAR_13)
  VAR_13 = VAR_12;

 if (VAR_13 < 0) {
  VAR_13 = 0;
 } else if (VAR_13 > 0) {
  u64 VAR_18 = 0;

  VAR_10 = 0;





  for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
   unsigned int VAR_19 = VAR_7->intervals[VAR_14];

   if (VAR_19 >= VAR_9)
    continue;

   VAR_10++;
   VAR_18 += VAR_19;
  }





  if (VAR_10 > VAR_1 / 2) {
   unsigned int VAR_20 = FUNC_1(VAR_18, VAR_10);





   if (!(FUNC_8() && VAR_20 < VAR_2)) {
    VAR_9 = VAR_20;
    if (VAR_4->states[VAR_13].target_residency > VAR_20)
     VAR_13 = FUNC_5(VAR_4, VAR_5,
               VAR_13, VAR_20);
   }
  }
 }





 if (((VAR_4->states[VAR_13].flags & VAR_0) ||
     VAR_9 < VAR_2) && !FUNC_8()) {
  unsigned int VAR_21 = FUNC_2(VAR_15);

  *VAR_6 = 0;







  if (VAR_13 > 0 && VAR_4->states[VAR_13].target_residency > VAR_21)
   VAR_13 = FUNC_5(VAR_4, VAR_5, VAR_13, VAR_21);
 }

 return VAR_13;
}
