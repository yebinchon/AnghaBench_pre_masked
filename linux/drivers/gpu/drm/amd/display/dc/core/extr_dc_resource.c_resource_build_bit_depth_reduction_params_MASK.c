
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixel_encoding; int display_color_depth; } ;
struct dc_stream_state {int dither_option; TYPE_1__ timing; } ;
struct TYPE_4__ {int TRUNCATE_ENABLED; int TRUNCATE_DEPTH; int TRUNCATE_MODE; int SPATIAL_DITHER_ENABLED; int SPATIAL_DITHER_DEPTH; int HIGHPASS_RANDOM; int RGB_RANDOM; int FRAME_RANDOM; int FRAME_MODULATION_ENABLED; int FRAME_MODULATION_DEPTH; } ;
struct bit_depth_reduction_params {int pixel_encoding; TYPE_2__ flags; } ;
typedef enum dc_pixel_encoding { ____Placeholder_dc_pixel_encoding } dc_pixel_encoding ;
typedef enum dc_dither_option { ____Placeholder_dc_dither_option } dc_dither_option ;





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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct bit_depth_reduction_params*,int ,int) ;

void FUNC_1(struct dc_stream_state *VAR_25,
  struct bit_depth_reduction_params *VAR_26)
{
 enum dc_dither_option VAR_27 = VAR_25->dither_option;
 enum dc_pixel_encoding VAR_28 =
   VAR_25->timing.pixel_encoding;

 FUNC_0(VAR_26, 0, sizeof(*VAR_26));

 if (VAR_27 == VAR_0) {
  switch (VAR_25->timing.display_color_depth) {
  case 129:
   VAR_27 = VAR_9;
   break;
  case 128:
   VAR_27 = VAR_11;
   break;
  case 130:
   VAR_27 = VAR_5;
   break;
  default:
   VAR_27 = VAR_1;
  }
 }

 if (VAR_27 == VAR_1)
  return;

 if (VAR_27 == VAR_20) {
  VAR_26->flags.TRUNCATE_ENABLED = 1;
  VAR_26->flags.TRUNCATE_DEPTH = 0;
 } else if (VAR_27 == VAR_21 ||
   VAR_27 == VAR_23 ||
   VAR_27 == VAR_22) {
  VAR_26->flags.TRUNCATE_ENABLED = 1;
  VAR_26->flags.TRUNCATE_DEPTH = 1;
 } else if (VAR_27 == VAR_14 ||
   VAR_27 == VAR_17 ||
   VAR_27 == VAR_18 ||
   VAR_27 == VAR_16 ||
   VAR_27 == VAR_15 ||
   VAR_27 == VAR_19) {
  VAR_26->flags.TRUNCATE_ENABLED = 1;
  VAR_26->flags.TRUNCATE_DEPTH = 2;
 }
 if (VAR_27 == VAR_10 ||
   VAR_27 == VAR_9 ||
   VAR_27 == VAR_3) {
  VAR_26->flags.TRUNCATE_ENABLED = 1;
  VAR_26->flags.TRUNCATE_DEPTH = 2;
  VAR_26->flags.TRUNCATE_MODE = 1;
 }




 if (VAR_27 == VAR_10 ||
   VAR_27 == VAR_9 ||
   VAR_27 == VAR_17 ||
   VAR_27 == VAR_23) {
  VAR_26->flags.SPATIAL_DITHER_ENABLED = 1;
  VAR_26->flags.SPATIAL_DITHER_DEPTH = 0;
  VAR_26->flags.HIGHPASS_RANDOM = 1;
  VAR_26->flags.RGB_RANDOM =
    (VAR_28 == VAR_24) ? 1 : 0;
 } else if (VAR_27 == VAR_13 ||
   VAR_27 == VAR_11 ||
   VAR_27 == VAR_12 ||
   VAR_27 == VAR_18 ||
   VAR_27 == VAR_19) {
  VAR_26->flags.SPATIAL_DITHER_ENABLED = 1;
  VAR_26->flags.SPATIAL_DITHER_DEPTH = 1;
  VAR_26->flags.HIGHPASS_RANDOM = 1;
  VAR_26->flags.RGB_RANDOM =
    (VAR_28 == VAR_24) ? 1 : 0;
 } else if (VAR_27 == VAR_8 ||
   VAR_27 == VAR_5 ||
   VAR_27 == VAR_7 ||
   VAR_27 == VAR_6) {
  VAR_26->flags.SPATIAL_DITHER_ENABLED = 1;
  VAR_26->flags.SPATIAL_DITHER_DEPTH = 2;
  VAR_26->flags.HIGHPASS_RANDOM = 1;
  VAR_26->flags.RGB_RANDOM =
    (VAR_28 == VAR_24) ? 1 : 0;
 }

 if (VAR_27 == VAR_9 ||
   VAR_27 == VAR_11 ||
   VAR_27 == VAR_5) {
  VAR_26->flags.FRAME_RANDOM = 0;
 } else {
  VAR_26->flags.FRAME_RANDOM = 1;
 }




 if (VAR_27 == VAR_3 ||
   VAR_27 == VAR_12 ||
   VAR_27 == VAR_6 ||
   VAR_27 == VAR_15 ||
   VAR_27 == VAR_22 ||
   VAR_27 == VAR_19) {
  VAR_26->flags.FRAME_MODULATION_ENABLED = 1;
  VAR_26->flags.FRAME_MODULATION_DEPTH = 0;
 } else if (VAR_27 == VAR_4 ||
   VAR_27 == VAR_7 ||
   VAR_27 == VAR_16) {
  VAR_26->flags.FRAME_MODULATION_ENABLED = 1;
  VAR_26->flags.FRAME_MODULATION_DEPTH = 1;
 } else if (VAR_27 == VAR_2) {
  VAR_26->flags.FRAME_MODULATION_ENABLED = 1;
  VAR_26->flags.FRAME_MODULATION_DEPTH = 2;
 }

 VAR_26->pixel_encoding = VAR_28;
}
