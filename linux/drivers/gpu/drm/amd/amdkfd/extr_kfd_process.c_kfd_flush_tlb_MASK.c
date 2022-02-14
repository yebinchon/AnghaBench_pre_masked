
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int vmid; } ;
struct kfd_process_device {TYPE_1__* process; TYPE_3__ qpd; struct kfd_dev* dev; } ;
struct kfd_dev {int kgd; TYPE_2__* dqm; struct kfd2kgd_calls* kfd2kgd; } ;
struct kfd2kgd_calls {int (* invalidate_tlbs ) (int ,int ) ;int (* invalidate_tlbs_vmid ) (int ,int ) ;} ;
struct TYPE_5__ {scalar_t__ sched_policy; } ;
struct TYPE_4__ {int pasid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct kfd_process_device *VAR_1)
{
 struct kfd_dev *VAR_2 = VAR_1->dev;
 const struct kfd2kgd_calls *VAR_3 = VAR_2->kfd2kgd;

 if (VAR_2->dqm->sched_policy == VAR_0) {



  if (VAR_1->qpd.vmid)
   VAR_3->invalidate_tlbs_vmid(VAR_2->kgd, VAR_1->qpd.vmid);
 } else {
  VAR_3->invalidate_tlbs(VAR_2->kgd, VAR_1->process->pasid);
 }
}
