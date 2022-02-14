
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_transform {int dummy; } ;
typedef enum graphics_csc_adjust_type { ____Placeholder_graphics_csc_adjust_type } graphics_csc_adjust_type ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
typedef enum csc_color_mode { ____Placeholder_csc_color_mode } csc_color_mode ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_1(
 struct dce_transform *VAR_5,
 enum csc_color_mode VAR_6,
 enum graphics_csc_adjust_type VAR_7,
 enum dc_color_space VAR_8)
{
 FUNC_0(VAR_3, 0,
  VAR_4, 0);

 if (VAR_7 == VAR_2) {
  if (VAR_6 == VAR_0) {
   FUNC_0(VAR_3, 0,
    VAR_4, 4);
  } else {

   switch (VAR_8) {
   case 133:

    FUNC_0(VAR_3, 0,
     VAR_4, 0);
    break;
   case 132:

    FUNC_0(VAR_3, 0,
     VAR_4, 1);
    break;
   case 131:
   case 130:

    FUNC_0(VAR_3, 0,
     VAR_4, 2);
    break;
   case 129:
   case 128:

    FUNC_0(VAR_3, 0,
     VAR_4, 3);
    break;
   default:
    return 0;
   }
  }
 } else if (VAR_7 == VAR_1) {
  switch (VAR_8) {
  case 133:

   FUNC_0(VAR_3, 0,
    VAR_4, 0);
   break;
   break;
  case 132:

   FUNC_0(VAR_3, 0,
    VAR_4, 1);
   break;
  case 131:
  case 130:

   FUNC_0(VAR_3, 0,
    VAR_4, 2);
   break;
  case 129:
  case 128:

   FUNC_0(VAR_3, 0,
    VAR_4, 3);
   break;
  default:
   return 0;
  }

 } else

  FUNC_0(VAR_3, 0,
   VAR_4, 0);

 return 1;
}
