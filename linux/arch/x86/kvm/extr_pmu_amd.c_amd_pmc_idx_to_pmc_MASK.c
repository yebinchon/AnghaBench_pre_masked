
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int dummy; } ;
struct kvm_pmc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_pmc* FUNC_0 (struct kvm_pmu*,unsigned int,int ) ;
 unsigned int FUNC_1 (struct kvm_pmu*,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ) ;
 struct kvm_vcpu* FUNC_3 (struct kvm_pmu*) ;

__attribute__((used)) static struct kvm_pmc *FUNC_4(struct kvm_pmu *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2, VAR_0);
 struct kvm_vcpu *VAR_5 = FUNC_3(VAR_2);

 if (FUNC_2(VAR_5, VAR_1)) {




  VAR_3 *= 2;
 }

 return FUNC_0(VAR_2, VAR_4 + VAR_3, VAR_0);
}
