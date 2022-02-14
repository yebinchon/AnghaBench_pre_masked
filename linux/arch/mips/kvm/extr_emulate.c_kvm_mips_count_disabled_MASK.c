
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_coproc {int dummy; } ;
struct TYPE_2__ {int count_ctl; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mips_coproc*) ;

int FUNC_1(struct kvm_vcpu *VAR_2)
{
 struct mips_coproc *VAR_3 = VAR_2->arch.cop0;

 return (VAR_2->arch.count_ctl & VAR_1) ||
  (FUNC_0(VAR_3) & VAR_0);
}
