
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_page {scalar_t__ spt; } ;
struct kvm {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct kvm*,struct kvm_mmu_page*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kvm *VAR_1,
      struct kvm_mmu_page *VAR_2)
{
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  FUNC_0(VAR_1, VAR_2, VAR_2->spt + VAR_3);
}
