
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipmmu_vmsa_domain {unsigned int context_id; TYPE_1__* mmu; } ;
struct TYPE_2__ {int root; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static u32 FUNC_1(struct ipmmu_vmsa_domain *VAR_1,
          unsigned int VAR_2)
{
 return FUNC_0(VAR_1->mmu->root,
     VAR_1->context_id * VAR_0 + VAR_2);
}
