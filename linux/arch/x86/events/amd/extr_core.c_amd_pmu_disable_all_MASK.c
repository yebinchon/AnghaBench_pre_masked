
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_hw_events {int active_mask; } ;
struct TYPE_2__ {int num_counters; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 struct cpu_hw_events* FUNC_3 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 struct cpu_hw_events *VAR_2 = FUNC_3(&VAR_0);
 int VAR_3;

 FUNC_4();






 if (FUNC_1())
  return;







 for (VAR_3 = 0; VAR_3 < VAR_1.num_counters; VAR_3++) {
  if (!FUNC_2(VAR_3, VAR_2->active_mask))
   continue;

  FUNC_0(VAR_3);
 }
}
