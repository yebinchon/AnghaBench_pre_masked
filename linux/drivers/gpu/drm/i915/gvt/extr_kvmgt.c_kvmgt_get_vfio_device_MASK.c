
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vfio_device; int mdev; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
 struct intel_vgpu *VAR_2 = (struct intel_vgpu *)VAR_1;

 VAR_2->vdev.vfio_device = FUNC_2(
  FUNC_1(VAR_2->vdev.mdev));
 if (!VAR_2->vdev.vfio_device) {
  FUNC_0("failed to get vfio device\n");
  return -VAR_0;
 }
 return 0;
}
