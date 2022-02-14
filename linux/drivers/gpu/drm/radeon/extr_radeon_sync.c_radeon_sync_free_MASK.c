
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_sync {int * semaphores; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int *,struct radeon_fence*) ;

void FUNC_1(struct radeon_device *VAR_1,
        struct radeon_sync *VAR_2,
        struct radeon_fence *VAR_3)
{
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  FUNC_0(VAR_1, &VAR_2->semaphores[VAR_4], VAR_3);
}
