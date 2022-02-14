
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_svm {int avic_is_running; } ;
struct kvm_vcpu {int cpu; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0, bool VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_2(VAR_0);

 VAR_2->avic_is_running = VAR_1;
 if (VAR_1)
  FUNC_0(VAR_0, VAR_0->cpu);
 else
  FUNC_1(VAR_0);
}
