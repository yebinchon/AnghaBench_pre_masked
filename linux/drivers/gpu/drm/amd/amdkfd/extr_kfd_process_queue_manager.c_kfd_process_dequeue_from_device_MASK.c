
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kfd_process_device {int already_dequeued; int qpd; struct kfd_dev* dev; } ;
struct kfd_dev {TYPE_2__* dqm; } ;
struct TYPE_3__ {int (* process_termination ) (TYPE_2__*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (TYPE_2__*,int *) ;

void FUNC_1(struct kfd_process_device *VAR_0)
{
 struct kfd_dev *VAR_1 = VAR_0->dev;

 if (VAR_0->already_dequeued)
  return;

 VAR_1->dqm->ops.process_termination(VAR_1->dqm, &VAR_0->qpd);
 VAR_0->already_dequeued = 1;
}
