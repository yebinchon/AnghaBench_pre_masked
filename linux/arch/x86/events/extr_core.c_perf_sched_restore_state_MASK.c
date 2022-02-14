
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used; int counter; } ;
struct perf_sched {size_t saved_states; TYPE_1__ state; TYPE_1__* saved; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct perf_sched *VAR_0)
{
 if (!VAR_0->saved_states)
  return 0;

 VAR_0->saved_states--;
 VAR_0->state = VAR_0->saved[VAR_0->saved_states];


 FUNC_0(VAR_0->state.counter++, VAR_0->state.used);

 return 1;
}
