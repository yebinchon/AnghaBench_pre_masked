
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long dec_expires; int timer_running; int dec_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int *,unsigned long,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 unsigned long FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1)
{
 unsigned long VAR_2, VAR_3;

 VAR_3 = FUNC_0();
 if (VAR_3 > VAR_1->arch.dec_expires) {

  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
  return;
 }
 VAR_2 = FUNC_4(VAR_1->arch.dec_expires - VAR_3);
 FUNC_1(&VAR_1->arch.dec_timer, VAR_2, VAR_0);
 VAR_1->arch.timer_running = 1;
}
