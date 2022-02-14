
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_ring {int dummy; } ;
struct radeon_fence {size_t ring; int seq; } ;
struct radeon_device {TYPE_1__* fence_drv; struct radeon_ring* ring; } ;
struct TYPE_2__ {int scratch_reg; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_2 (struct radeon_ring*,int) ;

void FUNC_3(struct radeon_device *VAR_9,
     struct radeon_fence *VAR_10)
{
 struct radeon_ring *VAR_11 = &VAR_9->ring[VAR_10->ring];



 FUNC_2(VAR_11, FUNC_0(VAR_2, 0));
 FUNC_2(VAR_11, VAR_1);
 FUNC_2(VAR_11, FUNC_0(VAR_3, 0));
 FUNC_2(VAR_11, VAR_4);

 FUNC_2(VAR_11, FUNC_0(VAR_8, 0));
 FUNC_2(VAR_11, VAR_6 | VAR_7);
 FUNC_1(VAR_9, VAR_11);

 FUNC_2(VAR_11, FUNC_0(VAR_9->fence_drv[VAR_10->ring].scratch_reg, 0));
 FUNC_2(VAR_11, VAR_10->seq);
 FUNC_2(VAR_11, FUNC_0(VAR_0, 0));
 FUNC_2(VAR_11, VAR_5);
}
