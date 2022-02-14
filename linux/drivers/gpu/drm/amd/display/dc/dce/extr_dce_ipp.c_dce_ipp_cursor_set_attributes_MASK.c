
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct input_pixel_processor {int dummy; } ;
struct dce_ipp {int dummy; } ;
struct TYPE_6__ {int low_part; int high_part; } ;
struct TYPE_4__ {int INVERSE_TRANSPARENT_CLAMPING; int ENABLE_MAGNIFICATION; } ;
struct TYPE_5__ {TYPE_1__ bits; } ;
struct dc_cursor_attributes {int color_format; TYPE_3__ address; scalar_t__ height; scalar_t__ width; TYPE_2__ attribute_flags; } ;


 int FUNC_0 () ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,int,int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int,int ,int ,int ,int ) ;
 struct dce_ipp* FUNC_6 (struct input_pixel_processor*) ;

__attribute__((used)) static void FUNC_7(
 struct input_pixel_processor *VAR_21,
 const struct dc_cursor_attributes *VAR_22)
{
 struct dce_ipp *VAR_23 = FUNC_6(VAR_21);
 int VAR_24;


 FUNC_4(VAR_20, VAR_5, 1);


 switch (VAR_22->color_format) {
 case 128:
  VAR_24 = 0;
  break;
 case 131:
  VAR_24 = 1;
  break;
 case 130:
  VAR_24 = 2;
  break;
 case 129:
  VAR_24 = 3;
  break;
 default:
  FUNC_0();
  VAR_24 = 0;
 }

 FUNC_5(VAR_15,
  VAR_2, VAR_24,
  VAR_0, VAR_22->attribute_flags.bits.ENABLE_MAGNIFICATION,
  VAR_16, VAR_22->attribute_flags.bits.INVERSE_TRANSPARENT_CLAMPING);

 if (VAR_22->color_format == 128) {
  FUNC_3(VAR_7, 0,
   VAR_8, 0,
   VAR_9, 0,
   VAR_10, 0);

  FUNC_3(VAR_11, 0,
   VAR_12, 0xff,
   VAR_13, 0xff,
   VAR_14, 0xff);
 }





 FUNC_2(VAR_17, 0,
  VAR_6, VAR_22->width-1,
  VAR_1, VAR_22->height-1);







 FUNC_1(VAR_19, 0,
  VAR_4, VAR_22->address.high_part);

 FUNC_1(VAR_18, 0,
  VAR_3, VAR_22->address.low_part);


 FUNC_4(VAR_20, VAR_5, 0);
}
