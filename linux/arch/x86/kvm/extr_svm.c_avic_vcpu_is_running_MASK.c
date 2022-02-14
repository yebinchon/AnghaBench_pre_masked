
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vcpu_svm {int * avic_physical_id_cache; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_1(VAR_1);
 u64 *VAR_3 = VAR_2->avic_physical_id_cache;

 if (!VAR_3)
  return 0;

 return (FUNC_0(*VAR_3) & VAR_0);
}
