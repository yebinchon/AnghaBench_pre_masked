
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int ready; } ;
struct radeon_device {int needs_reset; int accel_working; struct radeon_ring* ring; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct radeon_device*,unsigned int) ;
 int FUNC_2 (struct radeon_device*,unsigned int,struct radeon_ring*) ;

int FUNC_3(struct radeon_device *VAR_2)
{
 unsigned VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  struct radeon_ring *VAR_5 = &VAR_2->ring[VAR_3];

  if (!VAR_5->ready)
   continue;

  VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_5);
  if (VAR_4) {
   FUNC_1(VAR_2, VAR_3);
   VAR_5->ready = 0;
   VAR_2->needs_reset = 0;

   if (VAR_3 == VAR_1) {

    FUNC_0("radeon: failed testing IB on GFX ring (%d).\n", VAR_4);
    VAR_2->accel_working = 0;
    return VAR_4;

   } else {

    FUNC_0("radeon: failed testing IB on ring %d (%d).\n", VAR_3, VAR_4);
   }
  }
 }
 return 0;
}
