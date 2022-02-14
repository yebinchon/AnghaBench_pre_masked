
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int apic; } ;
struct kvm_vcpu {int vcpu_id; TYPE_2__* kvm; TYPE_3__ arch; } ;
struct kvm_lapic_state {scalar_t__ regs; } ;
struct TYPE_4__ {scalar_t__ x2apic_format; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_3,
  struct kvm_lapic_state *VAR_4, bool VAR_5)
{
 if (FUNC_0(VAR_3->arch.apic)) {
  u32 *VAR_6 = (u32 *)(VAR_4->regs + VAR_0);
  u32 *VAR_7 = (u32 *)(VAR_4->regs + VAR_1);

  if (VAR_3->kvm->arch.x2apic_format) {
   if (*VAR_6 != VAR_3->vcpu_id)
    return -VAR_2;
  } else {
   if (VAR_5)
    *VAR_6 >>= 24;
   else
    *VAR_6 <<= 24;
  }


  if (VAR_5)
   *VAR_7 = FUNC_1(*VAR_6);
 }

 return 0;
}
