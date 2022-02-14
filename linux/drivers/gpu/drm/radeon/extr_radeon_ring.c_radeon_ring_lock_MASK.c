
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int dummy; } ;
struct radeon_device {int ring_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ring*,unsigned int) ;

int FUNC_3(struct radeon_device *VAR_0, struct radeon_ring *VAR_1, unsigned VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->ring_lock);
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(&VAR_0->ring_lock);
  return VAR_3;
 }
 return 0;
}
