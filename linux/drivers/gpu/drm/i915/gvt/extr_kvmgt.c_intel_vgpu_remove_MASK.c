
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct intel_vgpu {int handle; } ;
struct TYPE_2__ {int (* vgpu_destroy ) (struct intel_vgpu*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 struct intel_vgpu* FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_3(struct mdev_device *VAR_2)
{
 struct intel_vgpu *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_3->handle))
  return -VAR_0;

 VAR_1->vgpu_destroy(VAR_3);
 return 0;
}
