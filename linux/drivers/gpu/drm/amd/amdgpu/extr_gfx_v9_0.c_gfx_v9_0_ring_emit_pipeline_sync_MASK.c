
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int gpu_addr; int sync_seq; } ;
struct amdgpu_ring {TYPE_2__ fence_drv; TYPE_1__* funcs; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*,int,int,int ,int ,int ,int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_1)
{
 int VAR_2 = (VAR_1->funcs->type == VAR_0);
 uint32_t VAR_3 = VAR_1->fence_drv.sync_seq;
 uint64_t VAR_4 = VAR_1->fence_drv.gpu_addr;

 FUNC_0(VAR_1, VAR_2, 1, 0,
         FUNC_1(VAR_4), FUNC_2(VAR_4),
         VAR_3, 0xffffffff, 4);
}
