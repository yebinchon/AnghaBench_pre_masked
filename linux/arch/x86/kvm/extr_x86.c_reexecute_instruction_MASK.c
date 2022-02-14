
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {TYPE_4__* kvm; TYPE_2__ arch; } ;
typedef int kvm_pfn_t ;
typedef scalar_t__ gva_t ;
typedef scalar_t__ gpa_t ;
struct TYPE_8__ {unsigned int indirect_shadow_pages; } ;
struct TYPE_9__ {int mmu_lock; TYPE_3__ arch; } ;
struct TYPE_6__ {scalar_t__ direct_map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,scalar_t__,int *) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10(struct kvm_vcpu *VAR_2, gva_t VAR_3,
      bool VAR_4,
      int VAR_5)
{
 gpa_t VAR_6 = VAR_3;
 kvm_pfn_t VAR_7;

 if (!(VAR_5 & VAR_0))
  return 0;

 if (FUNC_0(FUNC_4(VAR_2)))
  return 0;

 if (!VAR_2->arch.mmu->direct_map) {




  VAR_6 = FUNC_5(VAR_2, VAR_3, ((void*)0));





  if (VAR_6 == VAR_1)
   return 1;
 }







 VAR_7 = FUNC_1(VAR_2->kvm, FUNC_2(VAR_6));





 if (FUNC_3(VAR_7))
  return 0;

 FUNC_7(VAR_7);


 if (VAR_2->arch.mmu->direct_map) {
  unsigned int VAR_8;

  FUNC_8(&VAR_2->kvm->mmu_lock);
  VAR_8 = VAR_2->kvm->arch.indirect_shadow_pages;
  FUNC_9(&VAR_2->kvm->mmu_lock);

  if (VAR_8)
   FUNC_6(VAR_2->kvm, FUNC_2(VAR_6));

  return 1;
 }






 FUNC_6(VAR_2->kvm, FUNC_2(VAR_6));






 return !VAR_4;
}
