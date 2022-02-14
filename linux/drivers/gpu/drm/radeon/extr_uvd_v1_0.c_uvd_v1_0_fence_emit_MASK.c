
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_ring {int dummy; } ;
struct radeon_fence {size_t ring; int seq; } ;
struct radeon_device {TYPE_1__* fence_drv; struct radeon_ring* ring; } ;
struct TYPE_2__ {int gpu_addr; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_ring*,int) ;

void FUNC_2(struct radeon_device *VAR_3,
    struct radeon_fence *VAR_4)
{
 struct radeon_ring *VAR_5 = &VAR_3->ring[VAR_4->ring];
 uint64_t VAR_6 = VAR_3->fence_drv[VAR_4->ring].gpu_addr;

 FUNC_1(VAR_5, FUNC_0(VAR_1, 0));
 FUNC_1(VAR_5, VAR_6 & 0xffffffff);
 FUNC_1(VAR_5, FUNC_0(VAR_2, 0));
 FUNC_1(VAR_5, VAR_4->seq);
 FUNC_1(VAR_5, FUNC_0(VAR_0, 0));
 FUNC_1(VAR_5, 0);

 FUNC_1(VAR_5, FUNC_0(VAR_1, 0));
 FUNC_1(VAR_5, 0);
 FUNC_1(VAR_5, FUNC_0(VAR_2, 0));
 FUNC_1(VAR_5, 0);
 FUNC_1(VAR_5, FUNC_0(VAR_0, 0));
 FUNC_1(VAR_5, 2);
 return;
}
