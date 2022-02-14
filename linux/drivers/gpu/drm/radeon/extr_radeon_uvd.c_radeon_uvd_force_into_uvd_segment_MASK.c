
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int num_placement; int num_busy_placement; } ;
struct radeon_bo {TYPE_2__ placement; TYPE_1__* placements; } ;
struct TYPE_3__ {int fpfn; int lpfn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(struct radeon_bo *VAR_2,
           uint32_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->placement.num_placement; ++VAR_4) {
  VAR_2->placements[VAR_4].fpfn = 0 >> VAR_0;
  VAR_2->placements[VAR_4].lpfn = (256 * 1024 * 1024) >> VAR_0;
 }


 if (VAR_3 == VAR_1)
  return;


 if (VAR_2->placement.num_placement > 1)
  return;


 VAR_2->placements[1] = VAR_2->placements[0];
 VAR_2->placements[1].fpfn += (256 * 1024 * 1024) >> VAR_0;
 VAR_2->placements[1].lpfn += (256 * 1024 * 1024) >> VAR_0;
 VAR_2->placement.num_placement++;
 VAR_2->placement.num_busy_placement++;
}
