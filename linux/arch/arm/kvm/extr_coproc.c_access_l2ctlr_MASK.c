
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct coproc_reg {int dummy; } ;
struct coproc_params {int Rt1; scalar_t__ is_write; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct coproc_params const*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int * FUNC_2 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_1,
     const struct coproc_params *VAR_2,
     const struct coproc_reg *VAR_3)
{
 if (VAR_2->is_write)
  return FUNC_0(VAR_1, VAR_2);

 *FUNC_2(VAR_1, VAR_2->Rt1) = FUNC_1(VAR_1, VAR_0);
 return 1;
}
