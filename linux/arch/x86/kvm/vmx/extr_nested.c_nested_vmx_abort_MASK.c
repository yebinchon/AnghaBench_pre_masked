
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, u32 VAR_2)
{

 FUNC_0(VAR_0, VAR_1);
 FUNC_1("kvm: nested vmx abort, indicator %d\n", VAR_2);
}
