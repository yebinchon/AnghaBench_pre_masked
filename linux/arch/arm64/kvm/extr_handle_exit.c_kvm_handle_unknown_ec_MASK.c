
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_run {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_0, struct kvm_run *VAR_1)
{
 u32 VAR_2 = FUNC_3(VAR_0);

 FUNC_2("Unknown exception class: hsr: %#08x -- %s\n",
        VAR_2, FUNC_0(VAR_2));

 FUNC_1(VAR_0);
 return 1;
}
