
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int use_doorbell; int name; int * ring_obj; } ;
struct TYPE_4__ {int num_instances; int trap_irq; TYPE_1__* instance; int illegal_inst_irq; } ;
struct amdgpu_device {TYPE_2__ sdma; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_5)
{
 struct amdgpu_ring *VAR_6;
 int VAR_7, VAR_8;
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_5;


 VAR_7 = FUNC_1(VAR_9, VAR_0, VAR_4,
         &VAR_9->sdma.trap_irq);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_1(VAR_9, VAR_0, 241,
         &VAR_9->sdma.illegal_inst_irq);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_1(VAR_9, VAR_0, VAR_3,
         &VAR_9->sdma.illegal_inst_irq);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_9);
 if (VAR_7) {
  FUNC_0("Failed to load sdma firmware!\n");
  return VAR_7;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9->sdma.num_instances; VAR_8++) {
  VAR_6 = &VAR_9->sdma.instance[VAR_8].ring;
  VAR_6->ring_obj = ((void*)0);
  VAR_6->use_doorbell = 0;
  FUNC_4(VAR_6->name, "sdma%d", VAR_8);
  VAR_7 = FUNC_2(VAR_9, VAR_6, 1024,
         &VAR_9->sdma.trap_irq,
         (VAR_8 == 0) ?
         VAR_1 :
         VAR_2);
  if (VAR_7)
   return VAR_7;
 }

 return VAR_7;
}
