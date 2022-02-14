
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_dev {int pdev; TYPE_1__* device_info; } ;
struct TYPE_2__ {int needs_iommu_device; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (struct kfd_dev*) ;
 unsigned int FUNC_5 () ;

int FUNC_6(struct kfd_dev *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 if (!VAR_3->device_info->needs_iommu_device)
  return 0;

 VAR_4 = FUNC_5();

 VAR_5 = FUNC_1(VAR_3->pdev, VAR_4);
 if (VAR_5)
  return -VAR_0;

 FUNC_3(VAR_3->pdev,
     VAR_2);
 FUNC_2(VAR_3->pdev,
         VAR_1);

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_3->pdev, ((void*)0));
  FUNC_2(VAR_3->pdev, ((void*)0));
  FUNC_0(VAR_3->pdev);
  return VAR_5;
 }

 return 0;
}
