
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct coproc_reg {scalar_t__ reg; } ;


 int FUNC_0 (struct kvm_vcpu*,scalar_t__) ;

__attribute__((used)) static inline u64 FUNC_1(struct kvm_vcpu *VAR_0,
          const struct coproc_reg *VAR_1)
{
 u64 VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1->reg + 1);
 VAR_2 = VAR_2 << 32;
 VAR_2 = VAR_2 | FUNC_0(VAR_0, VAR_1->reg);
 return VAR_2;
}
