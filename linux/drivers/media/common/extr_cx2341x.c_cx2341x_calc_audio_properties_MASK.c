
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx2341x_mpeg_params {int audio_properties; int audio_sampling_freq; int audio_mode; int audio_mode_extension; int audio_emphasis; int audio_crc; int capabilities; int audio_encoding; int audio_ac3_bitrate; int audio_l2_bitrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct cx2341x_mpeg_params *VAR_5)
{
 VAR_5->audio_properties =
  (VAR_5->audio_sampling_freq << 0) |
  (VAR_5->audio_mode << 8) |
  (VAR_5->audio_mode_extension << 10) |
  (((VAR_5->audio_emphasis == VAR_2)
    ? 3 : VAR_5->audio_emphasis) << 12) |
  (VAR_5->audio_crc << 14);

 if ((VAR_5->capabilities & VAR_1) &&
     VAR_5->audio_encoding == VAR_3) {
  VAR_5->audio_properties |=

   ((3 - VAR_4) << 2) |
   (VAR_5->audio_ac3_bitrate << 4) |
   (VAR_0 << 28);
 } else {

  VAR_5->audio_properties |=
   ((3 - VAR_5->audio_encoding) << 2) |
   ((1 + VAR_5->audio_l2_bitrate) << 4);
 }
}
