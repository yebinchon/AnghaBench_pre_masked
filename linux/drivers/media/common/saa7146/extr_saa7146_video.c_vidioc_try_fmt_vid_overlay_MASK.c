
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; } ;
struct v4l2_window {int clipcount; int field; TYPE_4__ w; } ;
struct TYPE_5__ {struct v4l2_window win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_6__ {int * base; } ;
struct saa7146_vv {TYPE_3__* standard; int * ov_fmt; TYPE_2__ ov_fb; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_7__ {int h_max_out; int v_max_out; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,struct saa7146_dev*) ;
 int VAR_0 ;

 int VAR_1 ;




__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct saa7146_dev *VAR_5 = ((struct saa7146_fh *)VAR_3)->dev;
 struct saa7146_vv *VAR_6 = VAR_5->vv_data;
 struct v4l2_window *VAR_7 = &VAR_4->fmt.win;
 enum v4l2_field VAR_8;
 int VAR_9, VAR_10;

 FUNC_1("dev:%p\n", VAR_5);

 if (((void*)0) == VAR_6->ov_fb.base) {
  FUNC_0("no fb base set\n");
  return -VAR_0;
 }
 if (((void*)0) == VAR_6->ov_fmt) {
  FUNC_0("no fb fmt set\n");
  return -VAR_0;
 }
 if (VAR_7->w.width < 48 || VAR_7->w.height < 32) {
  FUNC_0("min width/height. (%d,%d)\n",
        VAR_7->w.width, VAR_7->w.height);
  return -VAR_0;
 }
 if (VAR_7->clipcount > 16) {
  FUNC_0("clipcount too big\n");
  return -VAR_0;
 }

 VAR_8 = VAR_7->field;
 VAR_9 = VAR_6->standard->h_max_out;
 VAR_10 = VAR_6->standard->v_max_out;

 if (VAR_1 == VAR_8) {
  VAR_8 = (VAR_7->w.height > VAR_10 / 2)
   ? 129
   : 128;
  }
 switch (VAR_8) {
 case 128:
 case 130:
 case 131:
  VAR_10 = VAR_10 / 2;
  break;
 case 129:
  break;
 default:
  FUNC_0("no known field mode '%d'\n", VAR_8);
  return -VAR_0;
 }

 VAR_7->field = VAR_8;
 if (VAR_7->w.width > VAR_9)
  VAR_7->w.width = VAR_9;
 if (VAR_7->w.height > VAR_10)
  VAR_7->w.height = VAR_10;

 return 0;
}
