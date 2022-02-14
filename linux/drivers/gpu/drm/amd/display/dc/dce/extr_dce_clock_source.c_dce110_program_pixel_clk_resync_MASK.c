
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce110_clk_src {int dummy; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;






 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(
  struct dce110_clk_src *VAR_3,
  enum signal_type VAR_4,
  enum dc_color_depth VAR_5)
{
 FUNC_0(VAR_1,
   VAR_0, 0);






 if (VAR_4 != VAR_2)
  return;

 switch (VAR_5) {
 case 128:
  FUNC_0(VAR_1,
    VAR_0, 0);
  break;
 case 131:
  FUNC_0(VAR_1,
    VAR_0, 1);
  break;
 case 130:
  FUNC_0(VAR_1,
    VAR_0, 2);
  break;
 case 129:
  FUNC_0(VAR_1,
    VAR_0, 3);
  break;
 default:
  break;
 }
}
