
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long current_vmptr; int posted_intr_nv; int cached_vmcs12; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct TYPE_3__ {int guest_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vcpu_vmx*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int *,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int,int ,int ,int ) ;
 struct vcpu_vmx* FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct vcpu_vmx*) ;

__attribute__((used)) static inline void FUNC_7(struct kvm_vcpu *VAR_4)
{
 struct vcpu_vmx *VAR_5 = FUNC_5(VAR_4);

 if (VAR_5->nested.current_vmptr == -1ull)
  return;

 FUNC_1(VAR_4, FUNC_2(VAR_4));

 if (VAR_3) {


  FUNC_0(VAR_5);
  FUNC_6(VAR_5);
 }
 VAR_5->nested.posted_intr_nv = -1;


 FUNC_4(VAR_4,
      VAR_5->nested.current_vmptr >> VAR_1,
      VAR_5->nested.cached_vmcs12, 0, VAR_2);

 FUNC_3(VAR_4, &VAR_4->arch.guest_mmu, VAR_0);

 VAR_5->nested.current_vmptr = -1ull;
}
