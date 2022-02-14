
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_irq_src {unsigned int num_types; int * enabled_types; int funcs; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct amdgpu_device {TYPE_2__ irq; } ;
typedef int atomic_t ;
struct TYPE_3__ {struct amdgpu_irq_src** sources; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned int,int,int ) ;

int FUNC_1(struct amdgpu_device *VAR_5,
        unsigned VAR_6, unsigned VAR_7,
        struct amdgpu_irq_src *VAR_8)
{
 if (VAR_6 >= VAR_0)
  return -VAR_2;

 if (VAR_7 >= VAR_1)
  return -VAR_2;

 if (!VAR_8->funcs)
  return -VAR_2;

 if (!VAR_5->irq.client[VAR_6].sources) {
  VAR_5->irq.client[VAR_6].sources =
   FUNC_0(VAR_1,
    sizeof(struct amdgpu_irq_src *),
    VAR_4);
  if (!VAR_5->irq.client[VAR_6].sources)
   return -VAR_3;
 }

 if (VAR_5->irq.client[VAR_6].sources[VAR_7] != ((void*)0))
  return -VAR_2;

 if (VAR_8->num_types && !VAR_8->enabled_types) {
  atomic_t *VAR_9;

  VAR_9 = FUNC_0(VAR_8->num_types, sizeof(atomic_t),
    VAR_4);
  if (!VAR_9)
   return -VAR_3;

  VAR_8->enabled_types = VAR_9;
 }

 VAR_5->irq.client[VAR_6].sources[VAR_7] = VAR_8;
 return 0;
}
