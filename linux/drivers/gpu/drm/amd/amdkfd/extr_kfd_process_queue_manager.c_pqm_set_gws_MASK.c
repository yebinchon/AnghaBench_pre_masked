
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct process_queue_node {TYPE_5__* q; } ;
struct process_queue_manager {int process; } ;
struct kgd_mem {int dummy; } ;
struct TYPE_7__ {int num_gws; } ;
struct kfd_process_device {TYPE_2__ qpd; TYPE_1__* process; } ;
struct kfd_dev {TYPE_4__* dqm; int kgd; } ;
struct TYPE_10__ {struct kfd_dev* device; struct kgd_mem* gws; } ;
struct TYPE_8__ {int (* update_queue ) (TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_6__ {int kgd_process_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,void*,struct kgd_mem**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct kgd_mem*) ;
 struct process_queue_node* FUNC_4 (struct process_queue_manager*,unsigned int) ;
 struct kfd_process_device* FUNC_5 (struct kfd_dev*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct process_queue_manager *VAR_3, unsigned int VAR_4,
   void *VAR_5)
{
 struct kfd_dev *VAR_6 = ((void*)0);
 struct process_queue_node *VAR_7;
 struct kfd_process_device *VAR_8;
 struct kgd_mem *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (!VAR_7) {
  FUNC_6("Queue id does not match any known queue\n");
  return -VAR_1;
 }

 if (VAR_7->q)
  VAR_6 = VAR_7->q->device;
 if (FUNC_0(!VAR_6))
  return -VAR_2;

 VAR_8 = FUNC_5(VAR_6, VAR_3->process);
 if (!VAR_8) {
  FUNC_6("Process device data doesn't exist\n");
  return -VAR_1;
 }


 if (VAR_5 && VAR_8->qpd.num_gws)
  return -VAR_0;

 if (!VAR_5 && VAR_8->qpd.num_gws == 0)
  return -VAR_1;

 if (VAR_5)
  VAR_10 = FUNC_1(VAR_8->process->kgd_process_info,
   VAR_5, &VAR_9);
 else
  VAR_10 = FUNC_3(VAR_8->process->kgd_process_info,
   VAR_7->q->gws);
 if (FUNC_8(VAR_10))
  return VAR_10;

 VAR_7->q->gws = VAR_9;
 VAR_8->qpd.num_gws = VAR_5 ? FUNC_2(VAR_6->kgd) : 0;

 return VAR_7->q->device->dqm->ops.update_queue(VAR_7->q->device->dqm,
       VAR_7->q);
}
