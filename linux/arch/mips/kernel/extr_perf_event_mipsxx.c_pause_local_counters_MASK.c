
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_hw_events {int* saved_ctrl; } ;
struct TYPE_2__ {int num_counters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 struct cpu_hw_events* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct cpu_hw_events *VAR_3 = FUNC_4(&VAR_1);
 int VAR_4 = VAR_2.num_counters;
 unsigned long VAR_5;

 FUNC_1(VAR_5);
 do {
  VAR_4--;
  VAR_3->saved_ctrl[VAR_4] = FUNC_2(VAR_4);
  FUNC_3(VAR_4, VAR_3->saved_ctrl[VAR_4] &
      ~VAR_0);
 } while (VAR_4 > 0);
 FUNC_0(VAR_5);
}
