
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct coproc_reg {int dummy; } ;
struct coproc_params {int Rt1; scalar_t__ is_write; } ;


 int FUNC_0 (struct kvm_vcpu*,struct coproc_params const*) ;
 scalar_t__* FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0,
      const struct coproc_params *VAR_1,
      const struct coproc_reg *VAR_2)
{
 if (VAR_1->is_write)
  return FUNC_0(VAR_0, VAR_1);

 *FUNC_1(VAR_0, VAR_1->Rt1) = 0;
 return 1;
}
