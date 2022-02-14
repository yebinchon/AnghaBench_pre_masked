
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int apic_base; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct vcpu_svm {TYPE_3__ vcpu; scalar_t__ virt_spec_ctrl; scalar_t__ spec_ctrl; } ;
struct TYPE_4__ {int microcode_version; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vcpu_svm*,int) ;
 int FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (struct kvm_vcpu*,int*,int*,int*,int*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 struct vcpu_svm* FUNC_6 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_3, bool VAR_4)
{
 struct vcpu_svm *VAR_5 = FUNC_6(VAR_3);
 u32 VAR_6;
 u32 VAR_7 = 1;

 VAR_3->arch.microcode_version = 0x01000065;
 VAR_5->spec_ctrl = 0;
 VAR_5->virt_spec_ctrl = 0;

 if (!VAR_4) {
  VAR_5->vcpu.arch.apic_base = VAR_0 |
        VAR_2;
  if (FUNC_5(&VAR_5->vcpu))
   VAR_5->vcpu.arch.apic_base |= VAR_1;
 }
 FUNC_1(VAR_5);

 FUNC_2(VAR_3, &VAR_7, &VAR_6, &VAR_6, &VAR_6, 1);
 FUNC_3(VAR_3, VAR_7);

 if (FUNC_4(VAR_3) && !VAR_4)
  FUNC_0(VAR_5, VAR_0);
}
