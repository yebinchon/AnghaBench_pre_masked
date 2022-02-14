
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct sys_reg_desc {scalar_t__ Op2; scalar_t__ CRm; scalar_t__ CRn; scalar_t__ Op1; scalar_t__ Op0; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct kvm_vcpu const*) ;
 int FUNC_3 (struct kvm_vcpu const*) ;

__attribute__((used)) static u64 FUNC_4(const struct kvm_vcpu *VAR_7,
  struct sys_reg_desc const *VAR_8, bool VAR_9)
{
 u32 VAR_10 = FUNC_1((u32)VAR_8->Op0, (u32)VAR_8->Op1,
    (u32)VAR_8->CRn, (u32)VAR_8->CRm, (u32)VAR_8->Op2);
 u64 VAR_11 = VAR_9 ? 0 : FUNC_0(VAR_10);

 if (VAR_10 == VAR_6 && !FUNC_3(VAR_7)) {
  VAR_11 &= ~(0xfUL << VAR_4);
 } else if (VAR_10 == VAR_5 && !FUNC_2(VAR_7)) {
  VAR_11 &= ~((0xfUL << VAR_0) |
    (0xfUL << VAR_1) |
    (0xfUL << VAR_2) |
    (0xfUL << VAR_3));
 }

 return VAR_11;
}
