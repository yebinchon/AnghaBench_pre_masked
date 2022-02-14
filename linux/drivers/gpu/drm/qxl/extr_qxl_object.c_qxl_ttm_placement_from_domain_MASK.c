
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ num_busy_placement; scalar_t__ num_placement; TYPE_2__* busy_placement; TYPE_2__* placement; } ;
struct qxl_bo {TYPE_2__* placements; TYPE_1__ placement; } ;
struct TYPE_4__ {scalar_t__ lpfn; scalar_t__ fpfn; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_0(struct qxl_bo *VAR_9, u32 VAR_10, bool VAR_11)
{
 u32 VAR_12 = 0;
 u32 VAR_13 = VAR_11 ? VAR_4 : 0;
 unsigned int VAR_14;

 VAR_9->placement.placement = VAR_9->placements;
 VAR_9->placement.busy_placement = VAR_9->placements;
 if (VAR_10 == VAR_2)
  VAR_9->placements[VAR_12++].flags = VAR_3 | VAR_7 | VAR_13;
 if (VAR_10 == VAR_1) {
  VAR_9->placements[VAR_12++].flags = VAR_3 | VAR_5 | VAR_13;
  VAR_9->placements[VAR_12++].flags = VAR_3 | VAR_7 | VAR_13;
 }
 if (VAR_10 == VAR_0)
  VAR_9->placements[VAR_12++].flags = VAR_8 | VAR_6 | VAR_13;
 if (!VAR_12)
  VAR_9->placements[VAR_12++].flags = VAR_8 | VAR_6;
 VAR_9->placement.num_placement = VAR_12;
 VAR_9->placement.num_busy_placement = VAR_12;
 for (VAR_14 = 0; VAR_14 < VAR_12; ++VAR_14) {
  VAR_9->placements[VAR_14].fpfn = 0;
  VAR_9->placements[VAR_14].lpfn = 0;
 }
}
