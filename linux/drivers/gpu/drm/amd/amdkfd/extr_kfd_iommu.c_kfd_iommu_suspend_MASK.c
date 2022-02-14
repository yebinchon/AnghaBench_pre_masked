
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_dev {int pdev; TYPE_1__* device_info; } ;
struct TYPE_2__ {int needs_iommu_device; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct kfd_dev*) ;

void FUNC_4(struct kfd_dev *VAR_0)
{
 if (!VAR_0->device_info->needs_iommu_device)
  return;

 FUNC_3(VAR_0);

 FUNC_2(VAR_0->pdev, ((void*)0));
 FUNC_1(VAR_0->pdev, ((void*)0));
 FUNC_0(VAR_0->pdev);
}
