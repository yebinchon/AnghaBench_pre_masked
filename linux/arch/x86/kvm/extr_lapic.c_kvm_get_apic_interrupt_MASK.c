
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {int dummy; } ;
struct TYPE_4__ {int auto_eoi_bitmap; } ;


 int FUNC_0 (struct kvm_lapic*,int *) ;
 int FUNC_1 (int,struct kvm_lapic*) ;
 int FUNC_2 (int,struct kvm_lapic*) ;
 int FUNC_3 (struct kvm_lapic*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (int,int ) ;
 TYPE_2__* FUNC_6 (struct kvm_vcpu*) ;

int FUNC_7(struct kvm_vcpu *VAR_0)
{
 int VAR_1 = FUNC_4(VAR_0);
 struct kvm_lapic *VAR_2 = VAR_0->arch.apic;
 u32 VAR_3;

 if (VAR_1 == -1)
  return -1;
 FUNC_1(VAR_1, VAR_2);
 if (FUNC_5(VAR_1, FUNC_6(VAR_0)->auto_eoi_bitmap)) {





  FUNC_3(VAR_2);
 } else {






  FUNC_2(VAR_1, VAR_2);
  FUNC_0(VAR_2, &VAR_3);
 }

 return VAR_1;
}
