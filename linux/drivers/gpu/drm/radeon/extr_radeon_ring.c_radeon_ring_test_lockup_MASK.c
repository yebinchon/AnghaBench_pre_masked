
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct radeon_ring {int idx; int last_rptr; int last_activity; } ;
struct radeon_device {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*) ;

bool FUNC_6(struct radeon_device *VAR_2, struct radeon_ring *VAR_3)
{
 uint32_t VAR_4 = FUNC_4(VAR_2, VAR_3);
 uint64_t VAR_5 = FUNC_0(&VAR_3->last_activity);
 uint64_t VAR_6;

 if (VAR_4 != FUNC_1(&VAR_3->last_rptr)) {

  FUNC_5(VAR_2, VAR_3);
  return 0;
 }

 VAR_6 = FUNC_3(VAR_0 - VAR_5);
 if (VAR_1 && VAR_6 >= VAR_1) {
  FUNC_2(VAR_2->dev, "ring %d stalled for more than %llumsec\n",
   VAR_3->idx, VAR_6);
  return 1;
 }

 return 0;
}
