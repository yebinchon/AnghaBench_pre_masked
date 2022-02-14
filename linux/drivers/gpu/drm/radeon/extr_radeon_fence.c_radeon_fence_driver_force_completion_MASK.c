
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {TYPE_1__* fence_drv; } ;
struct TYPE_2__ {int lockup_work; int * sync_seq; scalar_t__ initialized; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct radeon_device*,int ,int) ;

void FUNC_2(struct radeon_device *VAR_0, int VAR_1)
{
 if (VAR_0->fence_drv[VAR_1].initialized) {
  FUNC_1(VAR_0, VAR_0->fence_drv[VAR_1].sync_seq[VAR_1], VAR_1);
  FUNC_0(&VAR_0->fence_drv[VAR_1].lockup_work);
 }
}
