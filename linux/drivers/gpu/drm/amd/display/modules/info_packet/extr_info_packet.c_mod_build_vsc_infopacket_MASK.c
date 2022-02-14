
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int timing_3d_format; int pixel_encoding; int display_color_depth; } ;
struct dc_stream_state {scalar_t__ view_format; scalar_t__ psr_version; scalar_t__ output_color_space; TYPE_6__ timing; TYPE_5__* link; } ;
struct dc_info_packet {int hb0; int hb1; int hb2; int hb3; int* sb; int valid; } ;
struct TYPE_8__ {scalar_t__ VSC_SDP_COLORIMETRY_SUPPORTED; } ;
struct TYPE_9__ {TYPE_2__ bits; } ;
struct TYPE_7__ {int raw; } ;
struct TYPE_10__ {TYPE_3__ dprx_feature; TYPE_1__ dpcd_rev; } ;
struct TYPE_11__ {TYPE_4__ dpcd_caps; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;







 int VAR_15 ;





 scalar_t__ VAR_16 ;

void FUNC_0(const struct dc_stream_state *VAR_17,
  struct dc_info_packet *VAR_18)
{
 unsigned int VAR_19 = 0;
 unsigned int VAR_20;
 unsigned int VAR_21 = 0;
 unsigned int VAR_22 = 0;
 bool VAR_23 = 0;

 if (VAR_17->timing.timing_3d_format != VAR_15 && VAR_17->view_format != VAR_16) {
  VAR_19 = 1;
  VAR_23 = 1;
 }


 if (VAR_17->psr_version != 0)
  VAR_19 = 2;


 if (VAR_17->link->dpcd_caps.dpcd_rev.raw >= 0x14 &&
   VAR_17->link->dpcd_caps.dprx_feature.bits.VSC_SDP_COLORIMETRY_SUPPORTED)
  VAR_19 = 5;




 if (VAR_19 == 0)
  return;

 if (VAR_19 == 0x2) {

  VAR_18->hb0 = 0x00;



  VAR_18->hb1 = 0x07;



  VAR_18->hb2 = 0x02;



  VAR_18->hb3 = 0x08;

  for (VAR_20 = 0; VAR_20 < 28; VAR_20++)
   VAR_18->sb[VAR_20] = 0;

  VAR_18->valid = 1;
 }

 if (VAR_19 == 0x1) {

  VAR_18->hb0 = 0x00;
  VAR_18->hb1 = 0x07;
  VAR_18->hb2 = 0x01;
  VAR_18->hb3 = 0x01;

  VAR_18->valid = 1;
 }

 if (VAR_23) {
  switch (VAR_17->timing.timing_3d_format) {
  case 134:
  case 130:
  case 128:
  case 129:
   VAR_18->sb[0] = 0x02;
   break;
  case 135:
  case 133:
   VAR_18->sb[0] = 0x01;
   break;
  case 131:
  case 132:
   VAR_18->sb[0] = 0x04;
   break;
  default:
   VAR_18->sb[0] = 0x00;
   break;
  }

 }
 if (VAR_19 == 0x5) {

  VAR_18->hb0 = 0x00;

  VAR_18->hb1 = 0x07;

  VAR_18->hb2 = 0x05;

  VAR_18->hb3 = 0x13;

  VAR_18->valid = 1;
  switch (VAR_17->timing.pixel_encoding) {
  case 139:
   VAR_21 = 0x0;
   break;
  case 136:
   VAR_21 = 0x1;
   break;
  case 137:
   VAR_21 = 0x2;
   break;
  case 138:
   VAR_21 = 0x3;
   break;
  default:
   VAR_21 = 0x0;
   break;
  }


  switch (VAR_17->timing.pixel_encoding) {
  case 139:
   if ((VAR_17->output_color_space == VAR_4) ||
     (VAR_17->output_color_space == VAR_5))
    VAR_22 = VAR_10;
   else if (VAR_17->output_color_space == VAR_3)
    VAR_22 = VAR_8;
   else if ((VAR_17->output_color_space == VAR_0) ||
     (VAR_17->output_color_space == VAR_1))
    VAR_22 = VAR_9;
   break;

  case 136:
  case 137:
  case 138:



   if (VAR_17->output_color_space == VAR_6)
    VAR_22 = VAR_13;
   else if (VAR_17->output_color_space == VAR_7)
    VAR_22 = VAR_14;
   else if (VAR_17->output_color_space == VAR_3)
    VAR_22 = VAR_11;
   else if (VAR_17->output_color_space == VAR_2)
    VAR_22 = VAR_12;
   break;

  default:
   VAR_22 = VAR_10;
   break;
  }

  VAR_18->sb[16] = (VAR_21 << 4) | VAR_22;


  switch (VAR_17->timing.display_color_depth) {
  case 141:



   VAR_18->sb[17] = 0;
   break;
  case 140:
   VAR_18->sb[17] = 1;
   break;
  case 144:
   VAR_18->sb[17] = 2;
   break;
  case 143:
   VAR_18->sb[17] = 3;
   break;

  case 142:
   VAR_18->sb[17] = 4;
   break;
  default:
   VAR_18->sb[17] = 0;
   break;
  }


  if ((VAR_17->output_color_space == VAR_5) ||
    (VAR_17->output_color_space == VAR_1) ||
    (VAR_21 != 0x0)) {
   VAR_18->sb[17] |= 0x80;
  }
  VAR_18->sb[18] = 0;
 }

}
