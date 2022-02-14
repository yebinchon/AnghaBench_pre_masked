
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vfio_device; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 if (FUNC_0(!((struct intel_vgpu *)VAR_0)->vdev.vfio_device))
  return;

 FUNC_1(((struct intel_vgpu *)VAR_0)->vdev.vfio_device);
}
