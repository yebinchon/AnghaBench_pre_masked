
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ timer_running; int dec_timer; scalar_t__ ceded; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0)
{
 VAR_0->arch.ceded = 0;
 if (VAR_0->arch.timer_running) {
  FUNC_0(&VAR_0->arch.dec_timer);
  VAR_0->arch.timer_running = 0;
 }
}
