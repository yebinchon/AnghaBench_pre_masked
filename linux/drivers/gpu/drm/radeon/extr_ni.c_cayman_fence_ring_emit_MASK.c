
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct radeon_ring {int dummy; } ;
struct radeon_fence {size_t ring; int seq; } ;
struct radeon_device {TYPE_1__* fence_drv; struct radeon_ring* ring; } ;
struct TYPE_2__ {int gpu_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_ring*,int) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct radeon_device *VAR_7,
       struct radeon_fence *VAR_8)
{
 struct radeon_ring *VAR_9 = &VAR_7->ring[VAR_8->ring];
 u64 VAR_10 = VAR_7->fence_drv[VAR_8->ring].gpu_addr;
 u32 VAR_11 = VAR_3 | VAR_6 |
  VAR_4;


 FUNC_6(VAR_9, FUNC_4(VAR_5, 3));
 FUNC_6(VAR_9, VAR_1 | VAR_11);
 FUNC_6(VAR_9, 0xFFFFFFFF);
 FUNC_6(VAR_9, 0);
 FUNC_6(VAR_9, 10);

 FUNC_6(VAR_9, FUNC_4(VAR_2, 4));
 FUNC_6(VAR_9, FUNC_2(VAR_0) | FUNC_1(5));
 FUNC_6(VAR_9, FUNC_5(VAR_10));
 FUNC_6(VAR_9, (FUNC_7(VAR_10) & 0xff) | FUNC_0(1) | FUNC_3(2));
 FUNC_6(VAR_9, VAR_8->seq);
 FUNC_6(VAR_9, 0);
}
