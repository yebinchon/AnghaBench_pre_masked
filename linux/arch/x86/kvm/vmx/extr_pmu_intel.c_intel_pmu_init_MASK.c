
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {TYPE_2__* fixed_counters; TYPE_1__* gp_counters; } ;
struct TYPE_4__ {scalar_t__ idx; struct kvm_vcpu* vcpu; int type; } ;
struct TYPE_3__ {int idx; struct kvm_vcpu* vcpu; int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct kvm_pmu* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_5)
{
 int VAR_6;
 struct kvm_pmu *VAR_7 = FUNC_0(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7->gp_counters[VAR_6].type = VAR_4;
  VAR_7->gp_counters[VAR_6].vcpu = VAR_5;
  VAR_7->gp_counters[VAR_6].idx = VAR_6;
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7->fixed_counters[VAR_6].type = VAR_3;
  VAR_7->fixed_counters[VAR_6].vcpu = VAR_5;
  VAR_7->fixed_counters[VAR_6].idx = VAR_6 + VAR_0;
 }
}
