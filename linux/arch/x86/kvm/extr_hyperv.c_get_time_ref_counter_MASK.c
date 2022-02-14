
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {scalar_t__ tsc_offset; int tsc_scale; int tsc_sequence; } ;
struct kvm_hv {TYPE_2__ tsc_ref; } ;
struct TYPE_3__ {struct kvm_hv hyperv; } ;
struct kvm {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct kvm*) ;
 struct kvm_vcpu* FUNC_2 (struct kvm*,int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static u64 FUNC_6(struct kvm *VAR_0)
{
 struct kvm_hv *VAR_1 = &VAR_0->arch.hyperv;
 struct kvm_vcpu *VAR_2;
 u64 VAR_3;





 if (!VAR_1->tsc_ref.tsc_sequence)
  return FUNC_0(FUNC_1(VAR_0), 100);

 VAR_2 = FUNC_2(VAR_0, 0);
 VAR_3 = FUNC_3(VAR_2, FUNC_5());
 return FUNC_4(VAR_3, VAR_1->tsc_ref.tsc_scale, 64)
  + VAR_1->tsc_ref.tsc_offset;
}
