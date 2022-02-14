
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iommu_param {int lock; struct iommu_fault_param* fault_param; } ;
struct iommu_fault_param {int (* handler ) (TYPE_2__*,int ) ;int lock; int data; int faults; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ prm; } ;
struct iommu_fault_event {int list; TYPE_2__ fault; } ;
struct device {struct iommu_param* iommu_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iommu_fault_event*) ;
 struct iommu_fault_event* FUNC_1 (struct iommu_fault_event*,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;

int FUNC_7(struct device *VAR_5, struct iommu_fault_event *VAR_6)
{
 struct iommu_param *VAR_7 = VAR_5->iommu_param;
 struct iommu_fault_event *VAR_8 = ((void*)0);
 struct iommu_fault_param *VAR_9;
 int VAR_10 = 0;

 if (!VAR_7 || !VAR_6)
  return -VAR_0;


 FUNC_4(&VAR_7->lock);
 VAR_9 = VAR_7->fault_param;
 if (!VAR_9 || !VAR_9->handler) {
  VAR_10 = -VAR_0;
  goto done_unlock;
 }

 if (VAR_6->fault.type == VAR_3 &&
     (VAR_6->fault.prm.flags & VAR_4)) {
  VAR_8 = FUNC_1(VAR_6, sizeof(struct iommu_fault_event),
          VAR_2);
  if (!VAR_8) {
   VAR_10 = -VAR_1;
   goto done_unlock;
  }
  FUNC_4(&VAR_9->lock);
  FUNC_2(&VAR_8->list, &VAR_9->faults);
  FUNC_5(&VAR_9->lock);
 }

 VAR_10 = VAR_9->handler(&VAR_6->fault, VAR_9->data);
 if (VAR_10 && VAR_8) {
  FUNC_4(&VAR_9->lock);
  FUNC_3(&VAR_8->list);
  FUNC_5(&VAR_9->lock);
  FUNC_0(VAR_8);
 }
done_unlock:
 FUNC_5(&VAR_7->lock);
 return VAR_10;
}
