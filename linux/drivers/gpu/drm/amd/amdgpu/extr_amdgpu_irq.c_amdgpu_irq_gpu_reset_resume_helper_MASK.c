
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_irq_src {int num_types; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct amdgpu_device {TYPE_2__ irq; } ;
struct TYPE_3__ {struct amdgpu_irq_src** sources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_irq_src*,int) ;

void FUNC_1(struct amdgpu_device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (!VAR_2->irq.client[VAR_3].sources)
   continue;

  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
   struct amdgpu_irq_src *VAR_6 = VAR_2->irq.client[VAR_3].sources[VAR_4];

   if (!VAR_6)
    continue;
   for (VAR_5 = 0; VAR_5 < VAR_6->num_types; VAR_5++)
    FUNC_0(VAR_2, VAR_6, VAR_5);
  }
 }
}
