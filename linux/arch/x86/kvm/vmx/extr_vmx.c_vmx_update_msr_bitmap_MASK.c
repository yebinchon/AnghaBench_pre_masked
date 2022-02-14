
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned long* msr_bitmap; } ;
struct vcpu_vmx {int msr_bitmap_mode; TYPE_1__ vmcs01; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vcpu_vmx* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (unsigned long*,int) ;

void FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct vcpu_vmx *VAR_3 = FUNC_0(VAR_2);
 unsigned long *VAR_4 = VAR_3->vmcs01.msr_bitmap;
 u8 VAR_5 = FUNC_1(VAR_2);
 u8 VAR_6 = VAR_5 ^ VAR_3->msr_bitmap_mode;

 if (!VAR_6)
  return;

 if (VAR_6 & (VAR_0 | VAR_1))
  FUNC_2(VAR_4, VAR_5);

 VAR_3->msr_bitmap_mode = VAR_5;
}
