
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct debug_reg {int dummy; } ;
struct TYPE_5__ {int pgdir; struct debug_reg dbg_reg; int sane; } ;
struct kvm_vcpu {int mode; TYPE_1__ arch; } ;
struct kvm_run {int exit_reason; } ;
struct TYPE_7__ {struct debug_reg debug; } ;
struct TYPE_8__ {TYPE_3__ thread; TYPE_2__* mm; } ;
struct TYPE_6__ {int pgd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_run*,struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct debug_reg*) ;

int FUNC_11(struct kvm_run *VAR_5, struct kvm_vcpu *VAR_6)
{
 int VAR_7, VAR_8;
 struct debug_reg VAR_9;

 if (!VAR_6->arch.sane) {
  VAR_5->exit_reason = VAR_2;
  return -VAR_1;
 }

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8 <= 0) {
  VAR_7 = VAR_8;
  goto out;
 }
 VAR_9 = VAR_6->arch.dbg_reg;
 FUNC_10(&VAR_9);
 VAR_9 = VAR_4->thread.debug;
 VAR_4->thread.debug = VAR_6->arch.dbg_reg;

 VAR_6->arch.pgdir = VAR_4->mm->pgd;
 FUNC_4();

 VAR_7 = FUNC_0(VAR_5, VAR_6);





 FUNC_10(&VAR_9);
 VAR_4->thread.debug = VAR_9;
out:
 VAR_6->mode = VAR_3;
 return VAR_7;
}
