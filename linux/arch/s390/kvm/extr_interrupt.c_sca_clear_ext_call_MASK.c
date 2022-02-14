
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union esca_sigp_ctrl {int value; } ;
union bsca_sigp_ctrl {int value; } ;
struct kvm_vcpu {size_t vcpu_id; TYPE_3__* kvm; } ;
struct esca_block {TYPE_1__* cpu; } ;
struct bsca_block {TYPE_1__* cpu; } ;
struct TYPE_5__ {int sca_lock; struct esca_block* sca; scalar_t__ use_esca; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct TYPE_4__ {union esca_sigp_ctrl sigp_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_1)
{
 int VAR_2, VAR_3;

 if (!FUNC_3())
  return;
 FUNC_2(VAR_1, VAR_0);
 FUNC_4(&VAR_1->kvm->arch.sca_lock);
 if (VAR_1->kvm->arch.use_esca) {
  struct esca_block *VAR_4 = VAR_1->kvm->arch.sca;
  union esca_sigp_ctrl *VAR_5 =
   &(VAR_4->cpu[VAR_1->vcpu_id].sigp_ctrl);
  union esca_sigp_ctrl VAR_6 = *VAR_5;

  VAR_3 = VAR_6.value;
  VAR_2 = FUNC_1(&VAR_5->value, VAR_6.value, 0);
 } else {
  struct bsca_block *VAR_7 = VAR_1->kvm->arch.sca;
  union bsca_sigp_ctrl *VAR_8 =
   &(VAR_7->cpu[VAR_1->vcpu_id].sigp_ctrl);
  union bsca_sigp_ctrl VAR_9 = *VAR_8;

  VAR_3 = VAR_9.value;
  VAR_2 = FUNC_1(&VAR_8->value, VAR_9.value, 0);
 }
 FUNC_5(&VAR_1->kvm->arch.sca_lock);
 FUNC_0(VAR_2 != VAR_3);
}
