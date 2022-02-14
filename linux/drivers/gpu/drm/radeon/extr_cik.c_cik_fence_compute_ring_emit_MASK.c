
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
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int VAR_3 ;
 int FUNC_5 (struct radeon_ring*,int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct radeon_device *VAR_4,
     struct radeon_fence *VAR_5)
{
 struct radeon_ring *VAR_6 = &VAR_4->ring[VAR_5->ring];
 u64 VAR_7 = VAR_4->fence_drv[VAR_5->ring].gpu_addr;


 FUNC_5(VAR_6, FUNC_4(VAR_3, 5));
 FUNC_5(VAR_6, (VAR_1 |
     VAR_2 |
     FUNC_2(VAR_0) |
     FUNC_1(5)));
 FUNC_5(VAR_6, FUNC_0(1) | FUNC_3(2));
 FUNC_5(VAR_6, VAR_7 & 0xfffffffc);
 FUNC_5(VAR_6, FUNC_6(VAR_7));
 FUNC_5(VAR_6, VAR_5->seq);
 FUNC_5(VAR_6, 0);
}
