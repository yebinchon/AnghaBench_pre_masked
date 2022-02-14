
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;
struct dc_crtc_timing {int dummy; } ;
struct crtc_stereo_flags {scalar_t__ FRAME_PACKED; scalar_t__ RIGHT_EYE_POLARITY; scalar_t__ PROGRAM_STEREO; scalar_t__ DISABLE_STEREO_DP_SYNC; scalar_t__ PROGRAM_POLARITY; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct timing_generator *VAR_9,
 const struct dc_crtc_timing *VAR_10, struct crtc_stereo_flags *VAR_11)
{
 struct optc *VAR_12 = FUNC_0(VAR_9);

 if (VAR_11) {
  uint32_t VAR_13;
  VAR_13 = VAR_11->FRAME_PACKED == 0 ? 1 : 0;

  if (VAR_11->PROGRAM_STEREO)
   FUNC_3(VAR_4,
    VAR_5, VAR_13,
    VAR_7, 0,
    VAR_8, 0);

  if (VAR_11->PROGRAM_POLARITY)
   FUNC_1(VAR_4,
    VAR_6,
    VAR_11->RIGHT_EYE_POLARITY == 0 ? 0 : 1);

  if (VAR_11->DISABLE_STEREO_DP_SYNC)
   FUNC_1(VAR_4,
    VAR_3, 1);

  if (VAR_11->PROGRAM_STEREO)
   FUNC_2(VAR_0,
    VAR_1, VAR_11->FRAME_PACKED,
    VAR_2, VAR_11->FRAME_PACKED);

 }
}
