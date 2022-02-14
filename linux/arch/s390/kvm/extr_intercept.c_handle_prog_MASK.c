
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* sie_block; } ;
struct TYPE_4__ {int exit_program_interruption; } ;
struct kvm_vcpu {TYPE_2__ arch; TYPE_1__ stat; } ;
typedef int psw_t ;
struct TYPE_6__ {scalar_t__ iprcc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ,int *,int) ;
 int FUNC_7 (struct kvm_vcpu*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_3)
{
 psw_t VAR_4;
 int VAR_5;

 VAR_3->stat.exit_program_interruption++;

 if (FUNC_0(VAR_3) && FUNC_5(VAR_3)) {
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5)
   return VAR_5;

  if (VAR_3->arch.sie_block->iprcc == 0)
   return 0;
 }

 FUNC_7(VAR_3, VAR_3->arch.sie_block->iprcc);
 if (VAR_3->arch.sie_block->iprcc == VAR_1) {
  VAR_5 = FUNC_6(VAR_3, VAR_2, &VAR_4, sizeof(psw_t));
  if (VAR_5)
   return VAR_5;

  if (!FUNC_3(&VAR_4))
   return -VAR_0;
 }
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_3);
}
