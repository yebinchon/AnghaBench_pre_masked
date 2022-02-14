
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct TYPE_6__ {int notifier_call; } ;
struct TYPE_5__ {TYPE_2__ iommu_notifier; TYPE_2__ group_notifier; int released; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;
struct TYPE_7__ {int (* vgpu_activate ) (struct intel_vgpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int) ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct mdev_device*) ;
 int FUNC_3 (struct mdev_device*) ;
 struct intel_vgpu* FUNC_4 (struct mdev_device*) ;
 int FUNC_5 (struct intel_vgpu*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,unsigned long*,TYPE_2__*) ;
 int FUNC_8 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct mdev_device *VAR_8)
{
 struct intel_vgpu *VAR_9 = FUNC_4(VAR_8);
 unsigned long VAR_10;
 int VAR_11;

 VAR_9->vdev.iommu_notifier.notifier_call = VAR_7;
 VAR_9->vdev.group_notifier.notifier_call = VAR_6;

 VAR_10 = VAR_4;
 VAR_11 = FUNC_7(FUNC_3(VAR_8), VAR_3, &VAR_10,
    &VAR_9->vdev.iommu_notifier);
 if (VAR_11 != 0) {
  FUNC_1("vfio_register_notifier for iommu failed: %d\n",
   VAR_11);
  goto out;
 }

 VAR_10 = VAR_2;
 VAR_11 = FUNC_7(FUNC_3(VAR_8), VAR_1, &VAR_10,
    &VAR_9->vdev.group_notifier);
 if (VAR_11 != 0) {
  FUNC_1("vfio_register_notifier for group failed: %d\n",
   VAR_11);
  goto undo_iommu;
 }




 if (!FUNC_6(VAR_0))
  goto undo_group;

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11)
  goto undo_group;

 VAR_5->vgpu_activate(VAR_9);

 FUNC_0(&VAR_9->vdev.released, 0);
 return VAR_11;

undo_group:
 FUNC_8(FUNC_3(VAR_8), VAR_1,
     &VAR_9->vdev.group_notifier);

undo_iommu:
 FUNC_8(FUNC_3(VAR_8), VAR_3,
     &VAR_9->vdev.iommu_notifier);
out:
 return VAR_11;
}
