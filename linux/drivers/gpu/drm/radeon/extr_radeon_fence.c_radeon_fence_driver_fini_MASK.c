
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {int ring_lock; TYPE_1__* fence_drv; int fence_queue; } ;
struct TYPE_2__ {int initialized; int scratch_reg; int lockup_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (struct radeon_device*,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct radeon_device *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_1(&VAR_1->ring_lock);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->fence_drv[VAR_2].initialized)
   continue;
  VAR_3 = FUNC_4(VAR_1, VAR_2);
  if (VAR_3) {

   FUNC_3(VAR_1, VAR_2);
  }
  FUNC_0(&VAR_1->fence_drv[VAR_2].lockup_work);
  FUNC_6(&VAR_1->fence_queue);
  FUNC_5(VAR_1, VAR_1->fence_drv[VAR_2].scratch_reg);
  VAR_1->fence_drv[VAR_2].initialized = 0;
 }
 FUNC_2(&VAR_1->ring_lock);
}
