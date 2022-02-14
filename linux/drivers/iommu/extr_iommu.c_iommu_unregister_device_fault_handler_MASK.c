
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_param {int lock; TYPE_1__* fault_param; } ;
struct device {struct iommu_param* iommu_param; } ;
struct TYPE_2__ {int faults; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;

int FUNC_5(struct device *VAR_2)
{
 struct iommu_param *VAR_3 = VAR_2->iommu_param;
 int VAR_4 = 0;

 if (!VAR_3)
  return -VAR_1;

 FUNC_2(&VAR_3->lock);

 if (!VAR_3->fault_param)
  goto unlock;


 if (!FUNC_1(&VAR_3->fault_param->faults)) {
  VAR_4 = -VAR_0;
  goto unlock;
 }

 FUNC_0(VAR_3->fault_param);
 VAR_3->fault_param = ((void*)0);
 FUNC_4(VAR_2);
unlock:
 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
