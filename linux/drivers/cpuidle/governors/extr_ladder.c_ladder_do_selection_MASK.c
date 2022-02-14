
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ladder_device {TYPE_2__* states; } ;
struct cpuidle_device {int last_state_idx; } ;
struct TYPE_3__ {scalar_t__ demotion_count; scalar_t__ promotion_count; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;



__attribute__((used)) static inline void FUNC_0(struct cpuidle_device *VAR_0,
           struct ladder_device *VAR_1,
           int VAR_2, int VAR_3)
{
 VAR_1->states[VAR_2].stats.promotion_count = 0;
 VAR_1->states[VAR_2].stats.demotion_count = 0;
 VAR_0->last_state_idx = VAR_3;
}
