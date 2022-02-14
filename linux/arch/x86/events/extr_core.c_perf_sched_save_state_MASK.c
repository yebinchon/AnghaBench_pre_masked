
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sched {size_t saved_states; int state; int * saved; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct perf_sched *VAR_1)
{
 if (FUNC_0(VAR_1->saved_states >= VAR_0))
  return;

 VAR_1->saved[VAR_1->saved_states] = VAR_1->state;
 VAR_1->saved_states++;
}
