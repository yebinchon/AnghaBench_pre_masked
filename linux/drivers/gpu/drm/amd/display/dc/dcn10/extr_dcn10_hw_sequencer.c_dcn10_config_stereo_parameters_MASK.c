
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int RIGHT_EYE_3D_POLARITY; } ;
struct TYPE_8__ {int timing_3d_format; TYPE_3__ flags; } ;
struct dc_stream_state {int view_format; TYPE_4__ timing; TYPE_2__* link; } ;
struct crtc_stereo_flags {int PROGRAM_STEREO; int PROGRAM_POLARITY; int DISABLE_STEREO_DP_SYNC; int FRAME_PACKED; int RIGHT_EYE_POLARITY; } ;
typedef enum view_3d_format { ____Placeholder_view_3d_format } view_3d_format ;
typedef enum display_dongle_type { ____Placeholder_display_dongle_type } display_dongle_type ;
typedef enum dc_timing_3d_format { ____Placeholder_dc_timing_3d_format } dc_timing_3d_format ;
struct TYPE_6__ {TYPE_1__* ddc; } ;
struct TYPE_5__ {int dongle_type; } ;


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

__attribute__((used)) static void FUNC_0(
  struct dc_stream_state *VAR_11, struct crtc_stereo_flags *VAR_12)
{
 enum view_3d_format VAR_13 = VAR_11->view_format;
 enum dc_timing_3d_format VAR_14 = VAR_11->timing.timing_3d_format;

 bool VAR_15 = 0;

 if (VAR_14 == VAR_6 ||
  VAR_14 == VAR_8 ||
  VAR_14 == VAR_9)
  VAR_15 = 1;

 if (VAR_15 == 0 &&
  VAR_13 == VAR_10) {

  VAR_12->PROGRAM_STEREO = 1;
  VAR_12->PROGRAM_POLARITY = 1;
  if (VAR_14 == VAR_5 ||
   VAR_14 == VAR_3 ||
   VAR_14 == VAR_7) {
   enum display_dongle_type VAR_16 = VAR_11->link->ddc->dongle_type;

   if (VAR_16 == VAR_2 ||
    VAR_16 == VAR_0 ||
    VAR_16 == VAR_1)
    VAR_12->DISABLE_STEREO_DP_SYNC = 1;
  }
  VAR_12->RIGHT_EYE_POLARITY = VAR_11->timing.flags.RIGHT_EYE_3D_POLARITY;

  if (VAR_14 == VAR_4)
   VAR_12->FRAME_PACKED = 1;
 }

 return;
}
