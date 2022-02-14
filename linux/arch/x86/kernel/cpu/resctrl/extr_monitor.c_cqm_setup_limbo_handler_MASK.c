
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_domain {int cqm_work_cpu; int cqm_limbo; int cpu_mask; } ;


 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int,int *,unsigned long) ;

void FUNC_3(struct rdt_domain *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->cpu_mask);
 VAR_0->cqm_work_cpu = VAR_3;

 FUNC_2(VAR_3, &VAR_0->cqm_limbo, VAR_2);
}
