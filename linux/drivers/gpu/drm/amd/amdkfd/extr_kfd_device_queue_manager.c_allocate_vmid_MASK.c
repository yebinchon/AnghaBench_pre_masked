
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int vmid; } ;
struct queue {TYPE_3__ properties; TYPE_2__* process; } ;
struct qcm_process_device {int vmid; int sh_hidden_private_base; int page_table_base; } ;
struct device_queue_manager {int vmid_bitmap; TYPE_5__* dev; } ;
struct TYPE_6__ {int first_vmid_kfd; } ;
struct TYPE_10__ {int kgd; TYPE_4__* kfd2kgd; TYPE_1__ vm_info; } ;
struct TYPE_9__ {int (* set_scratch_backing_va ) (int ,int ,int) ;int (* set_vm_context_page_table_base ) (int ,int,int ) ;} ;
struct TYPE_7__ {int pasid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct device_queue_manager*,struct qcm_process_device*) ;
 int FUNC_4 (struct qcm_process_device*) ;
 int FUNC_5 (struct device_queue_manager*,int ,int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct device_queue_manager *VAR_1,
   struct qcm_process_device *VAR_2,
   struct queue *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_1->vmid_bitmap == 0)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1->vmid_bitmap) - 1;
 VAR_1->vmid_bitmap &= ~(1 << VAR_4);

 VAR_5 = VAR_4 + VAR_1->dev->vm_info.first_vmid_kfd;
 FUNC_2("vmid allocation %d\n", VAR_5);
 VAR_2->vmid = VAR_5;
 VAR_3->properties.vmid = VAR_5;

 FUNC_5(VAR_1, VAR_3->process->pasid, VAR_3->properties.vmid);
 FUNC_3(VAR_1, VAR_2);




 VAR_1->dev->kfd2kgd->set_vm_context_page_table_base(VAR_1->dev->kgd,
   VAR_2->vmid,
   VAR_2->page_table_base);

 FUNC_1(FUNC_4(VAR_2));

 VAR_1->dev->kfd2kgd->set_scratch_backing_va(
  VAR_1->dev->kgd, VAR_2->sh_hidden_private_base, VAR_2->vmid);

 return 0;
}
