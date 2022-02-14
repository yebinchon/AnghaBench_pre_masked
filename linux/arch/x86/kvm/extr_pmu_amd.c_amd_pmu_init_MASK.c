
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {TYPE_1__* gp_counters; } ;
struct TYPE_2__ {int idx; struct kvm_vcpu* vcpu; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct kvm_pmu* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_3)
{
 struct kvm_pmu *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_0(VAR_0 > VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_0 ; VAR_5++) {
  VAR_4->gp_counters[VAR_5].type = VAR_2;
  VAR_4->gp_counters[VAR_5].vcpu = VAR_3;
  VAR_4->gp_counters[VAR_5].idx = VAR_5;
 }
}
