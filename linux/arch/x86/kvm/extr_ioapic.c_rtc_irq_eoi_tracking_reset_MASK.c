
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int map; } ;
struct TYPE_4__ {TYPE_1__ dest_map; scalar_t__ pending_eoi; } ;
struct kvm_ioapic {TYPE_2__ rtc_status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_ioapic *VAR_1)
{
 VAR_1->rtc_status.pending_eoi = 0;
 FUNC_0(VAR_1->rtc_status.dest_map.map, VAR_0);
}
