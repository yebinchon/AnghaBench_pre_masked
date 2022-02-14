
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_coproc {int dummy; } ;
struct TYPE_2__ {int maar; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct mips_coproc*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, unsigned long VAR_2)
{
 struct mips_coproc *VAR_3 = VAR_1->arch.cop0;

 VAR_2 &= VAR_0;
 if (VAR_2 == VAR_0)
  FUNC_1(VAR_3, FUNC_0(VAR_1->arch.maar) - 1);
 else if (VAR_2 < FUNC_0(VAR_1->arch.maar))
  FUNC_1(VAR_3, VAR_2);
}
