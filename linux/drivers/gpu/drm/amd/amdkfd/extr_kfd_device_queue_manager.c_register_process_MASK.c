
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct qcm_process_device {int page_table_base; } ;
struct kfd_process_device {int vm; } ;
struct TYPE_2__ {int (* update_qpd ) (struct device_queue_manager*,struct qcm_process_device*) ;} ;
struct device_queue_manager {int dev; int processes_count; TYPE_1__ asic_ops; int queues; } ;
struct device_process_node {int list; struct qcm_process_device* qpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device_queue_manager*) ;
 int FUNC_2 (struct device_queue_manager*) ;
 int FUNC_3 (int ) ;
 struct device_process_node* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,int ) ;
 struct kfd_process_device* FUNC_7 (struct qcm_process_device*) ;
 int FUNC_8 (struct device_queue_manager*,struct qcm_process_device*) ;

__attribute__((used)) static int FUNC_9(struct device_queue_manager *VAR_2,
     struct qcm_process_device *VAR_3)
{
 struct device_process_node *VAR_4;
 struct kfd_process_device *VAR_5;
 uint64_t VAR_6;
 int VAR_7;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->qpd = VAR_3;

 VAR_5 = FUNC_7(VAR_3);

 VAR_6 = FUNC_0(VAR_5->vm);

 FUNC_1(VAR_2);
 FUNC_5(&VAR_4->list, &VAR_2->queues);


 VAR_3->page_table_base = VAR_6;
 FUNC_6("Updated PD address to 0x%llx\n", VAR_6);

 VAR_7 = VAR_2->asic_ops.update_qpd(VAR_2, VAR_3);

 VAR_2->processes_count++;

 FUNC_2(VAR_2);




 FUNC_3(VAR_2->dev);

 return VAR_7;
}
