
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_coproc {int dummy; } ;
struct TYPE_2__ {struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 long FUNC_0 (int) ;
 long VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (struct mips_coproc*) ;
 int FUNC_2 (struct mips_coproc*) ;

long FUNC_3(struct kvm_vcpu *VAR_2)
{
 struct mips_coproc *VAR_3 = VAR_2->arch.cop0;

 if (FUNC_2(VAR_3) & VAR_1)
  return FUNC_0(0x1fc00200);
 else
  return FUNC_1(VAR_3) & VAR_0;
}
