
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ENABLE_MAGNIFICATION; } ;
struct TYPE_6__ {TYPE_2__ bits; } ;
struct TYPE_4__ {int low_part; int high_part; } ;
struct dc_cursor_attributes {TYPE_3__ attribute_flags; int color_format; int height; int width; TYPE_1__ address; int pitch; } ;
struct hubp {struct dc_cursor_attributes curs_attr; } ;
struct dcn20_hubp {int dummy; } ;
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
 int VAR_12 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int,int ,int) ;
 struct dcn20_hubp* FUNC_4 (struct hubp*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(
  struct hubp *VAR_13,
  const struct dc_cursor_attributes *VAR_14)
{
 struct dcn20_hubp *VAR_15 = FUNC_4(VAR_13);
 enum cursor_pitch VAR_16 = FUNC_5(VAR_14->pitch);
 enum cursor_lines_per_chunk VAR_17 = FUNC_6(
   VAR_14->width, VAR_14->color_format);

 VAR_13->curs_attr = *VAR_14;

 FUNC_1(VAR_11,
   VAR_11, VAR_14->address.high_part);
 FUNC_1(VAR_10,
   VAR_10, VAR_14->address.low_part);

 FUNC_2(VAR_9,
   VAR_12, VAR_14->width,
   VAR_4, VAR_14->height);

 FUNC_3(VAR_3,
   VAR_6, VAR_14->color_format,
   VAR_2, VAR_14->attribute_flags.bits.ENABLE_MAGNIFICATION,
   VAR_7, VAR_16,
   VAR_5, VAR_17);

 FUNC_0(VAR_8, 0,

   VAR_1, 0,

   VAR_0, 3);
}
