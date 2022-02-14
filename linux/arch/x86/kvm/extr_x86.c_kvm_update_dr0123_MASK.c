
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int switch_db_regs; int * db; int * eff_db; } ;
struct kvm_vcpu {int guest_debug; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_3)
{
 int VAR_4;

 if (!(VAR_3->guest_debug & VAR_1)) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   VAR_3->arch.eff_db[VAR_4] = VAR_3->arch.db[VAR_4];
  VAR_3->arch.switch_db_regs |= VAR_0;
 }
}
