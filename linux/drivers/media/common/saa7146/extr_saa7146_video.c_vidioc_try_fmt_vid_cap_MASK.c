
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int field; int height; int width; int bytesperline; int sizeimage; int colorspace; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct saa7146_vv {int last_field; TYPE_1__* standard; } ;
struct saa7146_format {int depth; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_4__ {int h_max_out; int v_max_out; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,struct saa7146_dev*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;



 struct saa7146_format* FUNC_2 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, struct v4l2_format *VAR_6)
{
 struct saa7146_dev *VAR_7 = ((struct saa7146_fh *)VAR_5)->dev;
 struct saa7146_vv *VAR_8 = VAR_7->vv_data;
 struct saa7146_format *VAR_9;
 enum v4l2_field VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;

 FUNC_1("V4L2_BUF_TYPE_VIDEO_CAPTURE: dev:%p, fh:%p\n", VAR_7, VAR_5);

 VAR_9 = FUNC_2(VAR_7, VAR_6->fmt.pix.pixelformat);
 if (((void*)0) == VAR_9)
  return -VAR_0;

 VAR_10 = VAR_6->fmt.pix.field;
 VAR_11 = VAR_8->standard->h_max_out;
 VAR_12 = VAR_8->standard->v_max_out;

 if (VAR_3 == VAR_10) {
  VAR_10 = (VAR_6->fmt.pix.height > VAR_12 / 2)
   ? 129
   : 130;
 }
 switch (VAR_10) {
 case 131:
  VAR_8->last_field = 128;
  VAR_12 = VAR_12 / 2;
  break;
 case 128:
 case 130:
  VAR_8->last_field = 129;
  VAR_12 = VAR_12 / 2;
  break;
 case 129:
  VAR_8->last_field = 129;
  break;
 default:
  FUNC_0("no known field mode '%d'\n", VAR_10);
  return -VAR_0;
 }

 VAR_6->fmt.pix.field = VAR_10;
 VAR_6->fmt.pix.colorspace = VAR_2;
 if (VAR_6->fmt.pix.width > VAR_11)
  VAR_6->fmt.pix.width = VAR_11;
 if (VAR_6->fmt.pix.height > VAR_12)
  VAR_6->fmt.pix.height = VAR_12;

 VAR_13 = (VAR_6->fmt.pix.width * VAR_9->depth) / 8;

 if (VAR_6->fmt.pix.bytesperline < VAR_13)
  VAR_6->fmt.pix.bytesperline = VAR_13;

 if (VAR_6->fmt.pix.bytesperline > (2 * VAR_1 * VAR_9->depth) / 8)
  VAR_6->fmt.pix.bytesperline = VAR_13;

 VAR_6->fmt.pix.sizeimage = VAR_6->fmt.pix.bytesperline * VAR_6->fmt.pix.height;
 FUNC_0("w:%d, h:%d, bytesperline:%d, sizeimage:%d\n",
       VAR_6->fmt.pix.width, VAR_6->fmt.pix.height,
       VAR_6->fmt.pix.bytesperline, VAR_6->fmt.pix.sizeimage);

 return 0;
}
