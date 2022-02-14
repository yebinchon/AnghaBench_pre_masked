
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_perfmon {unsigned int ncounters; int * counters; } ;
struct vc4_dev {struct vc4_perfmon* active_perfmon; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct vc4_dev *VAR_1, struct vc4_perfmon *VAR_2,
        bool VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_3(!VAR_1->active_perfmon ||
    VAR_2 != VAR_1->active_perfmon))
  return;

 if (VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_2->ncounters; VAR_4++)
   VAR_2->counters[VAR_4] += FUNC_1(FUNC_0(VAR_4));
 }

 FUNC_2(VAR_0, 0);
 VAR_1->active_perfmon = ((void*)0);
}
