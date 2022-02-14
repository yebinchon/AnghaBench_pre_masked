
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_size; } ;
struct amdgpu_device {int dev; TYPE_1__ vm_manager; } ;






 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(struct amdgpu_device *VAR_0,
          unsigned VAR_1)
{
 unsigned VAR_2 = 0xff;

 switch (VAR_1) {
 case 129:
 case 130:
 case 131:
  VAR_2 = 9 * (131 - VAR_1) +
   VAR_0->vm_manager.block_size;
  break;
 case 128:
  VAR_2 = 0;
  break;
 default:
  FUNC_0(VAR_0->dev, "the level%d isn't supported.\n", VAR_1);
 }

 return VAR_2;
}
