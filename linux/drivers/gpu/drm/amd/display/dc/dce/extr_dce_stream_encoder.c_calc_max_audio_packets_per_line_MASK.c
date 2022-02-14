
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct audio_crtc_info {int h_total; int h_active; int pixel_repetition; } ;



__attribute__((used)) static uint32_t FUNC_0(
 const struct audio_crtc_info *VAR_0)
{
 uint32_t VAR_1;

 VAR_1 =
  VAR_0->h_total - VAR_0->h_active;

 if (VAR_0->pixel_repetition)
  VAR_1 *= VAR_0->pixel_repetition;


 VAR_1 -= 58;

 VAR_1 -= 16;

 VAR_1 /= 32;

 return VAR_1;
}
