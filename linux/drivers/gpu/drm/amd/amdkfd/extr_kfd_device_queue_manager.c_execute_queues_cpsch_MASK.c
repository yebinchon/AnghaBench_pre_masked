
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct device_queue_manager {int is_hws_hang; int hw_exception_work; } ;
typedef enum kfd_unmap_queues_filter { ____Placeholder_kfd_unmap_queues_filter } kfd_unmap_queues_filter ;


 int VAR_0 ;
 int FUNC_0 (struct device_queue_manager*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device_queue_manager*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct device_queue_manager *VAR_1,
    enum kfd_unmap_queues_filter VAR_2,
    uint32_t VAR_3)
{
 int VAR_4;

 if (VAR_1->is_hws_hang)
  return -VAR_0;
 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_1("The cp might be in an unrecoverable state due to an unsuccessful queues preemption\n");
  VAR_1->is_hws_hang = 1;
  FUNC_2(&VAR_1->hw_exception_work);
  return VAR_4;
 }

 return FUNC_0(VAR_1);
}
