
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct coproc_reg {int dummy; } ;
struct coproc_params {int Op1; int Rt1; int Rt2; int is_write; } ;


 int FUNC_0 (struct kvm_vcpu*,struct coproc_params const*) ;
 int* FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int,int) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_0,
      const struct coproc_params *VAR_1,
      const struct coproc_reg *VAR_2)
{
 u64 VAR_3;
 bool VAR_4;

 if (!VAR_1->is_write)
  return FUNC_0(VAR_0, VAR_1);

 VAR_3 = (u64)*FUNC_1(VAR_0, VAR_1->Rt2) << 32;
 VAR_3 |= *FUNC_1(VAR_0, VAR_1->Rt1) ;
 switch (VAR_1->Op1) {
 default:
 case 0:
  VAR_4 = 1;
  break;
 case 1:
 case 2:
  VAR_4 = 0;
  break;
 }

 FUNC_2(VAR_0, VAR_3, VAR_4);

 return 1;
}
