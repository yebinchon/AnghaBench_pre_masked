
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {int mv_hor_mode; int mv_hor_step; int src_width; int mv_vert_mode; int mv_vert_step; int src_height; scalar_t__ hflip; } ;
void FUNC_0(struct tpg_data *VAR_0)
{
 int VAR_1 = VAR_0->mv_hor_mode > 131 ? -1 : 1;

 if (VAR_0->hflip)
  VAR_1 = -VAR_1;
 switch (VAR_0->mv_hor_mode) {
 case 133:
 case 129:
  VAR_0->mv_hor_step = ((VAR_0->src_width + 319) / 320) * 4;
  break;
 case 134:
 case 130:
  VAR_0->mv_hor_step = ((VAR_0->src_width + 639) / 640) * 4;
  break;
 case 132:
 case 128:
  VAR_0->mv_hor_step = 2;
  break;
 case 131:
  VAR_0->mv_hor_step = 0;
  break;
 }
 if (VAR_1 < 0)
  VAR_0->mv_hor_step = VAR_0->src_width - VAR_0->mv_hor_step;

 VAR_1 = VAR_0->mv_vert_mode > 131 ? -1 : 1;
 switch (VAR_0->mv_vert_mode) {
 case 133:
 case 129:
  VAR_0->mv_vert_step = ((VAR_0->src_width + 319) / 320) * 4;
  break;
 case 134:
 case 130:
  VAR_0->mv_vert_step = ((VAR_0->src_width + 639) / 640) * 4;
  break;
 case 132:
 case 128:
  VAR_0->mv_vert_step = 1;
  break;
 case 131:
  VAR_0->mv_vert_step = 0;
  break;
 }
 if (VAR_1 < 0)
  VAR_0->mv_vert_step = VAR_0->src_height - VAR_0->mv_vert_step;
}
