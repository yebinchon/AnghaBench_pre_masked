
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_placement; } ;
struct amdgpu_bo {TYPE_2__* placements; TYPE_1__ placement; } ;
struct TYPE_4__ {int fpfn; int lpfn; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_bo *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->placement.num_placement; ++VAR_2) {
  VAR_1->placements[VAR_2].fpfn = 0 >> VAR_0;
  VAR_1->placements[VAR_2].lpfn = (256 * 1024 * 1024) >> VAR_0;
 }
}
