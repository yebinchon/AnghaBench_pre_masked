
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clipcount; int clips; } ;
struct TYPE_5__ {TYPE_1__ win; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct v4l2_clip {int dummy; } ;
struct TYPE_6__ {int nclips; struct saa7146_fh* fh; int clips; TYPE_1__ win; } ;
struct saa7146_vv {TYPE_3__ ov; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*,struct saa7146_dev*,struct saa7146_fh*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct saa7146_fh*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct saa7146_fh*) ;
 int FUNC_4 (struct saa7146_fh*) ;
 int FUNC_5 (struct file*,struct saa7146_fh*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct saa7146_fh *VAR_4 = VAR_2;
 struct saa7146_dev *VAR_5 = VAR_4->dev;
 struct saa7146_vv *VAR_6 = VAR_5->vv_data;
 int VAR_7;

 FUNC_0("V4L2_BUF_TYPE_VIDEO_OVERLAY: dev:%p, fh:%p\n", VAR_5, VAR_4);
 VAR_7 = FUNC_5(VAR_1, VAR_4, VAR_3);
 if (0 != VAR_7)
  return VAR_7;
 VAR_6->ov.win = VAR_3->fmt.win;
 VAR_6->ov.nclips = VAR_3->fmt.win.clipcount;
 if (VAR_6->ov.nclips > 16)
  VAR_6->ov.nclips = 16;
 if (FUNC_2(VAR_6->ov.clips, VAR_3->fmt.win.clips,
    sizeof(struct v4l2_clip) * VAR_6->ov.nclips)) {
  return -VAR_0;
 }


 VAR_6->ov.fh = VAR_4;


 if (FUNC_1(VAR_4) != 0) {
  FUNC_4(VAR_4);
  FUNC_3(VAR_4);
 }
 return 0;
}
