
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int sync_seq; int gpu_addr; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; TYPE_2__* funcs; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_ring *VAR_3)
{
 int VAR_4 = (VAR_3->funcs->type == VAR_0);
 uint32_t VAR_5 = VAR_3->fence_drv.sync_seq;
 uint64_t VAR_6 = VAR_3->fence_drv.gpu_addr;

 FUNC_4(VAR_3, FUNC_0(VAR_2, 5));
 FUNC_4(VAR_3, (FUNC_3(1) |
     FUNC_2(3) |
     FUNC_1(VAR_4)));
 FUNC_4(VAR_3, VAR_6 & 0xfffffffc);
 FUNC_4(VAR_3, FUNC_5(VAR_6) & 0xffffffff);
 FUNC_4(VAR_3, VAR_5);
 FUNC_4(VAR_3, 0xffffffff);
 FUNC_4(VAR_3, 4);

 if (VAR_4) {

  FUNC_4(VAR_3, FUNC_0(VAR_1, 0));
  FUNC_4(VAR_3, 0);
  FUNC_4(VAR_3, FUNC_0(VAR_1, 0));
  FUNC_4(VAR_3, 0);
 }
}
