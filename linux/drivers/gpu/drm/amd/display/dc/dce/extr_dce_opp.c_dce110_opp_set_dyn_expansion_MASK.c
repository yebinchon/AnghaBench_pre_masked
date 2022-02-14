
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_pixel_processor {int dummy; } ;
struct dce110_opp {int dummy; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dce110_opp* FUNC_1 (struct output_pixel_processor*) ;

void FUNC_2(
 struct output_pixel_processor *VAR_6,
 enum dc_color_space VAR_7,
 enum dc_color_depth VAR_8,
 enum signal_type VAR_9)
{
 struct dce110_opp *VAR_10 = FUNC_1(VAR_6);

 FUNC_0(VAR_0,
   VAR_1, 0,
   VAR_2, 0);



 if (VAR_9 == VAR_5 ||
  VAR_9 == VAR_3 ||
  VAR_9 == VAR_4) {
  switch (VAR_8) {
  case 128:
   FUNC_0(VAR_0,
    VAR_1, 1,
    VAR_2, 1);
   break;
  case 130:
   FUNC_0(VAR_0,
    VAR_1, 1,
    VAR_2, 0);
   break;
  case 129:
   FUNC_0(
    VAR_0,
    VAR_1, 1,
    VAR_2, 0);
   break;
  default:
   break;
  }
 }
}
