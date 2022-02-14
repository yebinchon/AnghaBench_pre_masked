
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int dummy; } ;
typedef enum pmu_type { ____Placeholder_pmu_type } pmu_type ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 struct kvm_vcpu* FUNC_1 (struct kvm_pmu*) ;

__attribute__((used)) static unsigned int FUNC_2(struct kvm_pmu *VAR_6, enum pmu_type VAR_7)
{
 struct kvm_vcpu *VAR_8 = FUNC_1(VAR_6);

 if (FUNC_0(VAR_8, VAR_5)) {
  if (VAR_7 == VAR_4)
   return VAR_1;
  else
   return VAR_0;
 } else {
  if (VAR_7 == VAR_4)
   return VAR_3;
  else
   return VAR_2;
 }
}
