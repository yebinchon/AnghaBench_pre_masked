
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sie_block; } ;
struct kvm_vcpu {void* srcu_idx; TYPE_5__* kvm; TYPE_4__* run; TYPE_1__ arch; } ;
struct TYPE_10__ {int srcu; } ;
struct TYPE_7__ {int gprs; } ;
struct TYPE_8__ {TYPE_2__ regs; } ;
struct TYPE_9__ {TYPE_3__ s; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (int *,void*) ;
 int FUNC_11 (struct kvm_vcpu*,int) ;
 int FUNC_12 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_13(struct kvm_vcpu *VAR_1)
{
 int VAR_2, VAR_3;





 VAR_1->srcu_idx = FUNC_9(&VAR_1->kvm->srcu);

 do {
  VAR_2 = FUNC_12(VAR_1);
  if (VAR_2)
   break;

  FUNC_10(&VAR_1->kvm->srcu, VAR_1->srcu_idx);




  FUNC_5();
  FUNC_2();
  FUNC_0(VAR_1);
  FUNC_6();
  VAR_3 = FUNC_7(VAR_1->arch.sie_block,
         VAR_1->run->s.regs.gprs);
  FUNC_5();
  FUNC_1(VAR_1);
  FUNC_3();
  FUNC_6();
  VAR_1->srcu_idx = FUNC_9(&VAR_1->kvm->srcu);

  VAR_2 = FUNC_11(VAR_1, VAR_3);
 } while (!FUNC_8(VAR_0) && !FUNC_4(VAR_1) && !VAR_2);

 FUNC_10(&VAR_1->kvm->srcu, VAR_1->srcu_idx);
 return VAR_2;
}
