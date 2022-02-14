
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ is_active; } ;
struct queue {int mqd_mem_obj; int mqd; TYPE_1__ properties; int list; } ;
struct qcm_process_device {int reset_wavefronts; int queue_count; scalar_t__ is_debug; } ;
struct mqd_manager {int (* free_mqd ) (struct mqd_manager*,int ,int ) ;} ;
struct device_queue_manager {int total_queue_count; int queue_count; int xgmi_sdma_queue_count; int sdma_queue_count; struct mqd_manager** mqd_mgrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qcm_process_device*,struct queue*) ;
 int FUNC_1 (struct device_queue_manager*,struct queue*) ;
 int FUNC_2 (struct device_queue_manager*) ;
 int FUNC_3 (struct device_queue_manager*) ;
 int FUNC_4 (struct device_queue_manager*,int ,int ) ;
 size_t FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct mqd_manager*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct device_queue_manager *VAR_5,
    struct qcm_process_device *VAR_6,
    struct queue *VAR_7)
{
 int VAR_8;
 struct mqd_manager *VAR_9;

 VAR_8 = 0;


 FUNC_2(VAR_5);

 if (VAR_6->is_debug) {




  VAR_8 = -VAR_0;
  goto failed_try_destroy_debugged_queue;

 }

 VAR_9 = VAR_5->mqd_mgrs[FUNC_5(
   VAR_7->properties.type)];

 FUNC_0(VAR_6, VAR_7);

 if (VAR_7->properties.type == VAR_2) {
  VAR_5->sdma_queue_count--;
  FUNC_1(VAR_5, VAR_7);
 } else if (VAR_7->properties.type == VAR_3) {
  VAR_5->xgmi_sdma_queue_count--;
  FUNC_1(VAR_5, VAR_7);
 }

 FUNC_6(&VAR_7->list);
 VAR_6->queue_count--;
 if (VAR_7->properties.is_active) {
  VAR_5->queue_count--;
  VAR_8 = FUNC_4(VAR_5,
    VAR_4, 0);
  if (VAR_8 == -VAR_1)
   VAR_6->reset_wavefronts = 1;
 }





 VAR_5->total_queue_count--;
 FUNC_7("Total of %d queues are accountable so far\n",
   VAR_5->total_queue_count);

 FUNC_3(VAR_5);


 VAR_9->free_mqd(VAR_9, VAR_7->mqd, VAR_7->mqd_mem_obj);

 return VAR_8;

failed_try_destroy_debugged_queue:

 FUNC_3(VAR_5);
 return VAR_8;
}
