
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vcpu_svm {int * avic_physical_id_cache; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct kvm_vcpu*,int,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1)
{
 u64 VAR_2;
 struct vcpu_svm *VAR_3 = FUNC_4(VAR_1);

 if (!FUNC_3(VAR_1))
  return;

 VAR_2 = FUNC_0(*(VAR_3->avic_physical_id_cache));
 if (VAR_2 & VAR_0)
  FUNC_2(VAR_1, -1, 0);

 VAR_2 &= ~VAR_0;
 FUNC_1(*(VAR_3->avic_physical_id_cache), VAR_2);
}
