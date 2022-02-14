
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int capabilities; } ;
struct edp_ctrl {int color_depth; scalar_t__ base; int interlaced; TYPE_1__ dp_link; scalar_t__ lane_cnt; } ;
typedef enum edp_color_depth { ____Placeholder_edp_color_depth } edp_color_depth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct edp_ctrl *VAR_8)
{
 u32 VAR_9;
 enum edp_color_depth VAR_10;

 VAR_9 = FUNC_1(VAR_8->lane_cnt - 1);

 if (VAR_8->dp_link.capabilities & VAR_0)
  VAR_9 |= VAR_3;

 VAR_10 = VAR_1;
 if (VAR_8->color_depth == 8)
  VAR_10 = VAR_2;

 VAR_9 |= FUNC_0(VAR_10);

 if (!VAR_8->interlaced)
  VAR_9 |= VAR_4;

 VAR_9 |= (VAR_6 |
  VAR_5);

 FUNC_2(VAR_8->base + VAR_7, VAR_9);
}
