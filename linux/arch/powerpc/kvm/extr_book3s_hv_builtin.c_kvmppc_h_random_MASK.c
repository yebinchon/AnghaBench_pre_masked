
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * gpr; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

long FUNC_4(struct kvm_vcpu *VAR_3)
{
 int VAR_4;


 if (FUNC_0(VAR_3->kvm) && (FUNC_1() & VAR_2))
  VAR_4 = FUNC_2(&VAR_3->arch.regs.gpr[4]);
 else
  VAR_4 = FUNC_3(&VAR_3->arch.regs.gpr[4]);
 if (VAR_4)
  return VAR_1;

 return VAR_0;
}
