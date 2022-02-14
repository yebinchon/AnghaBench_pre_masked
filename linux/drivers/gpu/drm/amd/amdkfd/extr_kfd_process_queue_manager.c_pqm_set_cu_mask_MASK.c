
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct queue_properties {int cu_mask; int cu_mask_count; } ;
struct process_queue_node {TYPE_5__* q; } ;
struct process_queue_manager {int dummy; } ;
struct TYPE_6__ {int cu_mask; int cu_mask_count; } ;
struct TYPE_10__ {TYPE_3__* device; TYPE_1__ properties; } ;
struct TYPE_7__ {int (* update_queue ) (TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_9__ {TYPE_2__ ops; } ;
struct TYPE_8__ {TYPE_4__* dqm; } ;


 int VAR_0 ;
 struct process_queue_node* FUNC_0 (struct process_queue_manager*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*) ;

int FUNC_4(struct process_queue_manager *VAR_1, unsigned int VAR_2,
   struct queue_properties *VAR_3)
{
 int VAR_4;
 struct process_queue_node *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5) {
  FUNC_2("No queue %d exists for update operation\n", VAR_2);
  return -VAR_0;
 }




 FUNC_1(VAR_5->q->properties.cu_mask);

 VAR_5->q->properties.cu_mask_count = VAR_3->cu_mask_count;
 VAR_5->q->properties.cu_mask = VAR_3->cu_mask;

 VAR_4 = VAR_5->q->device->dqm->ops.update_queue(VAR_5->q->device->dqm,
       VAR_5->q);
 if (VAR_4 != 0)
  return VAR_4;

 return 0;
}
