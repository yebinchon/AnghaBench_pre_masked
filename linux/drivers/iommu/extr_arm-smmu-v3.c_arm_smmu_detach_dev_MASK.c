
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_master {int ats_enabled; struct arm_smmu_domain* domain; int domain_head; } ;
struct arm_smmu_domain {int devices_lock; } ;


 int FUNC_0 (struct arm_smmu_master*) ;
 int FUNC_1 (struct arm_smmu_master*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct arm_smmu_master *VAR_0)
{
 unsigned long VAR_1;
 struct arm_smmu_domain *VAR_2 = VAR_0->domain;

 if (!VAR_2)
  return;

 FUNC_0(VAR_0);

 FUNC_3(&VAR_2->devices_lock, VAR_1);
 FUNC_2(&VAR_0->domain_head);
 FUNC_4(&VAR_2->devices_lock, VAR_1);

 VAR_0->domain = ((void*)0);
 VAR_0->ats_enabled = 0;
 FUNC_1(VAR_0);
}
