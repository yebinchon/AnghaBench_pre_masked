
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u64 ;
struct TYPE_2__ {int vmxon_ptr; scalar_t__ vmxon; } ;
struct vcpu_vmx {int const msr_ia32_feature_control; TYPE_1__ nested; } ;
struct kvm_vcpu {int kvm; } ;
typedef int revision ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__*,int) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*,int *) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*,int ) ;
 struct vcpu_vmx* FUNC_10 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_11 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_12(struct kvm_vcpu *VAR_6)
{
 int VAR_7;
 gpa_t VAR_8;
 uint32_t VAR_9;
 struct vcpu_vmx *VAR_10 = FUNC_10(VAR_6);
 const u64 VAR_11 = VAR_0
  | VAR_1;
 if (!FUNC_3(VAR_6, VAR_5)) {
  FUNC_2(VAR_6, VAR_2);
  return 1;
 }


 if (FUNC_11(VAR_6)) {
  FUNC_1(VAR_6, 0);
  return 1;
 }

 if (VAR_10->nested.vmxon)
  return FUNC_6(VAR_6,
   VAR_4);

 if ((VAR_10->msr_ia32_feature_control & VAR_11)
   != VAR_11) {
  FUNC_1(VAR_6, 0);
  return 1;
 }

 if (FUNC_7(VAR_6, &VAR_8))
  return 1;
 if (!FUNC_9(VAR_6, VAR_8))
  return FUNC_5(VAR_6);

 if (FUNC_4(VAR_6->kvm, VAR_8, &VAR_9, sizeof(VAR_9)) ||
     VAR_9 != VAR_3)
  return FUNC_5(VAR_6);

 VAR_10->nested.vmxon_ptr = VAR_8;
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_8(VAR_6);
}
