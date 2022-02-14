
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int low_part; int high_part; } ;
struct dc_cursor_attributes {int color_format; int height; int width; TYPE_1__ address; int pitch; } ;
struct hubp {struct dc_cursor_attributes curs_attr; } ;
struct dcn10_hubp {int dummy; } ;
typedef enum cursor_pitch { ____Placeholder_cursor_pitch } cursor_pitch ;
typedef enum cursor_lines_per_chunk { ____Placeholder_cursor_lines_per_chunk } cursor_lines_per_chunk ;


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
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int ,int) ;
 struct dcn10_hubp* FUNC_4 (struct hubp*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(
  struct hubp *VAR_12,
  const struct dc_cursor_attributes *VAR_13)
{
 struct dcn10_hubp *VAR_14 = FUNC_4(VAR_12);
 enum cursor_pitch VAR_15 = FUNC_5(VAR_13->pitch);
 enum cursor_lines_per_chunk VAR_16 = FUNC_6(
   VAR_13->width, VAR_13->color_format);

 VAR_12->curs_attr = *VAR_13;

 FUNC_1(VAR_10,
   VAR_10, VAR_13->address.high_part);
 FUNC_1(VAR_9,
   VAR_9, VAR_13->address.low_part);

 FUNC_2(VAR_8,
   VAR_11, VAR_13->width,
   VAR_3, VAR_13->height);

 FUNC_3(VAR_2,
   VAR_5, VAR_13->color_format,
   VAR_6, VAR_15,
   VAR_4, VAR_16);

 FUNC_0(VAR_7, 0,

   VAR_1, 0,

   VAR_0, 3);
}
