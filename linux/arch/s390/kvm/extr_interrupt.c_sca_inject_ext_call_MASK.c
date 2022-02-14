
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union esca_sigp_ctrl {int scn; int c; int value; int member_0; } ;
union bsca_sigp_ctrl {int scn; int c; int value; int member_0; } ;
struct kvm_vcpu {size_t vcpu_id; TYPE_3__* kvm; } ;
struct esca_block {TYPE_1__* cpu; } ;
struct bsca_block {TYPE_1__* cpu; } ;
struct TYPE_5__ {int sca_lock; struct esca_block* sca; scalar_t__ use_esca; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct TYPE_4__ {union esca_sigp_ctrl sigp_ctrl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(!FUNC_3());
 FUNC_4(&VAR_2->kvm->arch.sca_lock);
 if (VAR_2->kvm->arch.use_esca) {
  struct esca_block *VAR_6 = VAR_2->kvm->arch.sca;
  union esca_sigp_ctrl *VAR_7 =
   &(VAR_6->cpu[VAR_2->vcpu_id].sigp_ctrl);
  union esca_sigp_ctrl VAR_8 = {0}, VAR_9 = *VAR_7;

  VAR_8.scn = VAR_3;
  VAR_8.c = 1;
  VAR_9.c = 0;

  VAR_4 = VAR_9.value;
  VAR_5 = FUNC_1(&VAR_7->value, VAR_9.value, VAR_8.value);
 } else {
  struct bsca_block *VAR_10 = VAR_2->kvm->arch.sca;
  union bsca_sigp_ctrl *VAR_11 =
   &(VAR_10->cpu[VAR_2->vcpu_id].sigp_ctrl);
  union bsca_sigp_ctrl VAR_12 = {0}, VAR_13 = *VAR_11;

  VAR_12.scn = VAR_3;
  VAR_12.c = 1;
  VAR_13.c = 0;

  VAR_4 = VAR_13.value;
  VAR_5 = FUNC_1(&VAR_11->value, VAR_13.value, VAR_12.value);
 }
 FUNC_5(&VAR_2->kvm->arch.sca_lock);

 if (VAR_5 != VAR_4) {

  return -VAR_1;
 }
 FUNC_2(VAR_2, VAR_0);
 return 0;
}
