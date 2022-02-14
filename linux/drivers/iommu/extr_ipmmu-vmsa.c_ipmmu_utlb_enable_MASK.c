
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_domain {int context_id; struct ipmmu_vmsa_device* mmu; } ;
struct ipmmu_vmsa_device {int * utlb_ctx; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ipmmu_vmsa_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ipmmu_vmsa_domain *VAR_2,
         unsigned int VAR_3)
{
 struct ipmmu_vmsa_device *VAR_4 = VAR_2->mmu;







 FUNC_3(VAR_4, FUNC_0(VAR_3), 0);

 FUNC_3(VAR_4, FUNC_1(VAR_3),
      FUNC_2(VAR_2->context_id) | VAR_0 |
      VAR_1);
 VAR_4->utlb_ctx[VAR_3] = VAR_2->context_id;
}
