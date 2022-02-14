
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*,int,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_3, u32 VAR_4, u64 VAR_5)
{
 struct kvm_lapic *VAR_6 = VAR_3->arch.apic;
 u32 VAR_7 = (VAR_4 - VAR_0) << 4;

 if (!FUNC_2(VAR_3) || !FUNC_0(VAR_6))
  return 1;

 if (VAR_7 == VAR_2)
  return 1;


 if (VAR_7 == VAR_1)
  FUNC_1(VAR_6, VAR_2, (u32)(VAR_5 >> 32));
 return FUNC_1(VAR_6, VAR_7, (u32)VAR_5);
}
