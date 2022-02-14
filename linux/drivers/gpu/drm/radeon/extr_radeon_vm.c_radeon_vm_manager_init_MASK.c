
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;


 int FUNC_0 (struct radeon_device*) ;

int FUNC_1(struct radeon_device *VAR_0)
{
 int VAR_1;

 if (!VAR_0->vm_manager.enabled) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1)
   return VAR_1;

  VAR_0->vm_manager.enabled = 1;
 }
 return 0;
}
