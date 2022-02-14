
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int ready; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct radeon_device*) ;

void FUNC_1(struct radeon_device *VAR_1)
{
 struct radeon_ring *VAR_2 = &VAR_1->ring[VAR_0];

 FUNC_0(VAR_1);
 VAR_2->ready = 0;
}
