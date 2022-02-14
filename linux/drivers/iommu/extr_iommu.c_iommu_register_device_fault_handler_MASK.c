
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_param {int lock; TYPE_1__* fault_param; } ;
struct device {struct iommu_param* iommu_param; } ;
typedef int iommu_dev_fault_handler_t ;
struct TYPE_2__ {int faults; int lock; void* data; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;

int FUNC_7(struct device *VAR_4,
     iommu_dev_fault_handler_t VAR_5,
     void *VAR_6)
{
 struct iommu_param *VAR_7 = VAR_4->iommu_param;
 int VAR_8 = 0;

 if (!VAR_7)
  return -VAR_1;

 FUNC_4(&VAR_7->lock);

 if (VAR_7->fault_param) {
  VAR_8 = -VAR_0;
  goto done_unlock;
 }

 FUNC_1(VAR_4);
 VAR_7->fault_param = FUNC_2(sizeof(*VAR_7->fault_param), VAR_3);
 if (!VAR_7->fault_param) {
  FUNC_6(VAR_4);
  VAR_8 = -VAR_2;
  goto done_unlock;
 }
 VAR_7->fault_param->handler = VAR_5;
 VAR_7->fault_param->data = VAR_6;
 FUNC_3(&VAR_7->fault_param->lock);
 FUNC_0(&VAR_7->fault_param->faults);

done_unlock:
 FUNC_5(&VAR_7->lock);

 return VAR_8;
}
