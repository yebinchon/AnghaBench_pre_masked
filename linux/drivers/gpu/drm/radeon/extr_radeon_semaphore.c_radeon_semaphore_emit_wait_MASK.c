
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_semaphore {int gpu_addr; int waiters; } ;
struct radeon_ring {int last_semaphore_wait_addr; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 scalar_t__ FUNC_0 (struct radeon_device*,int,struct radeon_ring*,struct radeon_semaphore*,int) ;
 int FUNC_1 (int,struct radeon_semaphore*) ;

bool FUNC_2(struct radeon_device *VAR_0, int VAR_1,
    struct radeon_semaphore *VAR_2)
{
 struct radeon_ring *VAR_3 = &VAR_0->ring[VAR_1];

 FUNC_1(VAR_1, VAR_2);

 if (FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2, 1)) {
  ++VAR_2->waiters;


  VAR_3->last_semaphore_wait_addr = VAR_2->gpu_addr;
  return 1;
 }
 return 0;
}
