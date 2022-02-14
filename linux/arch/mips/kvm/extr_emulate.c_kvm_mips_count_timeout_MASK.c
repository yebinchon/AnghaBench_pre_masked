
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_period; int comparecount_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum hrtimer_restart { ____Placeholder_hrtimer_restart } hrtimer_restart ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

enum hrtimer_restart FUNC_1(struct kvm_vcpu *VAR_1)
{

 FUNC_0(&VAR_1->arch.comparecount_timer,
          VAR_1->arch.count_period);
 return VAR_0;
}
