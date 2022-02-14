
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_2__ {struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct mips_coproc*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct mips_coproc*) ;

void FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct mips_coproc *VAR_2 = VAR_1->arch.cop0;
 u32 VAR_3;

 FUNC_0(VAR_2, VAR_0);






 VAR_3 = FUNC_2(VAR_2);
 FUNC_1(VAR_1, VAR_3);
}
