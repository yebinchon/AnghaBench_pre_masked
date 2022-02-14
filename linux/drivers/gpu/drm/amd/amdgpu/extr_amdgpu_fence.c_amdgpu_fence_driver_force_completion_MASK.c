
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sync_seq; } ;
struct amdgpu_ring {TYPE_1__ fence_drv; } ;


 int FUNC_0 (struct amdgpu_ring*) ;
 int FUNC_1 (struct amdgpu_ring*,int ) ;

void FUNC_2(struct amdgpu_ring *VAR_0)
{
 FUNC_1(VAR_0, VAR_0->fence_drv.sync_seq);
 FUNC_0(VAR_0);
}
