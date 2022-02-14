
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ad714x_wheel_plat {scalar_t__ end_stage; scalar_t__ start_stage; int max_coord; } ;
struct ad714x_wheel_drv {scalar_t__ pre_highest_stage; scalar_t__ highest_stage; int flt_pos; int abs_pos; } ;
struct ad714x_chip {TYPE_2__* sw; TYPE_1__* hw; } ;
struct TYPE_4__ {struct ad714x_wheel_drv* wheel; } ;
struct TYPE_3__ {struct ad714x_wheel_plat* wheel; } ;



__attribute__((used)) static void FUNC_0(struct ad714x_chip *VAR_0, int VAR_1)
{
 struct ad714x_wheel_plat *VAR_2 = &VAR_0->hw->wheel[VAR_1];
 struct ad714x_wheel_drv *VAR_3 = &VAR_0->sw->wheel[VAR_1];
 if (((VAR_3->pre_highest_stage == VAR_2->end_stage) &&
   (VAR_3->highest_stage == VAR_2->start_stage)) ||
     ((VAR_3->pre_highest_stage == VAR_2->start_stage) &&
   (VAR_3->highest_stage == VAR_2->end_stage)))
  VAR_3->flt_pos = VAR_3->abs_pos;
 else
  VAR_3->flt_pos = ((VAR_3->flt_pos * 30) + (VAR_3->abs_pos * 71)) / 100;

 if (VAR_3->flt_pos > VAR_2->max_coord)
  VAR_3->flt_pos = VAR_2->max_coord;
}
