
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {scalar_t__ transition_task; int transition_ongoing; int transition_lock; int transition_wait; } ;
struct cpufreq_freqs {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct cpufreq_policy*,struct cpufreq_freqs*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct cpufreq_policy *VAR_4,
  struct cpufreq_freqs *VAR_5)
{
 FUNC_0(!(VAR_2->flags & VAR_0)
    && VAR_3 == VAR_4->transition_task);

wait:
 FUNC_5(VAR_4->transition_wait, !VAR_4->transition_ongoing);

 FUNC_2(&VAR_4->transition_lock);

 if (FUNC_4(VAR_4->transition_ongoing)) {
  FUNC_3(&VAR_4->transition_lock);
  goto wait;
 }

 VAR_4->transition_ongoing = 1;
 VAR_4->transition_task = VAR_3;

 FUNC_3(&VAR_4->transition_lock);

 FUNC_1(VAR_4, VAR_5, VAR_1);
}
