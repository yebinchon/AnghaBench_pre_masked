
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sdma_vm_addr; } ;
struct queue {TYPE_1__ properties; } ;
struct qcm_process_device {int dummy; } ;
struct device_queue_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qcm_process_device*) ;

__attribute__((used)) static void FUNC_2(struct device_queue_manager *VAR_2,
   struct queue *VAR_3,
   struct qcm_process_device *VAR_4)
{



 VAR_3->properties.sdma_vm_addr =
  ((FUNC_0(FUNC_1(VAR_4))) <<
   VAR_1) &
  VAR_0;
}
