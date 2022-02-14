
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_run {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct kvm_run *VAR_0, struct kvm_vcpu *VAR_1)
{
 int VAR_2 = FUNC_4();
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3)
  FUNC_3(VAR_1);

 FUNC_1(VAR_1, VAR_2);

 if (VAR_3)
  FUNC_2(VAR_1);
}
