
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int gpu_addr; scalar_t__ sync_seq; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*,int ,scalar_t__,int ) ;

int FUNC_1(struct amdgpu_ring *VAR_1, uint32_t *VAR_2)
{
 uint32_t VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = ++VAR_1->fence_drv.sync_seq;
 FUNC_0(VAR_1, VAR_1->fence_drv.gpu_addr,
          VAR_3, 0);

 *VAR_2 = VAR_3;

 return 0;
}
