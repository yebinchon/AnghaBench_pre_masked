
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; int * active; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct radeon_device *VAR_1)
{
 int VAR_2;

 if (!VAR_1->vm_manager.enabled)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  FUNC_1(&VAR_1->vm_manager.active[VAR_2]);
 FUNC_0(VAR_1);
 VAR_1->vm_manager.enabled = 0;
}
