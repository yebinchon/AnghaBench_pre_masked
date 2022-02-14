
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hw_events {scalar_t__ lbr_users; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct cpu_hw_events* FUNC_1 (int *) ;

void FUNC_2(bool VAR_1)
{
 struct cpu_hw_events *VAR_2 = FUNC_1(&VAR_0);

 if (VAR_2->lbr_users)
  FUNC_0(VAR_1);
}
