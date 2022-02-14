
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int gpu_addr; int sync_seq; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_1)
{
 uint32_t VAR_2 = VAR_1->fence_drv.sync_seq;
 uint64_t VAR_3 = VAR_1->fence_drv.gpu_addr;

 FUNC_0(VAR_1, VAR_0);
 FUNC_0(VAR_1, FUNC_1(VAR_3));
 FUNC_0(VAR_1, FUNC_2(VAR_3));
 FUNC_0(VAR_1, VAR_2);
}
