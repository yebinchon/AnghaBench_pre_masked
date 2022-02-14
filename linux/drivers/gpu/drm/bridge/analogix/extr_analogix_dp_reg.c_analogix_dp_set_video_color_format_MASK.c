
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dynamic_range; int color_depth; int color_space; scalar_t__ ycbcr_coeff; } ;
struct analogix_dp_device {scalar_t__ reg_base; TYPE_1__ video_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct analogix_dp_device *VAR_8)
{
 u32 VAR_9;


 VAR_9 = (VAR_8->video_info.dynamic_range << VAR_4) |
  (VAR_8->video_info.color_depth << VAR_2) |
  (VAR_8->video_info.color_space << VAR_3);
 FUNC_1(VAR_9, VAR_8->reg_base + VAR_0);


 VAR_9 = FUNC_0(VAR_8->reg_base + VAR_1);
 VAR_9 &= ~VAR_7;
 if (VAR_8->video_info.ycbcr_coeff)
  VAR_9 |= VAR_6;
 else
  VAR_9 |= VAR_5;
 FUNC_1(VAR_9, VAR_8->reg_base + VAR_1);
}
