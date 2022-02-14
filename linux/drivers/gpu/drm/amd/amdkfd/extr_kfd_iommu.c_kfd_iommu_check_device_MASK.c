
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_dev {int pdev; TYPE_1__* device_info; } ;
struct amd_iommu_device_info {int flags; } ;
struct TYPE_2__ {int needs_iommu_device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct amd_iommu_device_info*) ;
 int VAR_1 ;

int FUNC_1(struct kfd_dev *VAR_2)
{
 struct amd_iommu_device_info VAR_3;
 int VAR_4;

 if (!VAR_2->device_info->needs_iommu_device)
  return -VAR_0;

 VAR_3.flags = 0;
 VAR_4 = FUNC_0(VAR_2->pdev, &VAR_3);
 if (VAR_4)
  return VAR_4;

 if ((VAR_3.flags & VAR_1) != VAR_1)
  return -VAR_0;

 return 0;
}
