
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_ring*,int) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct radeon_device *VAR_10,
   struct radeon_fence *VAR_11)
{
 struct radeon_ring *VAR_12 = &VAR_10->ring[VAR_11->ring];
 u64 VAR_13 = VAR_10->fence_drv[VAR_11->ring].gpu_addr;


 FUNC_6(VAR_12, FUNC_4(VAR_3, 1));
 FUNC_6(VAR_12, (VAR_1 - VAR_4) >> 2);
 FUNC_6(VAR_12, 0);
 FUNC_6(VAR_12, FUNC_4(VAR_7, 3));
 FUNC_6(VAR_12, VAR_8 |
     VAR_9 |
     VAR_6 |
     VAR_5);
 FUNC_6(VAR_12, 0xFFFFFFFF);
 FUNC_6(VAR_12, 0);
 FUNC_6(VAR_12, 10);

 FUNC_6(VAR_12, FUNC_4(VAR_2, 4));
 FUNC_6(VAR_12, FUNC_2(VAR_0) | FUNC_1(5));
 FUNC_6(VAR_12, FUNC_5(VAR_13));
 FUNC_6(VAR_12, (FUNC_7(VAR_13) & 0xff) | FUNC_0(1) | FUNC_3(2));
 FUNC_6(VAR_12, VAR_11->seq);
 FUNC_6(VAR_12, 0);
}
