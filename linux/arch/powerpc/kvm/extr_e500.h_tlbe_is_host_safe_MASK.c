
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* shared; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;
typedef int gpa_t ;
struct TYPE_3__ {int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_book3e_206_tlb_entry const*) ;
 int FUNC_1 (struct kvm_book3e_206_tlb_entry const*) ;
 int FUNC_2 (struct kvm_book3e_206_tlb_entry const*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static inline int FUNC_4(const struct kvm_vcpu *VAR_2,
   const struct kvm_book3e_206_tlb_entry *VAR_3)
{
 gpa_t VAR_4;

 if (!FUNC_2(VAR_3))
  return 0;




 if (FUNC_1(VAR_3) != !!(VAR_2->arch.shared->msr & VAR_0))
  return 0;


 VAR_4 = FUNC_0(VAR_3);
 if (!FUNC_3(VAR_2->kvm, VAR_4 >> VAR_1))

  return 0;

 return 1;
}
