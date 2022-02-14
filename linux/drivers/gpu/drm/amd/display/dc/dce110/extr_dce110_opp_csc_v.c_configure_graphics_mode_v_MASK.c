
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {struct dc_context* ctx; } ;
struct dce_transform {TYPE_1__ base; } ;
struct dc_context {int dummy; } ;
typedef enum graphics_csc_adjust_type { ____Placeholder_graphics_csc_adjust_type } graphics_csc_adjust_type ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
typedef enum csc_color_mode { ____Placeholder_csc_color_mode } csc_color_mode ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dc_context*,int ) ;
 int FUNC_1 (struct dc_context*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static bool FUNC_3(
 struct dce_transform *VAR_6,
 enum csc_color_mode VAR_7,
 enum graphics_csc_adjust_type VAR_8,
 enum dc_color_space VAR_9)
{
 struct dc_context *VAR_10 = VAR_6->base.ctx;
 uint32_t VAR_11 = VAR_5;
 uint32_t VAR_12 = FUNC_0(VAR_10, VAR_11);

 FUNC_2(
  VAR_12,
  0,
  VAR_0,
  VAR_4);

 if (VAR_8 == VAR_3) {
  if (VAR_7 == VAR_1)
   return 1;

  switch (VAR_9) {
  case 133:

   FUNC_2(
    VAR_12,
    0,
    VAR_0,
    VAR_4);
   break;
  case 132:

   return 0;

  case 130:

   FUNC_2(
    VAR_12,
    2,
    VAR_0,
    VAR_4);
   break;
  case 129:
  case 128:

   FUNC_2(
    VAR_12,
    3,
    VAR_0,
    VAR_4);
   break;
  default:
   return 0;
  }

 } else if (VAR_8 == VAR_2) {
  switch (VAR_9) {
  case 133:

   FUNC_2(
    VAR_12,
    0,
    VAR_0,
    VAR_4);
   break;
  case 132:

   return 0;
  case 131:
  case 130:

   FUNC_2(
    VAR_12,
    2,
    VAR_0,
    VAR_4);
   break;
  case 129:
  case 128:

   FUNC_2(
    VAR_12,
    3,
    VAR_0,
    VAR_4);
   break;
  default:
   return 0;
  }

 } else

  FUNC_2(
   VAR_12,
   0,
   VAR_0,
   VAR_4);

 VAR_11 = VAR_5;
 FUNC_1(VAR_10, VAR_11, VAR_12);

 return 1;
}
