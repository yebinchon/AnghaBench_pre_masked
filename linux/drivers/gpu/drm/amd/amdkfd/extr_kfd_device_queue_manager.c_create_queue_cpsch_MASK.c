
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int is_evicted; scalar_t__ is_active; int tma_addr; int tba_addr; } ;
struct queue {TYPE_2__ properties; int list; int gart_mqd_addr; int mqd_mem_obj; int mqd; } ;
struct qcm_process_device {int queue_count; int queues_list; int evicted; int tma_addr; int tba_addr; } ;
struct mqd_manager {int (* init_mqd ) (struct mqd_manager*,int *,int ,int *,TYPE_2__*) ;int dev; int (* allocate_mqd ) (int ,TYPE_2__*) ;} ;
struct TYPE_4__ {int (* init_sdma_vm ) (struct device_queue_manager*,struct queue*,struct qcm_process_device*) ;} ;
struct device_queue_manager {scalar_t__ total_queue_count; int xgmi_sdma_queue_count; int sdma_queue_count; int queue_count; TYPE_1__ asic_ops; struct mqd_manager** mqd_mgrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qcm_process_device*,struct queue*) ;
 int FUNC_1 (struct device_queue_manager*,struct queue*) ;
 int FUNC_2 (struct qcm_process_device*,struct queue*) ;
 int FUNC_3 (struct device_queue_manager*,struct queue*) ;
 int FUNC_4 (struct device_queue_manager*) ;
 int FUNC_5 (struct device_queue_manager*) ;
 int FUNC_6 (struct device_queue_manager*,int ,int ) ;
 size_t FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (char*,scalar_t__) ;
 int FUNC_11 (struct device_queue_manager*,struct queue*,struct qcm_process_device*) ;
 int FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (struct mqd_manager*,int *,int ,int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_14(struct device_queue_manager *VAR_6, struct queue *VAR_7,
   struct qcm_process_device *VAR_8)
{
 int VAR_9;
 struct mqd_manager *VAR_10;

 if (VAR_6->total_queue_count >= VAR_5) {
  FUNC_10("Can't create new usermode queue because %d queues were already created\n",
    VAR_6->total_queue_count);
  VAR_9 = -VAR_1;
  goto out;
 }

 if (VAR_7->properties.type == VAR_2 ||
  VAR_7->properties.type == VAR_3) {
  FUNC_4(VAR_6);
  VAR_9 = FUNC_1(VAR_6, VAR_7);
  FUNC_5(VAR_6);
  if (VAR_9)
   goto out;
 }

 VAR_9 = FUNC_0(VAR_8, VAR_7);
 if (VAR_9)
  goto out_deallocate_sdma_queue;

 VAR_10 = VAR_6->mqd_mgrs[FUNC_7(
   VAR_7->properties.type)];

 if (VAR_7->properties.type == VAR_2 ||
  VAR_7->properties.type == VAR_3)
  VAR_6->asic_ops.init_sdma_vm(VAR_6, VAR_7, VAR_8);
 VAR_7->properties.tba_addr = VAR_8->tba_addr;
 VAR_7->properties.tma_addr = VAR_8->tma_addr;
 VAR_7->mqd_mem_obj = VAR_10->allocate_mqd(VAR_10->dev, &VAR_7->properties);
 if (!VAR_7->mqd_mem_obj) {
  VAR_9 = -VAR_0;
  goto out_deallocate_doorbell;
 }

 FUNC_4(VAR_6);





 VAR_7->properties.is_evicted = !!VAR_8->evicted;
 VAR_10->init_mqd(VAR_10, &VAR_7->mqd, VAR_7->mqd_mem_obj,
    &VAR_7->gart_mqd_addr, &VAR_7->properties);

 FUNC_8(&VAR_7->list, &VAR_8->queues_list);
 VAR_8->queue_count++;
 if (VAR_7->properties.is_active) {
  VAR_6->queue_count++;
  VAR_9 = FUNC_6(VAR_6,
    VAR_4, 0);
 }

 if (VAR_7->properties.type == VAR_2)
  VAR_6->sdma_queue_count++;
 else if (VAR_7->properties.type == VAR_3)
  VAR_6->xgmi_sdma_queue_count++;




 VAR_6->total_queue_count++;

 FUNC_9("Total of %d queues are accountable so far\n",
   VAR_6->total_queue_count);

 FUNC_5(VAR_6);
 return VAR_9;

out_deallocate_doorbell:
 FUNC_2(VAR_8, VAR_7);
out_deallocate_sdma_queue:
 if (VAR_7->properties.type == VAR_2 ||
  VAR_7->properties.type == VAR_3) {
  FUNC_4(VAR_6);
  FUNC_3(VAR_6, VAR_7);
  FUNC_5(VAR_6);
 }
out:
 return VAR_9;
}
