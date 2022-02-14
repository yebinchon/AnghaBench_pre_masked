
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_hw_events {int * saved_ctrl; } ;
struct TYPE_2__ {int num_counters; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 struct cpu_hw_events* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct cpu_hw_events *VAR_2 = FUNC_1(&VAR_0);
 int VAR_3 = VAR_1.num_counters;

 do {
  VAR_3--;
  FUNC_0(VAR_3, VAR_2->saved_ctrl[VAR_3]);
 } while (VAR_3 > 0);
}
