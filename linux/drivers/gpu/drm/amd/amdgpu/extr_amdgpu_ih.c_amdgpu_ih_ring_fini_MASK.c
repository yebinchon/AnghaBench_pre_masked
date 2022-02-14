
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ih_ring {int gpu_addr; int wptr_addr; int rptr_addr; int * ring; int ring_obj; scalar_t__ ring_size; scalar_t__ use_bus_addr; } ;
struct amdgpu_device {int dev; } ;


 int FUNC_0 (int *,int*,void**) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (int ,scalar_t__,void*,int) ;

void FUNC_3(struct amdgpu_device *VAR_0, struct amdgpu_ih_ring *VAR_1)
{
 if (VAR_1->use_bus_addr) {
  if (!VAR_1->ring)
   return;




  FUNC_2(VAR_0->dev, VAR_1->ring_size + 8,
      (void *)VAR_1->ring, VAR_1->gpu_addr);
  VAR_1->ring = ((void*)0);
 } else {
  FUNC_0(&VAR_1->ring_obj, &VAR_1->gpu_addr,
          (void **)&VAR_1->ring);
  FUNC_1(VAR_0, (VAR_1->wptr_addr - VAR_1->gpu_addr) / 4);
  FUNC_1(VAR_0, (VAR_1->rptr_addr - VAR_1->gpu_addr) / 4);
 }
}
