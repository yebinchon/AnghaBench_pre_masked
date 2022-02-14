
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct radeon_ring {int dummy; } ;
struct radeon_fence {size_t ring; int seq; } ;
struct radeon_device {TYPE_1__* fence_drv; struct radeon_ring* ring; } ;
struct TYPE_2__ {int gpu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct radeon_device*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_ring*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct radeon_device *VAR_2,
         struct radeon_fence *VAR_3)
{
 struct radeon_ring *VAR_4 = &VAR_2->ring[VAR_3->ring];
 u64 VAR_5 = VAR_2->fence_drv[VAR_3->ring].gpu_addr;


 FUNC_3(VAR_4, FUNC_0(VAR_0, 0, 0));
 FUNC_3(VAR_4, FUNC_2(VAR_5));
 FUNC_3(VAR_4, FUNC_4(VAR_5));
 FUNC_3(VAR_4, VAR_3->seq);

 FUNC_3(VAR_4, FUNC_0(VAR_1, 0, 0));

 FUNC_1(VAR_2, VAR_3->ring);
}
