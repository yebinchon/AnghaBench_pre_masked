
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int use_doorbell; int name; int * ring_obj; } ;
struct TYPE_4__ {int num_instances; int trap_irq; TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_2__ sdma; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_3)
{
 struct amdgpu_ring *VAR_4;
 int VAR_5, VAR_6;
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_3;


 VAR_5 = FUNC_0(VAR_7, VAR_0, 224,
         &VAR_7->sdma.trap_irq);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_0(VAR_7, VAR_0, 244,
         &VAR_7->sdma.trap_irq);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_7->sdma.num_instances; VAR_6++) {
  VAR_4 = &VAR_7->sdma.instance[VAR_6].ring;
  VAR_4->ring_obj = ((void*)0);
  VAR_4->use_doorbell = 0;
  FUNC_2(VAR_4->name, "sdma%d", VAR_6);
  VAR_5 = FUNC_1(VAR_7, VAR_4, 1024,
         &VAR_7->sdma.trap_irq,
         (VAR_6 == 0) ?
         VAR_1 :
         VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 return VAR_5;
}
