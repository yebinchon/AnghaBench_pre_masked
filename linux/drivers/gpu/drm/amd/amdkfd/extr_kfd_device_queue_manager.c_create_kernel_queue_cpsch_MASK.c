
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcm_process_device {int is_debug; int priv_queue_list; } ;
struct kernel_queue {int list; } ;
struct device_queue_manager {scalar_t__ total_queue_count; int queue_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_queue_manager*) ;
 int FUNC_1 (struct device_queue_manager*) ;
 int FUNC_2 (struct device_queue_manager*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device_queue_manager *VAR_3,
     struct kernel_queue *VAR_4,
     struct qcm_process_device *VAR_5)
{
 FUNC_0(VAR_3);
 if (VAR_3->total_queue_count >= VAR_2) {
  FUNC_5("Can't create new kernel queue because %d queues were already created\n",
    VAR_3->total_queue_count);
  FUNC_1(VAR_3);
  return -VAR_0;
 }





 VAR_3->total_queue_count++;
 FUNC_4("Total of %d queues are accountable so far\n",
   VAR_3->total_queue_count);

 FUNC_3(&VAR_4->list, &VAR_5->priv_queue_list);
 VAR_3->queue_count++;
 VAR_5->is_debug = 1;
 FUNC_2(VAR_3, VAR_1, 0);
 FUNC_1(VAR_3);

 return 0;
}
