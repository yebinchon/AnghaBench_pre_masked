
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int num_lanes; int rate; } ;
struct edp_ctrl {int pixel_rate; int color_depth; int link_rate; int lane_cnt; TYPE_1__ dp_link; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct edp_ctrl *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2;
 u32 VAR_3;
 u8 VAR_4 = VAR_0->dp_link.num_lanes;
 u8 VAR_5;

 VAR_1 = VAR_0->pixel_rate;
 VAR_3 = VAR_0->color_depth * 3;





 VAR_0->link_rate = FUNC_1(VAR_0->dp_link.rate);

 VAR_1 *= VAR_3;
 VAR_1 /= 8;

 VAR_2 = 270000;
 VAR_2 *= VAR_0->link_rate;
 VAR_2 /= 10;

 for (VAR_5 = 1; VAR_5 <= VAR_4; VAR_5 <<= 1) {
  if (VAR_2 >= VAR_1)
   break;
  VAR_2 <<= 1;
 }

 VAR_0->lane_cnt = VAR_5;
 FUNC_0("rate=%d lane=%d", VAR_0->link_rate, VAR_0->lane_cnt);
}
