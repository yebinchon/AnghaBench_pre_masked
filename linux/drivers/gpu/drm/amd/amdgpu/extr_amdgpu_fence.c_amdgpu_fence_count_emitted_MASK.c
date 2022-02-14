
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int sync_seq; int last_seq; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;

unsigned FUNC_4(struct amdgpu_ring *VAR_0)
{
 uint64_t VAR_1;




 FUNC_1(VAR_0);
 VAR_1 = 0x100000000ull;
 VAR_1 -= FUNC_2(&VAR_0->fence_drv.last_seq);
 VAR_1 += FUNC_0(VAR_0->fence_drv.sync_seq);
 return FUNC_3(VAR_1);
}
