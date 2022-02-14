
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
struct vcpu_svm {unsigned long long* avic_physical_id_cache; scalar_t__ ldr_reg; } ;
struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {scalar_t__ vcpu_id; TYPE_1__ arch; } ;


 unsigned long long* FUNC_0 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct vcpu_svm* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_0)
{
 u64 *VAR_1, *VAR_2;
 struct vcpu_svm *VAR_3 = FUNC_3(VAR_0);
 u32 VAR_4 = FUNC_2(VAR_0->arch.apic);

 if (VAR_0->vcpu_id == VAR_4)
  return 0;

 VAR_1 = FUNC_0(VAR_0, VAR_0->vcpu_id);
 VAR_2 = FUNC_0(VAR_0, VAR_4);
 if (!VAR_2 || !VAR_1)
  return 1;


 *VAR_2 = *VAR_1;
 *VAR_1 = 0ULL;
 FUNC_3(VAR_0)->avic_physical_id_cache = VAR_2;





 if (VAR_3->ldr_reg)
  FUNC_1(VAR_0);

 return 0;
}
