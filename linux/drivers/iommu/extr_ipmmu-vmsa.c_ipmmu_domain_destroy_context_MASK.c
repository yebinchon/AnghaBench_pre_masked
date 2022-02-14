
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmmu_vmsa_domain {int context_id; TYPE_1__* mmu; } ;
struct TYPE_2__ {int root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipmmu_vmsa_domain*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ipmmu_vmsa_domain*) ;

__attribute__((used)) static void FUNC_3(struct ipmmu_vmsa_domain *VAR_2)
{
 if (!VAR_2->mmu)
  return;







 FUNC_0(VAR_2, VAR_0, VAR_1);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2->mmu->root, VAR_2->context_id);
}
