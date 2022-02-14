
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_pmu {int dummy; } ;
struct kvm_pmc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct kvm_pmc* FUNC_0 (struct kvm_pmu*,int) ;
 struct kvm_pmc* FUNC_1 (struct kvm_pmu*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct kvm_pmc *FUNC_2(struct kvm_pmu *VAR_3, int VAR_4)
{
 if (VAR_4 < VAR_0)
  return FUNC_1(VAR_3, VAR_2 + VAR_4,
      VAR_2);
 else {
  u32 VAR_5 = VAR_4 - VAR_0;

  return FUNC_0(VAR_3, VAR_5 + VAR_1);
 }
}
