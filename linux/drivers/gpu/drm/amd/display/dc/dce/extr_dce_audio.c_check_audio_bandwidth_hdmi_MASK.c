
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ RATE_88_2; scalar_t__ RATE_96; scalar_t__ RATE_176_4; scalar_t__ RATE_192; } ;
union audio_sample_rates {TYPE_1__ rate; } ;
typedef int uint32_t ;
struct audio_crtc_info {int requested_pixel_clock_100Hz; int v_active; int pixel_repetition; int h_total; int h_active; int refresh_rate; int color_depth; scalar_t__ interlaced; } ;






__attribute__((used)) static void FUNC_0(
 const struct audio_crtc_info *VAR_0,
 uint32_t VAR_1,
 union audio_sample_rates *VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4;
 bool VAR_5 = 0;
 bool VAR_6 = 0;
 bool VAR_7 = 0;
 bool VAR_8 = 0;


 if (VAR_1 > 2) {


  if ((VAR_0->requested_pixel_clock_100Hz <= 270000) &&
  (VAR_0->v_active <= 576) &&
  !(VAR_0->interlaced) &&
  !(VAR_0->pixel_repetition == 2 ||
  VAR_0->pixel_repetition == 4)) {
   VAR_5 = 1;

  } else if ((VAR_0->requested_pixel_clock_100Hz <= 270000) &&
    (VAR_0->v_active <= 576) &&
    (VAR_0->interlaced) &&
    (VAR_0->pixel_repetition == 2)) {
   VAR_6 = 1;

  } else if ((VAR_0->requested_pixel_clock_100Hz <= 540000) &&
    (VAR_0->v_active <= 576) &&
    !(VAR_0->interlaced)) {
   VAR_8 = 1;
  }
 }




 VAR_4 = VAR_0->h_total - VAR_0->h_active;

 if (VAR_0->pixel_repetition)
  VAR_4 *= VAR_0->pixel_repetition;


 VAR_4 -= 58;

 VAR_4 -= 16;

 VAR_3 = VAR_4 * 10;



 VAR_3 /= 32;
 VAR_3 *= VAR_0->v_active;

 VAR_3 *= VAR_0->refresh_rate;

 VAR_3 /= 10;
 switch (VAR_0->color_depth) {
 case 128:
  VAR_3 *= 4;
  break;
 case 130:
  VAR_3 *= 5;
  break;
 case 129:
  VAR_3 *= 6;
  break;
 default:
  VAR_3 *= 4;
  break;
 }

 VAR_3 /= 4;


 if (VAR_3 < 88200)
  VAR_5 = 1;
 else if (VAR_3 < 96000)
  VAR_6 = 1;
 else if (VAR_3 < 176400)
  VAR_7 = 1;
 else if (VAR_3 < 192000)
  VAR_8 = 1;

 if (VAR_2 != ((void*)0)) {

  if (VAR_8)
   VAR_2->rate.RATE_192 = 0;

  if (VAR_7) {
   VAR_2->rate.RATE_192 = 0;
   VAR_2->rate.RATE_176_4 = 0;
  }
  if (VAR_6) {
   VAR_2->rate.RATE_192 = 0;
   VAR_2->rate.RATE_176_4 = 0;
   VAR_2->rate.RATE_96 = 0;
  }
  if (VAR_5) {
   VAR_2->rate.RATE_192 = 0;
   VAR_2->rate.RATE_176_4 = 0;
   VAR_2->rate.RATE_96 = 0;
   VAR_2->rate.RATE_88_2 = 0;
  }
 }
}
