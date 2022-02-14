
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hw_events {scalar_t__ pebs_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cpu_hw_events* FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(void)
{
 struct cpu_hw_events *VAR_2 = FUNC_0(&VAR_1);

 if (VAR_2->pebs_enabled)
  FUNC_1(VAR_0, VAR_2->pebs_enabled);
}
