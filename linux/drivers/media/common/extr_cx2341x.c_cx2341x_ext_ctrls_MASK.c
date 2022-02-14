
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {scalar_t__ type; int id; } ;
struct v4l2_ext_controls {int count; int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int id; } ;
struct cx2341x_mpeg_params {scalar_t__ video_bitrate_mode; scalar_t__ video_bitrate_peak; scalar_t__ video_bitrate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct cx2341x_mpeg_params*) ;
 char** FUNC_1 (struct cx2341x_mpeg_params*,int ) ;
 int FUNC_2 (struct cx2341x_mpeg_params*,struct v4l2_queryctrl*) ;
 int FUNC_3 (struct cx2341x_mpeg_params*,struct v4l2_ext_control*) ;
 int FUNC_4 (struct cx2341x_mpeg_params*,int,struct v4l2_ext_control*) ;
 int FUNC_5 (struct v4l2_ext_control*,struct v4l2_queryctrl*,char const* const*) ;

int FUNC_6(struct cx2341x_mpeg_params *VAR_4, int VAR_5,
    struct v4l2_ext_controls *VAR_6, unsigned int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_7 == VAR_3) {
  for (VAR_9 = 0; VAR_9 < VAR_6->count; VAR_9++) {
   struct v4l2_ext_control *VAR_10 = VAR_6->controls + VAR_9;

   VAR_8 = FUNC_3(VAR_4, VAR_10);
   if (VAR_8) {
    VAR_6->error_idx = VAR_9;
    break;
   }
  }
  return VAR_8;
 }
 for (VAR_9 = 0; VAR_9 < VAR_6->count; VAR_9++) {
  struct v4l2_ext_control *VAR_11 = VAR_6->controls + VAR_9;
  struct v4l2_queryctrl VAR_12;
  const char * const *VAR_13 = ((void*)0);

  VAR_12.id = VAR_11->id;
  VAR_8 = FUNC_2(VAR_4, &VAR_12);
  if (VAR_8)
   break;
  if (VAR_12.type == VAR_1)
   VAR_13 = FUNC_1(VAR_4, VAR_12.id);
  VAR_8 = FUNC_5(VAR_11, &VAR_12, VAR_13);
  if (VAR_8)
   break;
  VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_11);
  if (VAR_8)
   break;
 }
 if (VAR_8 == 0 &&
     VAR_4->video_bitrate_mode == VAR_2 &&
     VAR_4->video_bitrate_peak < VAR_4->video_bitrate) {
  VAR_8 = -VAR_0;
  VAR_6->error_idx = VAR_6->count;
 }
 if (VAR_8)
  VAR_6->error_idx = VAR_9;
 else
  FUNC_0(VAR_4);
 return VAR_8;
}
