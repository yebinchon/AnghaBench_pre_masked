
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int sync_seq; int gpu_addr; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_5)
{
 uint32_t VAR_6 = VAR_5->fence_drv.sync_seq;
 uint64_t VAR_7 = VAR_5->fence_drv.gpu_addr;

 FUNC_1(VAR_5, FUNC_0(VAR_1, 0));
 FUNC_1(VAR_5, FUNC_2(VAR_7));
 FUNC_1(VAR_5, FUNC_0(VAR_2, 0));
 FUNC_1(VAR_5, FUNC_3(VAR_7));
 FUNC_1(VAR_5, FUNC_0(VAR_3, 0));
 FUNC_1(VAR_5, 0xffffffff);
 FUNC_1(VAR_5, FUNC_0(VAR_4, 0));
 FUNC_1(VAR_5, VAR_6);
 FUNC_1(VAR_5, FUNC_0(VAR_0, 0));
 FUNC_1(VAR_5, 0xE);
}
