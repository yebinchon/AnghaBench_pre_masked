
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
 int VAR_3 ;
 int FUNC_0 (struct kvm_lapic*) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*,int,int,int*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_4, u32 VAR_5, u64 *VAR_6)
{
 struct kvm_lapic *VAR_7 = VAR_4->arch.apic;
 u32 VAR_8 = (VAR_5 - VAR_0) << 4, VAR_9, VAR_10 = 0;

 if (!FUNC_2(VAR_4) || !FUNC_0(VAR_7))
  return 1;

 if (VAR_8 == VAR_1 || VAR_8 == VAR_3)
  return 1;

 if (FUNC_1(VAR_7, VAR_8, 4, &VAR_9))
  return 1;
 if (VAR_8 == VAR_2)
  FUNC_1(VAR_7, VAR_3, 4, &VAR_10);

 *VAR_6 = (((u64)VAR_10) << 32) | VAR_9;

 return 0;
}
