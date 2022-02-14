
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long guest_debug_dr7; unsigned long dr7; int switch_db_regs; } ;
struct kvm_vcpu {int guest_debug; TYPE_1__ arch; } ;
struct TYPE_4__ {int (* set_dr7 ) (struct kvm_vcpu*,unsigned long) ;} ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_4)
{
 unsigned long VAR_5;

 if (VAR_4->guest_debug & VAR_2)
  VAR_5 = VAR_4->arch.guest_debug_dr7;
 else
  VAR_5 = VAR_4->arch.dr7;
 VAR_3->set_dr7(VAR_4, VAR_5);
 VAR_4->arch.switch_db_regs &= ~VAR_1;
 if (VAR_5 & VAR_0)
  VAR_4->arch.switch_db_regs |= VAR_1;
}
