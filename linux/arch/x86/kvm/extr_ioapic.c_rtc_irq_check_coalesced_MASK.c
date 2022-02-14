
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pending_eoi; } ;
struct kvm_ioapic {TYPE_1__ rtc_status; } ;



__attribute__((used)) static bool FUNC_0(struct kvm_ioapic *VAR_0)
{
 if (VAR_0->rtc_status.pending_eoi > 0)
  return 1;

 return 0;
}
