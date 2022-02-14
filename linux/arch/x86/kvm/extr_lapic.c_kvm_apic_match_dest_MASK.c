
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {int dummy; } ;





 int VAR_0 ;

 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*,int ) ;
 int FUNC_2 (struct kvm_lapic*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned int,struct kvm_lapic*,struct kvm_lapic*) ;

bool FUNC_4(struct kvm_vcpu *VAR_1, struct kvm_lapic *VAR_2,
      int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct kvm_lapic *VAR_6 = VAR_1->arch.apic;
 u32 VAR_7 = FUNC_3(VAR_1, VAR_4, VAR_2, VAR_6);

 FUNC_0(VAR_6);
 switch (VAR_3) {
 case 129:
  if (VAR_5 == VAR_0)
   return FUNC_2(VAR_6, VAR_7);
  else
   return FUNC_1(VAR_6, VAR_7);
 case 128:
  return VAR_6 == VAR_2;
 case 130:
  return 1;
 case 131:
  return VAR_6 != VAR_2;
 default:
  return 0;
 }
}
