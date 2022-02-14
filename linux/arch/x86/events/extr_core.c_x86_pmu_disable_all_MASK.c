
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cpu_hw_events {int active_mask; } ;
struct TYPE_2__ {int num_counters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int) ;

void FUNC_5(void)
{
 struct cpu_hw_events *VAR_3 = FUNC_2(&VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2.num_counters; VAR_4++) {
  u64 VAR_5;

  if (!FUNC_1(VAR_4, VAR_3->active_mask))
   continue;
  FUNC_0(FUNC_4(VAR_4), VAR_5);
  if (!(VAR_5 & VAR_0))
   continue;
  VAR_5 &= ~VAR_0;
  FUNC_3(FUNC_4(VAR_4), VAR_5);
 }
}
