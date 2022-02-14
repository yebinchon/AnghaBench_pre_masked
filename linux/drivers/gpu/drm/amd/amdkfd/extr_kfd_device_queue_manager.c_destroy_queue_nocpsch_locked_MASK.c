
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ is_active; } ;
struct queue {TYPE_2__ properties; int list; int mqd_mem_obj; int mqd; int queue; int pipe; } ;
struct qcm_process_device {int reset_wavefronts; int queue_count; TYPE_1__* pqm; int queues_list; } ;
struct mqd_manager {int (* destroy_mqd ) (struct mqd_manager*,int ,int ,int ,int ,int ) ;int (* free_mqd ) (struct mqd_manager*,int ,int ) ;} ;
struct device_queue_manager {int queue_count; int dev; int total_queue_count; int xgmi_sdma_queue_count; int sdma_queue_count; struct mqd_manager** mqd_mgrs; } ;
struct TYPE_3__ {int process; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qcm_process_device*,struct queue*) ;
 int FUNC_2 (struct device_queue_manager*,struct queue*) ;
 int FUNC_3 (struct device_queue_manager*,struct queue*) ;
 int FUNC_4 (struct device_queue_manager*,struct qcm_process_device*,struct queue*) ;
 size_t FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct mqd_manager*,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct mqd_manager*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct device_queue_manager *VAR_7,
    struct qcm_process_device *VAR_8,
    struct queue *VAR_9)
{
 int VAR_10;
 struct mqd_manager *VAR_11;

 VAR_11 = VAR_7->mqd_mgrs[FUNC_5(
   VAR_9->properties.type)];

 if (VAR_9->properties.type == VAR_3) {
  FUNC_2(VAR_7, VAR_9);
 } else if (VAR_9->properties.type == VAR_4) {
  VAR_7->sdma_queue_count--;
  FUNC_3(VAR_7, VAR_9);
 } else if (VAR_9->properties.type == VAR_5) {
  VAR_7->xgmi_sdma_queue_count--;
  FUNC_3(VAR_7, VAR_9);
 } else {
  FUNC_8("q->properties.type %d is invalid\n",
    VAR_9->properties.type);
  return -VAR_0;
 }
 VAR_7->total_queue_count--;

 FUNC_1(VAR_8, VAR_9);

 VAR_10 = VAR_11->destroy_mqd(VAR_11, VAR_9->mqd,
    VAR_2,
    VAR_6,
    VAR_9->pipe, VAR_9->queue);
 if (VAR_10 == -VAR_1)
  VAR_8->reset_wavefronts = 1;

 VAR_11->free_mqd(VAR_11, VAR_9->mqd, VAR_9->mqd_mem_obj);

 FUNC_6(&VAR_9->list);
 if (FUNC_7(&VAR_8->queues_list)) {
  if (VAR_8->reset_wavefronts) {
   FUNC_9("Resetting wave fronts (nocpsch) on dev %p\n",
     VAR_7->dev);



   FUNC_0(VAR_7->dev,
     VAR_8->pqm->process);
   VAR_8->reset_wavefronts = 0;
  }

  FUNC_4(VAR_7, VAR_8, VAR_9);
 }
 VAR_8->queue_count--;
 if (VAR_9->properties.is_active)
  VAR_7->queue_count--;

 return VAR_10;
}
