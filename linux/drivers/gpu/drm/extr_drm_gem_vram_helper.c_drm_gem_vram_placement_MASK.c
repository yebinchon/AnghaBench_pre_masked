
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int num_placement; unsigned int num_busy_placement; TYPE_2__* busy_placement; TYPE_2__* placement; } ;
struct drm_gem_vram_object {TYPE_2__* placements; TYPE_1__ placement; } ;
struct TYPE_4__ {unsigned long flags; scalar_t__ lpfn; scalar_t__ fpfn; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static void FUNC_0(struct drm_gem_vram_object *VAR_5,
       unsigned long VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8 = 0;

 VAR_5->placement.placement = VAR_5->placements;
 VAR_5->placement.busy_placement = VAR_5->placements;

 if (VAR_6 & VAR_2)
  VAR_5->placements[VAR_8++].flags = VAR_3 |
          VAR_1 |
          VAR_2;

 if (VAR_6 & VAR_0)
  VAR_5->placements[VAR_8++].flags = VAR_4 |
          VAR_0;

 if (!VAR_8)
  VAR_5->placements[VAR_8++].flags = VAR_4 |
          VAR_0;

 VAR_5->placement.num_placement = VAR_8;
 VAR_5->placement.num_busy_placement = VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
  VAR_5->placements[VAR_7].fpfn = 0;
  VAR_5->placements[VAR_7].lpfn = 0;
 }
}
