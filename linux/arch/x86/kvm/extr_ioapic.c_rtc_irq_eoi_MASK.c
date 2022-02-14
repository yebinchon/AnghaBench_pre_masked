
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int vcpu_id; } ;
struct TYPE_3__ {int map; } ;
struct TYPE_4__ {int pending_eoi; TYPE_1__ dest_map; } ;
struct kvm_ioapic {TYPE_2__ rtc_status; } ;


 int FUNC_0 (struct kvm_ioapic*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_ioapic *VAR_0, struct kvm_vcpu *VAR_1)
{
 if (FUNC_1(VAR_1->vcpu_id,
          VAR_0->rtc_status.dest_map.map)) {
  --VAR_0->rtc_status.pending_eoi;
  FUNC_0(VAR_0);
 }
}
