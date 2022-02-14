
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {scalar_t__ revision_id; } ;
struct vmcs12 {TYPE_1__ hdr; } ;
struct TYPE_8__ {TYPE_2__* hva; } ;
struct TYPE_7__ {scalar_t__ hv_evmcs_vmptr; unsigned long long current_vmptr; int dirty_vmcs12; TYPE_2__* hv_evmcs; TYPE_4__ hv_evmcs_map; int enlightened_vmcs_enabled; } ;
struct vcpu_vmx {TYPE_3__ nested; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_6__ {scalar_t__ revision_id; int hv_clean_fields; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vmcs12*,int ,int) ;
 int FUNC_5 (struct kvm_vcpu*,scalar_t__*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_7 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_3,
       bool VAR_4)
{
 struct vcpu_vmx *VAR_5 = FUNC_7(VAR_3);
 bool VAR_6 = 0;
 u64 VAR_7;

 if (FUNC_3(!VAR_5->nested.enlightened_vmcs_enabled))
  return 1;

 if (!FUNC_5(VAR_3, &VAR_7))
  return 1;

 if (FUNC_8(VAR_7 != VAR_5->nested.hv_evmcs_vmptr)) {
  if (!VAR_5->nested.hv_evmcs)
   VAR_5->nested.current_vmptr = -1ull;

  FUNC_6(VAR_3);

  if (FUNC_2(VAR_3, FUNC_1(VAR_7),
     &VAR_5->nested.hv_evmcs_map))
   return 0;

  VAR_5->nested.hv_evmcs = VAR_5->nested.hv_evmcs_map.hva;
  if ((VAR_5->nested.hv_evmcs->revision_id != VAR_1) &&
      (VAR_5->nested.hv_evmcs->revision_id != VAR_2)) {
   FUNC_6(VAR_3);
   return 0;
  }

  VAR_5->nested.dirty_vmcs12 = 1;
  VAR_5->nested.hv_evmcs_vmptr = VAR_7;

  VAR_6 = 1;






  if (VAR_4) {
   struct vmcs12 *VAR_8 = FUNC_0(VAR_3);
   FUNC_4(VAR_8, 0, sizeof(*VAR_8));
   VAR_8->hdr.revision_id = VAR_2;
  }

 }





 if (VAR_4 || VAR_6)
  VAR_5->nested.hv_evmcs->hv_clean_fields &=
   ~VAR_0;

 return 1;
}
