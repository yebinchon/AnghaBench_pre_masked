
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int function; } ;
struct TYPE_4__ {TYPE_3__ comparecount_timer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_5__ {int (* vcpu_init ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_2->vcpu_init(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_0(&VAR_4->arch.comparecount_timer, VAR_0,
       VAR_1);
 VAR_4->arch.comparecount_timer.function = VAR_3;
 return 0;
}
