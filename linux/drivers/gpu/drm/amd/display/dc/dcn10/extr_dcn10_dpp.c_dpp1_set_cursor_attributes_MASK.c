
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;
struct dc_cursor_attributes {int color_format; } ;
typedef enum dc_cursor_color_format { ____Placeholder_dc_cursor_color_format } dc_cursor_color_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ,int ) ;
 struct dcn10_dpp* FUNC_2 (struct dpp*) ;

void FUNC_3(
  struct dpp *VAR_8,
  struct dc_cursor_attributes *VAR_9)
{
 enum dc_cursor_color_format VAR_10 = VAR_9->color_format;
 struct dcn10_dpp *VAR_11 = FUNC_2(VAR_8);

 FUNC_1(VAR_6,
   VAR_3, VAR_10,
   VAR_2, 0);

 if (VAR_10 == VAR_7) {

  FUNC_0(VAR_4,
    VAR_0, 0x00000000);
  FUNC_0(VAR_5,
    VAR_1, 0xFFFFFFFF);
 }
}
