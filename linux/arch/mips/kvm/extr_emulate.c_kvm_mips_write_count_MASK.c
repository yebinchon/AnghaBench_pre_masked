
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_2__ {scalar_t__ count_bias; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ,scalar_t__) ;
 int FUNC_4 (struct mips_coproc*,scalar_t__) ;

void FUNC_5(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 struct mips_coproc *VAR_2 = VAR_0->arch.cop0;
 ktime_t VAR_3;


 VAR_3 = FUNC_1(VAR_0);
 VAR_0->arch.count_bias = VAR_1 - FUNC_2(VAR_0, VAR_3);

 if (FUNC_0(VAR_0))

  FUNC_4(VAR_2, VAR_1);
 else

  FUNC_3(VAR_0, VAR_3, VAR_1);
}
