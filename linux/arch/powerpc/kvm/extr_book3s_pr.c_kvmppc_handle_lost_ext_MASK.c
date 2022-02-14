
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long guest_owned_ext; int vr; int fp; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_6__ {TYPE_1__* regs; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;
struct TYPE_5__ {unsigned long msr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_3->arch.guest_owned_ext & ~VAR_2->thread.regs->msr;
 if (!VAR_4)
  return;

 if (VAR_4 & VAR_0) {
  FUNC_6();
  FUNC_3();
  FUNC_4(&VAR_3->arch.fp);
  FUNC_1();
  FUNC_7();
 }
 VAR_2->thread.regs->msr |= VAR_4;
}
