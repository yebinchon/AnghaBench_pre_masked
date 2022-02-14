
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int sync_seq; int gpu_addr; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_2)
{
 uint32_t VAR_3 = VAR_2->fence_drv.sync_seq;
 uint64_t VAR_4 = VAR_2->fence_drv.gpu_addr;


 FUNC_3(VAR_2, FUNC_0(VAR_0, 0,
         FUNC_2(0) |
         FUNC_1(3) |
         VAR_1));
 FUNC_3(VAR_2, VAR_4 & 0xfffffffc);
 FUNC_3(VAR_2, FUNC_4(VAR_4) & 0xffffffff);
 FUNC_3(VAR_2, VAR_3);
 FUNC_3(VAR_2, 0xffffffff);
 FUNC_3(VAR_2, (0xfff << 16) | 4);
}
