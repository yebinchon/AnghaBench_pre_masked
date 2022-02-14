
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmx_msr_entry {int index; scalar_t__ reserved; } ;
struct TYPE_2__ {int apic_base; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_4,
           struct vmx_msr_entry *VAR_5)
{

 if (FUNC_0(VAR_4->arch.apic_base & VAR_3 && VAR_5->index >> 8 == 0x8))
  return -VAR_0;
 if (FUNC_0(VAR_5->index == VAR_2) ||
     FUNC_0(VAR_5->index == VAR_1))
  return -VAR_0;
 if (FUNC_0(VAR_5->reserved != 0))
  return -VAR_0;
 return 0;
}
