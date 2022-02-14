
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_support {int hdmi_audio_native; int hdmi_audio_on_dongle; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum display_dongle_type { ____Placeholder_display_dongle_type } display_dongle_type ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum signal_type FUNC_0(
  enum display_dongle_type VAR_3,
  struct audio_support *VAR_4)
{
 enum signal_type VAR_5 = VAR_2;

 switch (VAR_3) {
 case 129:
  if (VAR_4->hdmi_audio_on_dongle)
   VAR_5 = VAR_1;
  else
   VAR_5 = VAR_0;
  break;
 case 130:
  VAR_5 = VAR_0;
  break;
 case 128:
  if (VAR_4->hdmi_audio_native)
   VAR_5 = VAR_1;
  else
   VAR_5 = VAR_0;
  break;
 default:
  VAR_5 = VAR_2;
  break;
 }

 return VAR_5;
}
