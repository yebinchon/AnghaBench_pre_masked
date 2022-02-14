
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int sync_seq; int gpu_addr; } ;
struct amdgpu_ring {TYPE_2__ fence_drv; TYPE_1__* funcs; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_ring *VAR_2)
{
 int VAR_3 = (VAR_2->funcs->type == VAR_0);
 uint32_t VAR_4 = VAR_2->fence_drv.sync_seq;
 uint64_t VAR_5 = VAR_2->fence_drv.gpu_addr;

 FUNC_4(VAR_2, FUNC_0(VAR_1, 5));
 FUNC_4(VAR_2, (FUNC_3(1) |
     FUNC_2(3) |
     FUNC_1(VAR_3)));
 FUNC_4(VAR_2, VAR_5 & 0xfffffffc);
 FUNC_4(VAR_2, FUNC_5(VAR_5) & 0xffffffff);
 FUNC_4(VAR_2, VAR_4);
 FUNC_4(VAR_2, 0xffffffff);
 FUNC_4(VAR_2, 4);
}
