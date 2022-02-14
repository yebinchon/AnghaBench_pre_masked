
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_cf_events {int alert; } ;


 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 struct cpu_cf_events* FUNC_2 (int *) ;

unsigned long FUNC_3(int VAR_1)
{
 struct cpu_cf_events *VAR_2 = FUNC_2(&VAR_0);
 unsigned long VAR_3;

 VAR_3 = FUNC_0(&VAR_2->alert);
 if (VAR_1)
  FUNC_1(&VAR_2->alert, 0);

 return VAR_3;
}
