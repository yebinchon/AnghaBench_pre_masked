
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int halt_no_poll_steal; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;
struct TYPE_4__ {int avg_steal_timer; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_0(struct kvm_vcpu *VAR_3)
{

 if (VAR_0.avg_steal_timer * 100 / (VAR_1 << 12) >=
     VAR_2) {
  VAR_3->stat.halt_no_poll_steal++;
  return 1;
 }
 return 0;
}
