
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int num_lanes; } ;
struct edp_ctrl {int link_rate; int lane_cnt; int color_depth; int pixel_rate; TYPE_1__ dp_link; } ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct edp_ctrl *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 u8 VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_7 = VAR_3->link_rate;
 VAR_8 = VAR_3->lane_cnt;
 VAR_9 = VAR_3->dp_link.num_lanes;

 VAR_6 = VAR_3->color_depth * 3;
 VAR_4 = VAR_3->pixel_rate;
 VAR_4 *= VAR_6;
 VAR_4 /= 8;

 if (VAR_7 > VAR_0 && VAR_7 <= VAR_1) {
  VAR_7 -= 4;
  VAR_10++;
 }

 if (VAR_10) {
  if (VAR_8 >= 1 && VAR_8 < VAR_9)
   VAR_8 <<= 1;

  VAR_5 = 270000;
  VAR_5 *= VAR_7;
  VAR_5 /= 10;
  VAR_5 *= VAR_8;

  FUNC_0("new lrate=%u prate=%u(kHz) rate=%d lane=%d p=%u b=%d",
   VAR_5, VAR_4, VAR_7, VAR_8,
   VAR_3->pixel_rate,
   VAR_6);

  if (VAR_5 > VAR_4) {
   VAR_3->link_rate = VAR_7;
   VAR_3->lane_cnt = VAR_8;
   FUNC_0("new rate=%d %d", VAR_7, VAR_8);
   return 0;
  }
 }

 return -VAR_2;
}
