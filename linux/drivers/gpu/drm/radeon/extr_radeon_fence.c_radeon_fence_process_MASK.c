
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int fence_queue; } ;


 scalar_t__ FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct radeon_device *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1))
  FUNC_1(&VAR_0->fence_queue);
}
