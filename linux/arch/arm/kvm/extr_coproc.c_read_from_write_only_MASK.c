
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct coproc_params {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct coproc_params const*) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_0,
     const struct coproc_params *VAR_1)
{
 FUNC_0(1, "CP15 read to write-only register\n");
 FUNC_2(VAR_1);
 FUNC_1(VAR_0);
 return 0;
}
