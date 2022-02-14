
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_2__ {struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (struct mips_coproc*) ;
 int FUNC_2 (struct mips_coproc*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0)
{
 struct mips_coproc *VAR_1 = VAR_0->arch.cop0;
 u32 VAR_2, VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_3);
 FUNC_0(VAR_0, VAR_3, VAR_2);
}
