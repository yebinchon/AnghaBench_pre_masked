
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_2__ {struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct mips_coproc*) ;

u32 FUNC_4(struct kvm_vcpu *VAR_0)
{
 struct mips_coproc *VAR_1 = VAR_0->arch.cop0;


 if (FUNC_1(VAR_0))
  return FUNC_3(VAR_1);

 return FUNC_2(VAR_0, FUNC_0());
}
