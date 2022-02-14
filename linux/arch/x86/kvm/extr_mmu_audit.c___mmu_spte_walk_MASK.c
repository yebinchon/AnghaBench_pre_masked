
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_mmu_page {int* spt; } ;
typedef int (* inspect_spte_fn ) (struct kvm_vcpu*,int*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct kvm_mmu_page* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2, struct kvm_mmu_page *VAR_3,
       inspect_spte_fn VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  u64 *VAR_7 = VAR_3->spt;

  VAR_4(VAR_2, VAR_7 + VAR_6, VAR_5);

  if (FUNC_1(VAR_7[VAR_6]) &&
        !FUNC_0(VAR_7[VAR_6], VAR_5)) {
   struct kvm_mmu_page *VAR_8;

   VAR_8 = FUNC_2(VAR_7[VAR_6] & VAR_0);
   FUNC_3(VAR_2, VAR_8, VAR_4, VAR_5 - 1);
  }
 }
}
