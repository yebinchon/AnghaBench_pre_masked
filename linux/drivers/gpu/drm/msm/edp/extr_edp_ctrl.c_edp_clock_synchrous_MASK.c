
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edp_ctrl {int color_depth; scalar_t__ base; } ;
typedef enum edp_color_depth { ____Placeholder_edp_color_depth } edp_color_depth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct edp_ctrl *VAR_7, int VAR_8)
{
 u32 VAR_9;
 enum edp_color_depth VAR_10;

 VAR_9 = FUNC_1(VAR_7->base + VAR_6);

 if (VAR_8)
  VAR_9 |= VAR_5;
 else
  VAR_9 &= ~VAR_5;


 VAR_10 = VAR_3;
 if (VAR_7->color_depth == 8)
  VAR_10 = VAR_4;
 else if (VAR_7->color_depth == 10)
  VAR_10 = VAR_0;
 else if (VAR_7->color_depth == 12)
  VAR_10 = VAR_1;
 else if (VAR_7->color_depth == 16)
  VAR_10 = VAR_2;

 VAR_9 |= FUNC_0(VAR_10);

 FUNC_2(VAR_7->base + VAR_6, VAR_9);
}
