
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_fence_driver {int * sync_seq; } ;
struct radeon_fence {int ring; TYPE_1__* rdev; } ;
struct TYPE_2__ {struct radeon_fence_driver* fence_drv; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct radeon_fence *VAR_1, int VAR_2)
{
 struct radeon_fence_driver *VAR_3, *VAR_4;
 unsigned VAR_5;

 if (!VAR_1) {
  return;
 }

 if (VAR_1->ring == VAR_2) {
  return;
 }


 VAR_4 = &VAR_1->rdev->fence_drv[VAR_1->ring];
 VAR_3 = &VAR_1->rdev->fence_drv[VAR_2];
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (VAR_5 == VAR_2) {
   continue;
  }
  VAR_3->sync_seq[VAR_5] = FUNC_0(VAR_3->sync_seq[VAR_5], VAR_4->sync_seq[VAR_5]);
 }
}
