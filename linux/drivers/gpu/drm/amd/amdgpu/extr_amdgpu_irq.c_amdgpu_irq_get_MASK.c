
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_irq_src {unsigned int num_types; int * enabled_types; TYPE_2__* funcs; } ;
struct amdgpu_device {TYPE_1__* ddev; } ;
struct TYPE_4__ {int set; } ;
struct TYPE_3__ {int irq_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_irq_src*,unsigned int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct amdgpu_device *VAR_2, struct amdgpu_irq_src *VAR_3,
     unsigned VAR_4)
{
 if (!VAR_2->ddev->irq_enabled)
  return -VAR_1;

 if (VAR_4 >= VAR_3->num_types)
  return -VAR_0;

 if (!VAR_3->enabled_types || !VAR_3->funcs->set)
  return -VAR_0;

 if (FUNC_1(&VAR_3->enabled_types[VAR_4]) == 1)
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 return 0;
}
