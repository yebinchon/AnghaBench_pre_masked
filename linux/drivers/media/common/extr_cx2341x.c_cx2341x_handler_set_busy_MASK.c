
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx2341x_handler {int video_bitrate_peak; int video_bitrate; int video_bitrate_mode; int stream_type; int stream_vbi_fmt; int audio_ac3_bitrate; int audio_l2_bitrate; int audio_encoding; int audio_sampling_freq; } ;


 int FUNC_0 (int ,int) ;

void FUNC_1(struct cx2341x_handler *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->audio_sampling_freq, VAR_1);
 FUNC_0(VAR_0->audio_encoding, VAR_1);
 FUNC_0(VAR_0->audio_l2_bitrate, VAR_1);
 FUNC_0(VAR_0->audio_ac3_bitrate, VAR_1);
 FUNC_0(VAR_0->stream_vbi_fmt, VAR_1);
 FUNC_0(VAR_0->stream_type, VAR_1);
 FUNC_0(VAR_0->video_bitrate_mode, VAR_1);
 FUNC_0(VAR_0->video_bitrate, VAR_1);
 FUNC_0(VAR_0->video_bitrate_peak, VAR_1);
}
