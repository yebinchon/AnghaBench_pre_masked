
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int id; int value; } ;
struct cx2341x_mpeg_params {int stream_insert_nav_packets; int video_chroma_median_filter_bottom; int video_chroma_median_filter_top; int video_luma_median_filter_bottom; int video_luma_median_filter_top; int video_median_filter_type; int video_temporal_filter; int video_temporal_filter_mode; int video_chroma_spatial_filter_type; int video_luma_spatial_filter_type; int video_spatial_filter; int video_spatial_filter_mode; int stream_vbi_fmt; int stream_type; int video_mute_yuv; int video_mute; int video_temporal_decimation; int video_bitrate_peak; int video_bitrate; int video_bitrate_mode; int video_gop_closure; int video_gop_size; int video_b_frames; int video_aspect; int video_encoding; int audio_mute; int audio_crc; int audio_emphasis; int audio_mode_extension; int audio_mode; int audio_ac3_bitrate; int audio_l2_bitrate; int audio_encoding; int audio_sampling_freq; } ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(const struct cx2341x_mpeg_params *VAR_1,
  struct v4l2_ext_control *VAR_2)
{
 switch (VAR_2->id) {
 case 153:
  VAR_2->value = VAR_1->audio_sampling_freq;
  break;
 case 158:
  VAR_2->value = VAR_1->audio_encoding;
  break;
 case 157:
  VAR_2->value = VAR_1->audio_l2_bitrate;
  break;
 case 161:
  VAR_2->value = VAR_1->audio_ac3_bitrate;
  break;
 case 156:
  VAR_2->value = VAR_1->audio_mode;
  break;
 case 155:
  VAR_2->value = VAR_1->audio_mode_extension;
  break;
 case 159:
  VAR_2->value = VAR_1->audio_emphasis;
  break;
 case 160:
  VAR_2->value = VAR_1->audio_crc;
  break;
 case 154:
  VAR_2->value = VAR_1->audio_mute;
  break;
 case 133:
  VAR_2->value = VAR_1->video_encoding;
  break;
 case 138:
  VAR_2->value = VAR_1->video_aspect;
  break;
 case 134:
  VAR_2->value = VAR_1->video_b_frames;
  break;
 case 131:
  VAR_2->value = VAR_1->video_gop_size;
  break;
 case 132:
  VAR_2->value = VAR_1->video_gop_closure;
  break;
 case 136:
  VAR_2->value = VAR_1->video_bitrate_mode;
  break;
 case 137:
  VAR_2->value = VAR_1->video_bitrate;
  break;
 case 135:
  VAR_2->value = VAR_1->video_bitrate_peak;
  break;
 case 128:
  VAR_2->value = VAR_1->video_temporal_decimation;
  break;
 case 130:
  VAR_2->value = VAR_1->video_mute;
  break;
 case 129:
  VAR_2->value = VAR_1->video_mute_yuv;
  break;
 case 140:
  VAR_2->value = VAR_1->stream_type;
  break;
 case 139:
  VAR_2->value = VAR_1->stream_vbi_fmt;
  break;
 case 143:
  VAR_2->value = VAR_1->video_spatial_filter_mode;
  break;
 case 144:
  VAR_2->value = VAR_1->video_spatial_filter;
  break;
 case 146:
  VAR_2->value = VAR_1->video_luma_spatial_filter_type;
  break;
 case 149:
  VAR_2->value = VAR_1->video_chroma_spatial_filter_type;
  break;
 case 141:
  VAR_2->value = VAR_1->video_temporal_filter_mode;
  break;
 case 142:
  VAR_2->value = VAR_1->video_temporal_filter;
  break;
 case 145:
  VAR_2->value = VAR_1->video_median_filter_type;
  break;
 case 147:
  VAR_2->value = VAR_1->video_luma_median_filter_top;
  break;
 case 148:
  VAR_2->value = VAR_1->video_luma_median_filter_bottom;
  break;
 case 150:
  VAR_2->value = VAR_1->video_chroma_median_filter_top;
  break;
 case 151:
  VAR_2->value = VAR_1->video_chroma_median_filter_bottom;
  break;
 case 152:
  VAR_2->value = VAR_1->stream_insert_nav_packets;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
