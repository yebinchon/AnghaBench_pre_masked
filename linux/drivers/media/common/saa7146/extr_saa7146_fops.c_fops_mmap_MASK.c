
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct videobuf_queue {int dummy; } ;
struct video_device {int vfl_type; int lock; } ;
struct saa7146_fh {struct videobuf_queue vbi_q; TYPE_2__* dev; struct videobuf_queue video_q; } ;
struct file {struct saa7146_fh* private_data; } ;
struct TYPE_4__ {TYPE_1__* ext_vv_data; } ;
struct TYPE_3__ {int capabilities; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,struct file*,struct vm_area_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct video_device* FUNC_4 (struct file*) ;
 int FUNC_5 (struct videobuf_queue*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, struct vm_area_struct * VAR_4)
{
 struct video_device *VAR_5 = FUNC_4(VAR_3);
 struct saa7146_fh *VAR_6 = VAR_3->private_data;
 struct videobuf_queue *VAR_7;
 int VAR_8;

 switch (VAR_5->vfl_type) {
 case 129: {
  FUNC_1("V4L2_BUF_TYPE_VIDEO_CAPTURE: file:%p, vma:%p\n",
         VAR_3, VAR_4);
  VAR_7 = &VAR_6->video_q;
  break;
  }
 case 128: {
  FUNC_1("V4L2_BUF_TYPE_VBI_CAPTURE: file:%p, vma:%p\n",
         VAR_3, VAR_4);
  if (VAR_6->dev->ext_vv_data->capabilities & VAR_2)
   return -VAR_0;
  VAR_7 = &VAR_6->vbi_q;
  break;
  }
 default:
  FUNC_0();
 }

 if (FUNC_2(VAR_5->lock))
  return -VAR_1;
 VAR_8 = FUNC_5(VAR_7, VAR_4);
 FUNC_3(VAR_5->lock);
 return VAR_8;
}
