
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int dummy; } ;
struct kvm_pmc {int eventsel; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_pmc* FUNC_0 (struct kvm_pmu*,int ,int ) ;
 int FUNC_1 (struct kvm_pmc*) ;
 struct kvm_pmu* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2, u32 VAR_3, u64 *VAR_4)
{
 struct kvm_pmu *VAR_5 = FUNC_2(VAR_2);
 struct kvm_pmc *VAR_6;


 VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_0);
 if (VAR_6) {
  *VAR_4 = FUNC_1(VAR_6);
  return 0;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_1);
 if (VAR_6) {
  *VAR_4 = VAR_6->eventsel;
  return 0;
 }

 return 1;
}
