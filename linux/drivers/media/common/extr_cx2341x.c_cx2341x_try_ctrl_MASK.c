
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_ctrl {int id; int val; } ;
struct cx2341x_handler {TYPE_6__* video_bitrate; TYPE_5__* video_bitrate_peak; TYPE_4__* video_bitrate_mode; TYPE_3__* video_encoding; TYPE_2__* stream_type; TYPE_1__* video_gop_size; } ;
typedef int s32 ;
struct TYPE_12__ {int val; } ;
struct TYPE_11__ {int val; } ;
struct TYPE_10__ {int val; } ;
struct TYPE_9__ {int val; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_7__ {int val; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cx2341x_handler* FUNC_0 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_ctrl *VAR_6)
{
 struct cx2341x_handler *VAR_7 = FUNC_0(VAR_6);
 s32 VAR_8 = VAR_6->val;

 switch (VAR_6->id) {
 case 128: {

  int VAR_9 = VAR_8 + 1;
  int VAR_10 = VAR_7->video_gop_size->val;

  VAR_10 = VAR_9 * ((VAR_10 + VAR_9 - 1) / VAR_9);


  while (VAR_10 > 34)
   VAR_10 -= VAR_9;
  VAR_7->video_gop_size->val = VAR_10;
  break;
 }

 case 129:

  VAR_7->video_encoding->val =
      (VAR_7->stream_type->val == VAR_0 ||
       VAR_7->stream_type->val == VAR_1) ?
   VAR_4 :
   VAR_5;
  if (VAR_7->video_encoding->val == VAR_4)

   VAR_7->video_bitrate_mode->val =
    VAR_2;

  if (VAR_7->video_bitrate_mode->val == VAR_3 &&
      VAR_7->video_bitrate_peak->val < VAR_7->video_bitrate->val)
   VAR_7->video_bitrate_peak->val = VAR_7->video_bitrate->val;
  break;
 }
 return 0;
}
