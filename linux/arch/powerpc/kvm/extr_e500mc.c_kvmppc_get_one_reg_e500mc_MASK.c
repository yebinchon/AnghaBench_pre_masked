
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union kvmppc_one_reg {int dummy; } kvmppc_one_reg ;
typedef int u64 ;
struct TYPE_2__ {int sprg9; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



 union kvmppc_one_reg FUNC_0 (int,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int,union kvmppc_one_reg*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_0, u64 VAR_1,
         union kvmppc_one_reg *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_1) {
 case 128:
  *VAR_2 = FUNC_0(VAR_1, VAR_0->arch.sprg9);
  break;
 default:
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 }

 return VAR_3;
}
