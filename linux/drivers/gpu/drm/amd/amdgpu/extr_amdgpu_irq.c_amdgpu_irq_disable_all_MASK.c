
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_irq_src {unsigned int num_types; TYPE_2__* funcs; int * enabled_types; } ;
struct TYPE_6__ {int lock; TYPE_1__* client; } ;
struct amdgpu_device {TYPE_3__ irq; } ;
struct TYPE_5__ {int (* set ) (struct amdgpu_device*,struct amdgpu_irq_src*,unsigned int,int ) ;} ;
struct TYPE_4__ {struct amdgpu_irq_src** sources; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_irq_src*,unsigned int,int ) ;

void FUNC_5(struct amdgpu_device *VAR_3)
{
 unsigned long VAR_4;
 unsigned VAR_5, VAR_6, VAR_7;
 int VAR_8;

 FUNC_2(&VAR_3->irq.lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (!VAR_3->irq.client[VAR_5].sources)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
   struct amdgpu_irq_src *VAR_9 = VAR_3->irq.client[VAR_5].sources[VAR_6];

   if (!VAR_9 || !VAR_9->funcs->set || !VAR_9->num_types)
    continue;

   for (VAR_7 = 0; VAR_7 < VAR_9->num_types; ++VAR_7) {
    FUNC_1(&VAR_9->enabled_types[VAR_7], 0);
    VAR_8 = VAR_9->funcs->set(VAR_3, VAR_9, VAR_7,
          VAR_1);
    if (VAR_8)
     FUNC_0("error disabling interrupt (%d)\n",
        VAR_8);
   }
  }
 }
 FUNC_3(&VAR_3->irq.lock, VAR_4);
}
