
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int dummy; } ;
struct radeon_device {int ring_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct radeon_ring*) ;

void FUNC_2(struct radeon_device *VAR_0, struct radeon_ring *VAR_1)
{
 FUNC_1(VAR_1);
 FUNC_0(&VAR_0->ring_lock);
}
