
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_domain {int mbm_work_cpu; int mbm_over; int cpu_mask; } ;


 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (int,int *,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rdt_domain *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (!FUNC_3(&VAR_0))
  return;
 VAR_4 = FUNC_0(&VAR_1->cpu_mask);
 VAR_1->mbm_work_cpu = VAR_4;
 FUNC_2(VAR_4, &VAR_1->mbm_over, VAR_3);
}
