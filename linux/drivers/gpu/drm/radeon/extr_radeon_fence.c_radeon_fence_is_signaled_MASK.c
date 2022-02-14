
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct radeon_fence {unsigned int ring; scalar_t__ seq; struct radeon_device* rdev; } ;
struct radeon_device {TYPE_1__* fence_drv; int exclusive_lock; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int last_seq; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_device*,unsigned int) ;
 struct radeon_fence* FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct dma_fence *VAR_0)
{
 struct radeon_fence *VAR_1 = FUNC_3(VAR_0);
 struct radeon_device *VAR_2 = VAR_1->rdev;
 unsigned VAR_3 = VAR_1->ring;
 u64 VAR_4 = VAR_1->seq;

 if (FUNC_0(&VAR_2->fence_drv[VAR_3].last_seq) >= VAR_4) {
  return 1;
 }

 if (FUNC_1(&VAR_2->exclusive_lock)) {
  FUNC_2(VAR_2, VAR_3);
  FUNC_4(&VAR_2->exclusive_lock);

  if (FUNC_0(&VAR_2->fence_drv[VAR_3].last_seq) >= VAR_4) {
   return 1;
  }
 }
 return 0;
}
