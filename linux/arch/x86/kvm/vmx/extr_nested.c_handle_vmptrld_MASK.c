
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ revision_id; scalar_t__ shadow_vmcs; } ;
struct vmcs12 {TYPE_1__ hdr; } ;
struct TYPE_4__ {scalar_t__ vmxon_ptr; scalar_t__ current_vmptr; int cached_vmcs12; scalar_t__ hv_evmcs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_host_map {struct vmcs12* hva; } ;
typedef scalar_t__ gpa_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int ,struct kvm_host_map*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_host_map*,int) ;
 int FUNC_3 (int ,struct vmcs12*,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*,scalar_t__*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_11 (struct vcpu_vmx*,scalar_t__) ;
 struct vcpu_vmx* FUNC_12 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_13(struct kvm_vcpu *VAR_5)
{
 struct vcpu_vmx *VAR_6 = FUNC_12(VAR_5);
 gpa_t VAR_7;

 if (!FUNC_6(VAR_5))
  return 1;

 if (FUNC_8(VAR_5, &VAR_7))
  return 1;

 if (!FUNC_10(VAR_5, VAR_7))
  return FUNC_7(VAR_5,
   VAR_3);

 if (VAR_7 == VAR_6->nested.vmxon_ptr)
  return FUNC_7(VAR_5,
   VAR_4);


 if (VAR_6->nested.hv_evmcs)
  return 1;

 if (VAR_6->nested.current_vmptr != VAR_7) {
  struct kvm_host_map VAR_8;
  struct vmcs12 *VAR_9;

  if (FUNC_1(VAR_5, FUNC_0(VAR_7), &VAR_8)) {






   return FUNC_7(VAR_5,
    VAR_2);
  }

  VAR_9 = VAR_8.hva;

  if (VAR_9->hdr.revision_id != VAR_0 ||
      (VAR_9->hdr.shadow_vmcs &&
       !FUNC_4(VAR_5))) {
   FUNC_2(VAR_5, &VAR_8, 0);
   return FUNC_7(VAR_5,
    VAR_2);
  }

  FUNC_5(VAR_5);





  FUNC_3(VAR_6->nested.cached_vmcs12, VAR_9, VAR_1);
  FUNC_2(VAR_5, &VAR_8, 0);

  FUNC_11(VAR_6, VAR_7);
 }

 return FUNC_9(VAR_5);
}
