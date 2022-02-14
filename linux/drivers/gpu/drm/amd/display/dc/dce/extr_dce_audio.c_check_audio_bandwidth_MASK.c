
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union audio_sample_rates {int dummy; } audio_sample_rates ;
typedef int uint32_t ;
struct audio_crtc_info {int dummy; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;






 int FUNC_0 (struct audio_crtc_info const*,int ,union audio_sample_rates*) ;
 int FUNC_1 (struct audio_crtc_info const*,int ,union audio_sample_rates*) ;
 int FUNC_2 (struct audio_crtc_info const*,int ,union audio_sample_rates*) ;

__attribute__((used)) static void FUNC_3(
 const struct audio_crtc_info *VAR_0,
 uint32_t VAR_1,
 enum signal_type VAR_2,
 union audio_sample_rates *VAR_3)
{
 switch (VAR_2) {
 case 128:
  FUNC_2(
   VAR_0, VAR_1, VAR_3);
  break;
 case 129:
 case 131:
  FUNC_1(
   VAR_0, VAR_1, VAR_3);
  break;
 case 130:
  FUNC_0(
   VAR_0, VAR_1, VAR_3);
  break;
 default:
  break;
 }
}
