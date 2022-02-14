
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pv_unhalted; } ;
struct TYPE_5__ {scalar_t__ apicv_active; TYPE_1__ pv; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {scalar_t__ (* dy_apicv_has_pending_interrupt ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct kvm_vcpu*) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;

bool FUNC_3(struct kvm_vcpu *VAR_4)
{
 if (FUNC_0(VAR_4->arch.pv.pv_unhalted))
  return 1;

 if (FUNC_1(VAR_1, VAR_4) ||
  FUNC_1(VAR_2, VAR_4) ||
   FUNC_1(VAR_0, VAR_4))
  return 1;

 if (VAR_4->arch.apicv_active && VAR_3->dy_apicv_has_pending_interrupt(VAR_4))
  return 1;

 return 0;
}
