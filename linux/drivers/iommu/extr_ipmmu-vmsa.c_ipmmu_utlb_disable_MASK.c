
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_domain {struct ipmmu_vmsa_device* mmu; } ;
struct ipmmu_vmsa_device {int * utlb_ctx; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct ipmmu_vmsa_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ipmmu_vmsa_domain *VAR_1,
          unsigned int VAR_2)
{
 struct ipmmu_vmsa_device *VAR_3 = VAR_1->mmu;

 FUNC_1(VAR_3, FUNC_0(VAR_2), 0);
 VAR_3->utlb_ctx[VAR_2] = VAR_0;
}
