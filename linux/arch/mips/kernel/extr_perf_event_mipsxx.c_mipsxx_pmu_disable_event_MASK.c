
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_hw_events {int* saved_ctrl; } ;
struct TYPE_2__ {int num_counters; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 struct cpu_hw_events* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(int VAR_3)
{
 struct cpu_hw_events *VAR_4 = FUNC_5(&VAR_1);
 unsigned long VAR_5;

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_2.num_counters);

 FUNC_2(VAR_5);
 VAR_4->saved_ctrl[VAR_3] = FUNC_3(VAR_3) &
  ~VAR_0;
 FUNC_4(VAR_3, VAR_4->saved_ctrl[VAR_3]);
 FUNC_1(VAR_5);
}
