
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pio_data; int mce_banks; } ;
struct kvm_vcpu {TYPE_1__ arch; TYPE_2__* kvm; } ;
struct TYPE_4__ {int srcu; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct kvm_vcpu *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 FUNC_1(VAR_1->arch.mce_banks);
 FUNC_2(VAR_1);
 VAR_2 = FUNC_7(&VAR_1->kvm->srcu);
 FUNC_4(VAR_1);
 FUNC_8(&VAR_1->kvm->srcu, VAR_2);
 FUNC_0((unsigned long)VAR_1->arch.pio_data);
 if (!FUNC_6(VAR_1))
  FUNC_9(&VAR_0);
}
