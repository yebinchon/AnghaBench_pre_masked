
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct TYPE_3__ {int tsr; int tcr; scalar_t__ watchdog_enabled; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int wdt_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int*,int,int) ;
 struct kvm_vcpu* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int ,struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 () ;
 struct kvm_vcpu* VAR_6 ;

void FUNC_6(struct timer_list *VAR_7)
{
 struct kvm_vcpu *VAR_8 = FUNC_2(VAR_8, VAR_7, VAR_5.wdt_timer);
 u32 VAR_9, VAR_10;
 int VAR_11;

 do {
  VAR_10 = VAR_9 = VAR_8->arch.tsr;
  VAR_11 = 0;


  if (VAR_9 & VAR_3) {
   if (VAR_9 & VAR_4)
    VAR_11 = 1;
   else
    VAR_10 = VAR_9 | VAR_4;
  } else {
   VAR_10 = VAR_9 | VAR_3;
  }
 } while (FUNC_1(&VAR_8->arch.tsr, VAR_9, VAR_10) != VAR_9);

 if (VAR_10 & VAR_4) {
  FUNC_5();
  FUNC_3(VAR_0, VAR_8);
  FUNC_4(VAR_8);
 }





 if (VAR_11 && (VAR_8->arch.tcr & VAR_2) &&
     VAR_8->arch.watchdog_enabled) {
  FUNC_5();
  FUNC_3(VAR_1, VAR_8);
  FUNC_4(VAR_8);
 }







 if (!VAR_11)
  FUNC_0(VAR_8);
}
