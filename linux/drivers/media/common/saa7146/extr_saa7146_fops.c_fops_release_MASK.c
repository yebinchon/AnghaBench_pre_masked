
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct video_device {scalar_t__ vfl_type; int lock; } ;
struct saa7146_fh {int fh; struct saa7146_dev* dev; } ;
struct saa7146_dev {TYPE_3__* ext; TYPE_2__* ext_vv_data; } ;
struct file {struct saa7146_fh* private_data; } ;
struct TYPE_10__ {int (* release ) (struct saa7146_dev*,struct file*) ;} ;
struct TYPE_9__ {int (* release ) (struct saa7146_dev*,struct file*) ;} ;
struct TYPE_8__ {int module; } ;
struct TYPE_6__ {int (* release ) (struct file*) ;} ;
struct TYPE_7__ {int capabilities; TYPE_1__ vbi_fops; } ;


 int FUNC_0 (char*,struct file*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct saa7146_fh*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_5 (struct saa7146_dev*,struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct saa7146_dev*,struct file*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct video_device* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_4)
{
 struct video_device *VAR_5 = FUNC_10(VAR_4);
 struct saa7146_fh *VAR_6 = VAR_4->private_data;
 struct saa7146_dev *VAR_7 = VAR_6->dev;

 FUNC_0("file:%p\n", VAR_4);

 FUNC_3(VAR_5->lock);

 if (VAR_5->vfl_type == VAR_1) {
  if (VAR_7->ext_vv_data->capabilities & VAR_0)
   VAR_2.release(VAR_7,VAR_4);
  if (VAR_7->ext_vv_data->vbi_fops.release)
   VAR_7->ext_vv_data->vbi_fops.release(VAR_4);
 } else {
  VAR_3.release(VAR_7,VAR_4);
 }

 FUNC_8(&VAR_6->fh);
 FUNC_9(&VAR_6->fh);
 FUNC_2(VAR_7->ext->module);
 VAR_4->private_data = ((void*)0);
 FUNC_1(VAR_6);

 FUNC_4(VAR_5->lock);

 return 0;
}
