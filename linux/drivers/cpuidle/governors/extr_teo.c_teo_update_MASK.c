
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct teo_cpu {scalar_t__ sleep_length_ns; scalar_t__ time_span_ns; unsigned int* intervals; scalar_t__ interval_idx; TYPE_2__* states; } ;
struct cpuidle_driver {int state_count; TYPE_1__* states; } ;
struct cpuidle_device {size_t last_state_idx; int cpu; } ;
struct TYPE_4__ {unsigned int early_hits; unsigned int hits; unsigned int misses; } ;
struct TYPE_3__ {unsigned int exit_latency; unsigned int target_residency; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct teo_cpu* FUNC_1 (int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct cpuidle_driver *VAR_5, struct cpuidle_device *VAR_6)
{
 struct teo_cpu *VAR_7 = FUNC_1(&VAR_4, VAR_6->cpu);
 unsigned int VAR_8 = FUNC_0(VAR_7->sleep_length_ns);
 int VAR_9, VAR_10 = -1, VAR_11 = -1;
 unsigned int VAR_12;

 if (VAR_7->time_span_ns >= VAR_7->sleep_length_ns) {





  VAR_12 = VAR_3;
 } else {
  unsigned int VAR_13;

  VAR_13 = VAR_5->states[VAR_6->last_state_idx].exit_latency;

  VAR_12 = FUNC_0(VAR_7->time_span_ns);






  if (VAR_12 >= VAR_13)
   VAR_12 -= VAR_13 / 2;
  else
   VAR_12 /= 2;
 }





 for (VAR_9 = 0; VAR_9 < VAR_5->state_count; VAR_9++) {
  unsigned int VAR_14 = VAR_7->states[VAR_9].early_hits;

  VAR_7->states[VAR_9].early_hits -= VAR_14 >> VAR_0;

  if (VAR_5->states[VAR_9].target_residency <= VAR_8) {
   VAR_11 = VAR_9;
   if (VAR_5->states[VAR_9].target_residency <= VAR_12)
    VAR_10 = VAR_9;
  }
 }
 if (VAR_11 >= 0) {
  unsigned int VAR_15 = VAR_7->states[VAR_11].hits;
  unsigned int VAR_16 = VAR_7->states[VAR_11].misses;

  VAR_15 -= VAR_15 >> VAR_0;
  VAR_16 -= VAR_16 >> VAR_0;

  if (VAR_11 > VAR_10) {
   VAR_16 += VAR_2;
   if (VAR_10 >= 0)
    VAR_7->states[VAR_10].early_hits += VAR_2;
  } else {
   VAR_15 += VAR_2;
  }

  VAR_7->states[VAR_11].misses = VAR_16;
  VAR_7->states[VAR_11].hits = VAR_15;
 }





 VAR_7->intervals[VAR_7->interval_idx++] = VAR_12;
 if (VAR_7->interval_idx > VAR_1)
  VAR_7->interval_idx = 0;
}
