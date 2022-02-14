
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int gpu_addr; int sync_seq; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; } ;


 int FUNC_0 (struct amdgpu_ring*,int,int ,int,int,int ,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_0)
{
 uint32_t VAR_1 = VAR_0->fence_drv.sync_seq;
 uint64_t VAR_2 = VAR_0->fence_drv.gpu_addr;


 FUNC_0(VAR_0, 1, 0,
          VAR_2 & 0xfffffffc,
          FUNC_1(VAR_2) & 0xffffffff,
          VAR_1, 0xffffffff, 4);
}
