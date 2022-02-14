
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_straps {scalar_t__ hdmi_disable; int dc_pinstraps_audio; int audio_stream_number; } ;
struct audio_support {int dp_audio; int hdmi_audio_native; int hdmi_audio_on_dongle; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(
 const struct resource_straps *VAR_0,
 unsigned int *VAR_1,
 struct audio_support *VAR_2)
{
 VAR_2->dp_audio = 1;
 VAR_2->hdmi_audio_native = 0;
 VAR_2->hdmi_audio_on_dongle = 0;

 if (VAR_0->hdmi_disable == 0) {
  if (VAR_0->dc_pinstraps_audio & 0x2) {
   VAR_2->hdmi_audio_on_dongle = 1;
   VAR_2->hdmi_audio_native = 1;
  }
 }

 switch (VAR_0->audio_stream_number) {
 case 0:
  break;
 case 1:
  *VAR_1 = 1;
  break;
 default:
  FUNC_0("DC: unexpected audio fuse!\n");
 }
}
