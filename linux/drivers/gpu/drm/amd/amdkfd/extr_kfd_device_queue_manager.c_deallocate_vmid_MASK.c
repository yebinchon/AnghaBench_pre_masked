
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vmid; } ;
struct queue {TYPE_2__ properties; TYPE_5__* device; } ;
struct qcm_process_device {int vmid; } ;
struct device_queue_manager {int vmid_bitmap; TYPE_4__* dev; } ;
struct TYPE_10__ {TYPE_1__* device_info; } ;
struct TYPE_8__ {int first_vmid_kfd; } ;
struct TYPE_9__ {TYPE_3__ vm_info; } ;
struct TYPE_6__ {scalar_t__ asic_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*,struct qcm_process_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct qcm_process_device*) ;
 int FUNC_4 (struct device_queue_manager*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct device_queue_manager *VAR_1,
    struct qcm_process_device *VAR_2,
    struct queue *VAR_3)
{
 int VAR_4 = VAR_2->vmid - VAR_1->dev->vm_info.first_vmid_kfd;


 if (VAR_3->device->device_info->asic_family == VAR_0)
  if (FUNC_0(VAR_3->device, VAR_2))
   FUNC_2("Failed to flush TC\n");

 FUNC_1(FUNC_3(VAR_2));


 FUNC_4(VAR_1, 0, VAR_2->vmid);

 VAR_1->vmid_bitmap |= (1 << VAR_4);
 VAR_2->vmid = 0;
 VAR_3->properties.vmid = 0;
}
