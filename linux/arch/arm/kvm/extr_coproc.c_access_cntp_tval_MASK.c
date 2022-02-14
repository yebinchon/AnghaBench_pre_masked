
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct coproc_reg {int dummy; } ;
struct coproc_params {int Rt1; scalar_t__ is_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ,int ) ;
 int * FUNC_2 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_2,
        const struct coproc_params *VAR_3,
        const struct coproc_reg *VAR_4)
{
 u32 VAR_5;

 if (VAR_3->is_write) {
  VAR_5 = *FUNC_2(VAR_2, VAR_3->Rt1);
  FUNC_1(VAR_2,
        VAR_0, VAR_1, VAR_5);
 } else {
  VAR_5 = FUNC_0(VAR_2,
      VAR_0, VAR_1);
  *FUNC_2(VAR_2, VAR_3->Rt1) = VAR_5;
 }

 return 1;
}
