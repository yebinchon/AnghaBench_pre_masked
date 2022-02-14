
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int is_evicted; scalar_t__ type; scalar_t__ is_active; int tma_addr; int tba_addr; int vmid; } ;
struct queue {TYPE_3__ properties; int mqd_mem_obj; int mqd; int list; int queue; int pipe; TYPE_2__* process; int gart_mqd_addr; } ;
struct qcm_process_device {int queues_list; int queue_count; int tma_addr; int tba_addr; int evicted; int vmid; } ;
struct mqd_manager {int (* load_mqd ) (struct mqd_manager*,int ,int ,int ,TYPE_3__*,scalar_t__) ;int (* free_mqd ) (struct mqd_manager*,int ,int ) ;int (* init_mqd ) (struct mqd_manager*,int *,int ,int *,TYPE_3__*) ;int dev; int (* allocate_mqd ) (int ,TYPE_3__*) ;} ;
struct TYPE_7__ {int (* init_sdma_vm ) (struct device_queue_manager*,struct queue*,struct qcm_process_device*) ;} ;
struct device_queue_manager {scalar_t__ total_queue_count; int xgmi_sdma_queue_count; int sdma_queue_count; int queue_count; TYPE_1__ asic_ops; struct mqd_manager** mqd_mgrs; } ;
struct TYPE_10__ {scalar_t__ mm; } ;
struct TYPE_8__ {scalar_t__ mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct qcm_process_device*,struct queue*) ;
 int FUNC_2 (struct device_queue_manager*,struct queue*) ;
 int FUNC_3 (struct device_queue_manager*,struct queue*) ;
 int FUNC_4 (struct device_queue_manager*,struct qcm_process_device*,struct queue*) ;
 TYPE_6__* VAR_6 ;
 int FUNC_5 (struct qcm_process_device*,struct queue*) ;
 int FUNC_6 (struct device_queue_manager*,struct queue*) ;
 int FUNC_7 (struct device_queue_manager*,struct queue*) ;
 int FUNC_8 (struct device_queue_manager*,struct qcm_process_device*,struct queue*) ;
 int FUNC_9 (struct device_queue_manager*) ;
 int FUNC_10 (struct device_queue_manager*) ;
 size_t FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (char*,scalar_t__,...) ;
 int FUNC_15 (char*,scalar_t__) ;
 int FUNC_16 (struct queue*) ;
 int FUNC_17 (struct device_queue_manager*,struct queue*,struct qcm_process_device*) ;
 int FUNC_18 (int ,TYPE_3__*) ;
 int FUNC_19 (struct mqd_manager*,int *,int ,int *,TYPE_3__*) ;
 int FUNC_20 (struct mqd_manager*,int ,int ,int ,TYPE_3__*,scalar_t__) ;
 int FUNC_21 (struct mqd_manager*,int ,int ) ;

__attribute__((used)) static int FUNC_22(struct device_queue_manager *VAR_8,
    struct queue *VAR_9,
    struct qcm_process_device *VAR_10)
{
 struct mqd_manager *VAR_11;
 int VAR_12;

 FUNC_16(VAR_9);

 FUNC_9(VAR_8);

 if (VAR_8->total_queue_count >= VAR_7) {
  FUNC_15("Can't create new usermode queue because %d queues were already created\n",
    VAR_8->total_queue_count);
  VAR_12 = -VAR_2;
  goto out_unlock;
 }

 if (FUNC_13(&VAR_10->queues_list)) {
  VAR_12 = FUNC_4(VAR_8, VAR_10, VAR_9);
  if (VAR_12)
   goto out_unlock;
 }
 VAR_9->properties.vmid = VAR_10->vmid;





 VAR_9->properties.is_evicted = !!VAR_10->evicted;

 VAR_9->properties.tba_addr = VAR_10->tba_addr;
 VAR_9->properties.tma_addr = VAR_10->tma_addr;

 VAR_11 = VAR_8->mqd_mgrs[FUNC_11(
   VAR_9->properties.type)];
 if (VAR_9->properties.type == VAR_3) {
  VAR_12 = FUNC_2(VAR_8, VAR_9);
  if (VAR_12)
   goto deallocate_vmid;
  FUNC_14("Loading mqd to hqd on pipe %d, queue %d\n",
   VAR_9->pipe, VAR_9->queue);
 } else if (VAR_9->properties.type == VAR_4 ||
  VAR_9->properties.type == VAR_5) {
  VAR_12 = FUNC_3(VAR_8, VAR_9);
  if (VAR_12)
   goto deallocate_vmid;
  VAR_8->asic_ops.init_sdma_vm(VAR_8, VAR_9, VAR_10);
 }

 VAR_12 = FUNC_1(VAR_10, VAR_9);
 if (VAR_12)
  goto out_deallocate_hqd;


 FUNC_10(VAR_8);
 VAR_9->mqd_mem_obj = VAR_11->allocate_mqd(VAR_11->dev, &VAR_9->properties);
 FUNC_9(VAR_8);

 if (!VAR_9->mqd_mem_obj) {
  VAR_12 = -VAR_1;
  goto out_deallocate_doorbell;
 }
 VAR_11->init_mqd(VAR_11, &VAR_9->mqd, VAR_9->mqd_mem_obj,
    &VAR_9->gart_mqd_addr, &VAR_9->properties);
 if (VAR_9->properties.is_active) {

  if (FUNC_0(VAR_9->process->mm != VAR_6->mm,
     "should only run in user thread"))
   VAR_12 = -VAR_0;
  else
   VAR_12 = VAR_11->load_mqd(VAR_11, VAR_9->mqd, VAR_9->pipe,
     VAR_9->queue, &VAR_9->properties, VAR_6->mm);
  if (VAR_12)
   goto out_free_mqd;
 }

 FUNC_12(&VAR_9->list, &VAR_10->queues_list);
 VAR_10->queue_count++;
 if (VAR_9->properties.is_active)
  VAR_8->queue_count++;

 if (VAR_9->properties.type == VAR_4)
  VAR_8->sdma_queue_count++;
 else if (VAR_9->properties.type == VAR_5)
  VAR_8->xgmi_sdma_queue_count++;





 VAR_8->total_queue_count++;
 FUNC_14("Total of %d queues are accountable so far\n",
   VAR_8->total_queue_count);
 goto out_unlock;

out_free_mqd:
 VAR_11->free_mqd(VAR_11, VAR_9->mqd, VAR_9->mqd_mem_obj);
out_deallocate_doorbell:
 FUNC_5(VAR_10, VAR_9);
out_deallocate_hqd:
 if (VAR_9->properties.type == VAR_3)
  FUNC_6(VAR_8, VAR_9);
 else if (VAR_9->properties.type == VAR_4 ||
  VAR_9->properties.type == VAR_5)
  FUNC_7(VAR_8, VAR_9);
deallocate_vmid:
 if (FUNC_13(&VAR_10->queues_list))
  FUNC_8(VAR_8, VAR_10, VAR_9);
out_unlock:
 FUNC_10(VAR_8);
 return VAR_12;
}
