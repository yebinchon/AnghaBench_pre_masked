
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmgt_guest_info {int dummy; } ;
struct TYPE_3__ {int * kvm; int group_notifier; int mdev; int iommu_notifier; int released; } ;
struct intel_vgpu {scalar_t__ handle; TYPE_1__ vdev; } ;
struct TYPE_4__ {int (* vgpu_release ) (struct intel_vgpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (struct intel_vgpu*) ;
 int FUNC_4 (struct kvmgt_guest_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct intel_vgpu*) ;
 int FUNC_8 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_9(struct intel_vgpu *VAR_4)
{
 struct kvmgt_guest_info *VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_4->handle))
  return;

 if (FUNC_1(&VAR_4->vdev.released, 0, 1))
  return;

 VAR_3->vgpu_release(VAR_4);

 VAR_6 = FUNC_8(FUNC_5(VAR_4->vdev.mdev), VAR_2,
     &VAR_4->vdev.iommu_notifier);
 FUNC_0(VAR_6, "vfio_unregister_notifier for iommu failed: %d\n", VAR_6);

 VAR_6 = FUNC_8(FUNC_5(VAR_4->vdev.mdev), VAR_1,
     &VAR_4->vdev.group_notifier);
 FUNC_0(VAR_6, "vfio_unregister_notifier for group failed: %d\n", VAR_6);


 FUNC_6(VAR_0);

 VAR_5 = (struct kvmgt_guest_info *)VAR_4->handle;
 FUNC_4(VAR_5);

 FUNC_3(VAR_4);

 VAR_4->vdev.kvm = ((void*)0);
 VAR_4->handle = 0;
}
