
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int halted; } ;
struct TYPE_5__ {int pv_unhalted; } ;
struct TYPE_7__ {int mp_state; TYPE_2__ apf; TYPE_1__ pv; } ;
struct kvm_vcpu {TYPE_3__ arch; int srcu_idx; } ;
struct kvm {int srcu; } ;
struct TYPE_8__ {scalar_t__ (* pre_block ) (struct kvm_vcpu*) ;int (* post_block ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 TYPE_4__* VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;

__attribute__((used)) static inline int FUNC_8(struct kvm *VAR_3, struct kvm_vcpu *VAR_4)
{
 if (!FUNC_1(VAR_4) &&
     (!VAR_2->pre_block || VAR_2->pre_block(VAR_4) == 0)) {
  FUNC_5(&VAR_3->srcu, VAR_4->srcu_idx);
  FUNC_3(VAR_4);
  VAR_4->srcu_idx = FUNC_4(&VAR_3->srcu);

  if (VAR_2->post_block)
   VAR_2->post_block(VAR_4);

  if (!FUNC_2(VAR_1, VAR_4))
   return 1;
 }

 FUNC_0(VAR_4);
 switch(VAR_4->arch.mp_state) {
 case 130:
  VAR_4->arch.pv.pv_unhalted = 0;
  VAR_4->arch.mp_state =
   128;

 case 128:
  VAR_4->arch.apf.halted = 0;
  break;
 case 129:
  break;
 default:
  return -VAR_0;
  break;
 }
 return 1;
}
