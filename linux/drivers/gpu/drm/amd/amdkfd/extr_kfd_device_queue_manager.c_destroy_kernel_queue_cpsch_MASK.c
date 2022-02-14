
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcm_process_device {int is_debug; } ;
struct kernel_queue {int list; } ;
struct device_queue_manager {int total_queue_count; int queue_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_queue_manager*) ;
 int FUNC_1 (struct device_queue_manager*) ;
 int FUNC_2 (struct device_queue_manager*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct device_queue_manager *VAR_1,
     struct kernel_queue *VAR_2,
     struct qcm_process_device *VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_3(&VAR_2->list);
 VAR_1->queue_count--;
 VAR_3->is_debug = 0;
 FUNC_2(VAR_1, VAR_0, 0);




 VAR_1->total_queue_count--;
 FUNC_4("Total of %d queues are accountable so far\n",
   VAR_1->total_queue_count);
 FUNC_1(VAR_1);
}
