
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_2__ {scalar_t__ count_hz; scalar_t__ count_bias; scalar_t__ count_dyn_bias; int count_period; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct mips_coproc*) ;

int FUNC_7(struct kvm_vcpu *VAR_2, s64 VAR_3)
{
 struct mips_coproc *VAR_4 = VAR_2->arch.cop0;
 int VAR_5;
 ktime_t VAR_6;
 u32 VAR_7;


 if (VAR_3 <= 0 || VAR_3 > VAR_1)
  return -VAR_0;

 if (VAR_2->arch.count_hz == VAR_3)
  return 0;


 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_2);
  VAR_7 = FUNC_6(VAR_4);
 } else {
  VAR_6 = FUNC_3(VAR_2, &VAR_7);
 }


 VAR_2->arch.count_hz = VAR_3;
 VAR_2->arch.count_period = FUNC_0((u64)VAR_1 << 32, VAR_3);
 VAR_2->arch.count_dyn_bias = 0;


 VAR_2->arch.count_bias = VAR_7 - FUNC_4(VAR_2, VAR_6);


 if (!VAR_5)
  FUNC_5(VAR_2, VAR_6, VAR_7);
 return 0;
}
