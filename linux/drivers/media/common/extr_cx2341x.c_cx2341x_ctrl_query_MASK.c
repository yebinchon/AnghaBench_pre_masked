
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {int id; int flags; } ;
struct cx2341x_mpeg_params {int capabilities; int audio_encoding; int video_encoding; int video_bitrate_mode; int video_spatial_filter_mode; int video_temporal_filter_mode; int video_median_filter_type; int is_50hz; int audio_mode; } ;
struct TYPE_2__ {int audio_encoding; int audio_l2_bitrate; int audio_ac3_bitrate; int stream_insert_nav_packets; int video_chroma_median_filter_bottom; int video_chroma_median_filter_top; int video_luma_median_filter_bottom; int video_luma_median_filter_top; int video_median_filter_type; int video_temporal_filter; int video_temporal_filter_mode; int video_chroma_spatial_filter_type; int video_luma_spatial_filter_type; int video_spatial_filter; int video_spatial_filter_mode; int stream_vbi_fmt; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_0 (struct v4l2_queryctrl*,int,int,int,int ) ;
 TYPE_1__ VAR_46 ;
 int FUNC_1 (struct v4l2_queryctrl*,int,int,int,int) ;

int FUNC_2(const struct cx2341x_mpeg_params *VAR_47,
         struct v4l2_queryctrl *VAR_48)
{
 int VAR_49;

 switch (VAR_48->id) {
 case 153:
  return FUNC_1(VAR_48, 0, 0, 0, 0);
 case 140:
  return FUNC_1(VAR_48,
    VAR_35,
    VAR_36, 1,
    VAR_35);

 case 139:
  if (VAR_47->capabilities & VAR_1)
   return FUNC_1(VAR_48,
     VAR_38,
     VAR_37, 1,
     VAR_38);
  return FUNC_0(VAR_48,
    VAR_38,
    VAR_38, 1,
    VAR_46.stream_vbi_fmt);

 case 154:
  return FUNC_1(VAR_48,
    VAR_23,
    VAR_22, 1,
    VAR_24);

 case 159:
  if (VAR_47->capabilities & VAR_0) {






   return FUNC_1(VAR_48,
     VAR_14,
     VAR_13, 1,
     VAR_46.audio_encoding);
  }

  return FUNC_1(VAR_48,
    VAR_14,
    VAR_14, 1,
    VAR_46.audio_encoding);

 case 158:
  VAR_49 = FUNC_1(VAR_48,
    VAR_15,
    VAR_16, 1,
    VAR_46.audio_l2_bitrate);
  if (VAR_49)
   return VAR_49;
  if (VAR_47->capabilities & VAR_0 &&
      VAR_47->audio_encoding != VAR_14)
   VAR_48->flags |= VAR_4;
  return 0;

 case 157:
  return FUNC_1(VAR_48,
    VAR_21,
    VAR_20, 1,
    VAR_21);

 case 156:
  VAR_49 = FUNC_1(VAR_48,
    VAR_18,
    VAR_17, 1,
    VAR_18);
  if (VAR_49 == 0 &&
      VAR_47->audio_mode != VAR_19)
   VAR_48->flags |= VAR_4;
  return VAR_49;

 case 160:
  return FUNC_1(VAR_48,
    VAR_12,
    VAR_11, 1,
    VAR_12);

 case 161:
  return FUNC_1(VAR_48,
    VAR_10,
    VAR_9, 1,
    VAR_10);

 case 155:
  return FUNC_1(VAR_48, 0, 1, 1, 0);

 case 162:
  VAR_49 = FUNC_1(VAR_48,
    VAR_8,
    VAR_7, 1,
    VAR_46.audio_ac3_bitrate);
  if (VAR_49)
   return VAR_49;
  if (VAR_47->capabilities & VAR_0) {
   if (VAR_47->audio_encoding !=
         VAR_13)
    VAR_48->flags |= VAR_4;
  } else
   VAR_48->flags |= VAR_3;
  return 0;

 case 133:



  VAR_49 = FUNC_1(VAR_48,
        VAR_44,
        VAR_45, 1,
        VAR_45);
  if (VAR_49 == 0)
   VAR_48->flags |= VAR_5;
  return VAR_49;

 case 138:
  return FUNC_1(VAR_48,
    VAR_39,
    VAR_40, 1,
    VAR_41);

 case 134:
  return FUNC_1(VAR_48, 0, 33, 1, 2);

 case 131:
  return FUNC_1(VAR_48, 1, 34, 1,
    VAR_47->is_50hz ? 12 : 15);

 case 132:
  return FUNC_1(VAR_48, 0, 1, 1, 1);

 case 136:
  VAR_49 = FUNC_1(VAR_48,
    VAR_43,
    VAR_42, 1,
    VAR_43);
  if (VAR_49 == 0 &&
      VAR_47->video_encoding == VAR_44)
   VAR_48->flags |= VAR_4;
  return VAR_49;

 case 137:
  return FUNC_1(VAR_48, 0, 27000000, 1, 6000000);

 case 135:
  VAR_49 = FUNC_1(VAR_48, 0, 27000000, 1, 8000000);
  if (VAR_49 == 0 &&
      VAR_47->video_bitrate_mode ==
    VAR_42)
   VAR_48->flags |= VAR_4;
  return VAR_49;

 case 128:
  return FUNC_1(VAR_48, 0, 255, 1, 0);

 case 130:
  return FUNC_1(VAR_48, 0, 1, 1, 0);

 case 129:
  return FUNC_1(VAR_48, 0, 0xffffff, 1, 0x008080);


 case 143:
  return FUNC_0(VAR_48,
   VAR_32,
   VAR_31, 1,
   VAR_46.video_spatial_filter_mode);

 case 144:
  FUNC_0(VAR_48, 0, 15, 1,
    VAR_46.video_spatial_filter);
  VAR_48->flags |= VAR_6;
  if (VAR_47->video_spatial_filter_mode ==
       VAR_31)
   VAR_48->flags |= VAR_4;
  return 0;

 case 146:
  FUNC_0(VAR_48,
   VAR_28,
   VAR_27,
   1,
   VAR_46.video_luma_spatial_filter_type);
  if (VAR_47->video_spatial_filter_mode ==
       VAR_31)
   VAR_48->flags |= VAR_4;
  return 0;

 case 149:
  FUNC_0(VAR_48,
      VAR_26,
      VAR_25,
      1,
      VAR_46.video_chroma_spatial_filter_type);
  if (VAR_47->video_spatial_filter_mode ==
   VAR_31)
   VAR_48->flags |= VAR_4;
  return 0;

 case 141:
  return FUNC_0(VAR_48,
   VAR_34,
   VAR_33, 1,
   VAR_46.video_temporal_filter_mode);

 case 142:
  FUNC_0(VAR_48, 0, 31, 1,
    VAR_46.video_temporal_filter);
  VAR_48->flags |= VAR_6;
  if (VAR_47->video_temporal_filter_mode ==
   VAR_33)
   VAR_48->flags |= VAR_4;
  return 0;

 case 145:
  return FUNC_0(VAR_48,
   VAR_30,
   VAR_29, 1,
   VAR_46.video_median_filter_type);

 case 147:
  FUNC_0(VAR_48, 0, 255, 1,
    VAR_46.video_luma_median_filter_top);
  VAR_48->flags |= VAR_6;
  if (VAR_47->video_median_filter_type ==
    VAR_30)
   VAR_48->flags |= VAR_4;
  return 0;

 case 148:
  FUNC_0(VAR_48, 0, 255, 1,
    VAR_46.video_luma_median_filter_bottom);
  VAR_48->flags |= VAR_6;
  if (VAR_47->video_median_filter_type ==
    VAR_30)
   VAR_48->flags |= VAR_4;
  return 0;

 case 150:
  FUNC_0(VAR_48, 0, 255, 1,
    VAR_46.video_chroma_median_filter_top);
  VAR_48->flags |= VAR_6;
  if (VAR_47->video_median_filter_type ==
    VAR_30)
   VAR_48->flags |= VAR_4;
  return 0;

 case 151:
  FUNC_0(VAR_48, 0, 255, 1,
   VAR_46.video_chroma_median_filter_bottom);
  VAR_48->flags |= VAR_6;
  if (VAR_47->video_median_filter_type ==
    VAR_30)
   VAR_48->flags |= VAR_4;
  return 0;

 case 152:
  return FUNC_0(VAR_48, 0, 1, 1,
    VAR_46.stream_insert_nav_packets);

 default:
  return -VAR_2;

 }
}
