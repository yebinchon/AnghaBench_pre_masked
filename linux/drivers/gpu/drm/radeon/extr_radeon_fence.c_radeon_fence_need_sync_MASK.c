
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_fence_driver {scalar_t__* sync_seq; } ;
struct radeon_fence {int ring; scalar_t__ seq; TYPE_1__* rdev; } ;
struct TYPE_2__ {struct radeon_fence_driver* fence_drv; } ;



bool FUNC_0(struct radeon_fence *VAR_0, int VAR_1)
{
 struct radeon_fence_driver *VAR_2;

 if (!VAR_0) {
  return 0;
 }

 if (VAR_0->ring == VAR_1) {
  return 0;
 }


 VAR_2 = &VAR_0->rdev->fence_drv[VAR_1];
 if (VAR_0->seq <= VAR_2->sync_seq[VAR_0->ring]) {
  return 0;
 }

 return 1;
}
