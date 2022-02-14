
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hw_events {int perf_ctr_virt_mask; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 struct cpu_hw_events* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(void)
{
 struct cpu_hw_events *VAR_2 = FUNC_1(&VAR_1);







 VAR_2->perf_ctr_virt_mask = VAR_0;


 FUNC_0();
 FUNC_2(0);
}
