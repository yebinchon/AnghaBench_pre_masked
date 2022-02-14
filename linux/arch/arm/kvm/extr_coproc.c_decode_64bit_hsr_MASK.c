
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct coproc_params {int CRn; int Rt1; int is_write; int is_64bit; int Op1; int Rt2; scalar_t__ CRm; scalar_t__ Op2; } ;


 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static struct coproc_params FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct coproc_params VAR_1;

 VAR_1.CRn = (FUNC_0(VAR_0) >> 1) & 0xf;
 VAR_1.Rt1 = (FUNC_0(VAR_0) >> 5) & 0xf;
 VAR_1.is_write = ((FUNC_0(VAR_0) & 1) == 0);
 VAR_1.is_64bit = 1;

 VAR_1.Op1 = (FUNC_0(VAR_0) >> 16) & 0xf;
 VAR_1.Op2 = 0;
 VAR_1.Rt2 = (FUNC_0(VAR_0) >> 10) & 0xf;
 VAR_1.CRm = 0;

 return VAR_1;
}
