
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct amdgpu_ring *VAR_1)
{
 uint32_t VAR_2 = VAR_1->fence_drv.sync_seq;
 uint64_t VAR_3 = VAR_1->fence_drv.gpu_addr;


 FUNC_6(VAR_1, FUNC_0(VAR_0) |
     FUNC_4(0) |
     FUNC_3(3) |
     FUNC_5(1));
 FUNC_6(VAR_1, VAR_3 & 0xfffffffc);
 FUNC_6(VAR_1, FUNC_7(VAR_3) & 0xffffffff);
 FUNC_6(VAR_1, VAR_2);
 FUNC_6(VAR_1, 0xffffffff);
 FUNC_6(VAR_1, FUNC_2(0xfff) |
     FUNC_1(4));
}
