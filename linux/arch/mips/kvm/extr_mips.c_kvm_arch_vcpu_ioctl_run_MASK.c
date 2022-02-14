
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int mode; scalar_t__ mmio_needed; int mmio_is_write; } ;
struct kvm_run {scalar_t__ immediate_exit; } ;
struct TYPE_2__ {int (* vcpu_run ) (struct kvm_run*,struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;

int FUNC_14(struct kvm_vcpu *VAR_3, struct kvm_run *VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_12(VAR_3);

 FUNC_3(VAR_3);

 if (VAR_3->mmio_needed) {
  if (!VAR_3->mmio_is_write)
   FUNC_2(VAR_3, VAR_4);
  VAR_3->mmio_needed = 0;
 }

 if (VAR_4->immediate_exit)
  goto out;

 FUNC_7(1);

 FUNC_5();
 FUNC_0();
 FUNC_10(VAR_3);







 FUNC_8(VAR_3->mode, VAR_1);

 VAR_5 = VAR_2->vcpu_run(VAR_4, VAR_3);

 FUNC_11(VAR_3);
 FUNC_1();
 FUNC_6();

out:
 FUNC_4(VAR_3);

 FUNC_13(VAR_3);
 return VAR_5;
}
