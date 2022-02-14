
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


 int FUNC_0 (int *) ;

bool FUNC_1(struct amdgpu_device *VAR_0, struct amdgpu_irq_src *VAR_1,
   unsigned VAR_2)
{
 if (!VAR_0->ddev->irq_enabled)
  return 0;

 if (VAR_2 >= VAR_1->num_types)
  return 0;

 if (!VAR_1->enabled_types || !VAR_1->funcs->set)
  return 0;

 return !!FUNC_0(&VAR_1->enabled_types[VAR_2]);
}
