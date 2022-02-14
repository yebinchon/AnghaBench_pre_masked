
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vcpu_svm {scalar_t__ avic_is_running; int * avic_physical_id_cache; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct kvm_vcpu*,int,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_6 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_2, int VAR_3)
{
 u64 VAR_4;

 int VAR_5 = FUNC_4(VAR_3);
 struct vcpu_svm *VAR_6 = FUNC_6(VAR_2);

 if (!FUNC_5(VAR_2))
  return;





 if (FUNC_1(VAR_5 > VAR_0))
  return;

 VAR_4 = FUNC_0(*(VAR_6->avic_physical_id_cache));
 FUNC_1(VAR_4 & VAR_1);

 VAR_4 &= ~VAR_0;
 VAR_4 |= (VAR_5 & VAR_0);

 VAR_4 &= ~VAR_1;
 if (VAR_6->avic_is_running)
  VAR_4 |= VAR_1;

 FUNC_2(*(VAR_6->avic_physical_id_cache), VAR_4);
 FUNC_3(VAR_2, VAR_5,
     VAR_6->avic_is_running);
}
