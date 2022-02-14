
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
struct TYPE_3__ {scalar_t__ ENABLE_CURSOR_DEGAMMA; } ;
struct TYPE_4__ {TYPE_1__ bits; } ;
struct dc_cursor_attributes {int color_format; TYPE_2__ attribute_flags; } ;
typedef enum dc_cursor_color_format { ____Placeholder_dc_cursor_color_format } dc_cursor_color_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int) ;
 struct dcn20_dpp* FUNC_2 (struct dpp*) ;

void FUNC_3(
  struct dpp *VAR_11,
  struct dc_cursor_attributes *VAR_12)
{
 enum dc_cursor_color_format VAR_13 = VAR_12->color_format;
 struct dcn20_dpp *VAR_14 = FUNC_2(VAR_11);
 int VAR_15 = 0;

 if (VAR_13 == VAR_8 ||
  VAR_13 == VAR_9) {
  if (VAR_12->attribute_flags.bits.ENABLE_CURSOR_DEGAMMA) {
   VAR_15 = 1;
  }
 }

 FUNC_1(VAR_7,
   VAR_3, VAR_13,
   VAR_2, 0,
   VAR_4, VAR_15);

 if (VAR_13 == VAR_10) {

  FUNC_0(VAR_5,
    VAR_0, 0x00000000);
  FUNC_0(VAR_6,
    VAR_1, 0xFFFFFFFF);
 }
}
