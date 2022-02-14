
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_type; int irq_src; int initialized; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; } ;
struct amdgpu_device {struct amdgpu_ring** rings; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ) ;

void FUNC_3(struct amdgpu_device *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct amdgpu_ring *VAR_4 = VAR_1->rings[VAR_2];
  if (!VAR_4 || !VAR_4->fence_drv.initialized)
   continue;


  VAR_3 = FUNC_1(VAR_4);
  if (VAR_3) {

   FUNC_0(VAR_4);
  }


  FUNC_2(VAR_1, VAR_4->fence_drv.irq_src,
          VAR_4->fence_drv.irq_type);
 }
}
