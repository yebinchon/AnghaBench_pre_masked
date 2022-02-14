
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_process_device {scalar_t__ bound; struct kfd_process* process; struct kfd_dev* dev; } ;
struct kfd_process {int lead_thread; int pasid; } ;
struct kfd_dev {int pdev; TYPE_1__* device_info; } ;
struct TYPE_2__ {int needs_iommu_device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct kfd_process_device *VAR_3)
{
 struct kfd_dev *VAR_4 = VAR_3->dev;
 struct kfd_process *VAR_5 = VAR_3->process;
 int VAR_6;

 if (!VAR_4->device_info->needs_iommu_device || VAR_3->bound == VAR_1)
  return 0;

 if (FUNC_2(VAR_3->bound == VAR_2)) {
  FUNC_1("Binding PDD_BOUND_SUSPENDED pdd is unexpected!\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_0(VAR_4->pdev, VAR_5->pasid, VAR_5->lead_thread);
 if (!VAR_6)
  VAR_3->bound = VAR_1;

 return VAR_6;
}
