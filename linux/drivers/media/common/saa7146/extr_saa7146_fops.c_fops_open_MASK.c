
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
struct file {int * private_data; } ;
struct TYPE_10__ {int (* open ) (struct saa7146_dev*,struct file*) ;} ;
struct TYPE_9__ {int (* open ) (struct saa7146_dev*,struct file*) ;} ;
struct TYPE_8__ {int module; } ;
struct TYPE_6__ {int (* open ) (struct file*) ;} ;
struct TYPE_7__ {int capabilities; TYPE_1__ vbi_fops; } ;


 int FUNC_0 (char*,struct saa7146_dev*) ;
 int FUNC_1 (char*,struct file*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct saa7146_fh*) ;
 struct saa7146_fh* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_5__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_7 (struct saa7146_dev*,struct file*) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 (struct saa7146_dev*,struct file*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct video_device*) ;
 struct video_device* FUNC_13 (struct file*) ;
 int FUNC_14 (struct video_device*) ;
 struct saa7146_dev* FUNC_15 (struct file*) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_9)
{
 struct video_device *VAR_10 = FUNC_13(VAR_9);
 struct saa7146_dev *VAR_11 = FUNC_15(VAR_9);
 struct saa7146_fh *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 FUNC_1("file:%p, dev:%s\n", VAR_9, FUNC_14(VAR_10));

 if (FUNC_5(VAR_10->lock))
  return -VAR_3;

 FUNC_0("using: %p\n", VAR_11);


 if( ((void*)0) == VAR_11->ext ) {
  FUNC_2("no extension registered for this device\n");
  VAR_13 = -VAR_1;
  goto out;
 }


 VAR_12 = FUNC_4(sizeof(*VAR_12),VAR_4);
 if (((void*)0) == VAR_12) {
  FUNC_2("cannot allocate memory for per open data\n");
  VAR_13 = -VAR_2;
  goto out;
 }

 FUNC_12(&VAR_12->fh, VAR_10);

 VAR_9->private_data = &VAR_12->fh;
 VAR_12->dev = VAR_11;

 if (VAR_10->vfl_type == VAR_6) {
  FUNC_2("initializing vbi...\n");
  if (VAR_11->ext_vv_data->capabilities & VAR_5)
   VAR_13 = VAR_7.open(VAR_11,VAR_9);
  if (VAR_11->ext_vv_data->vbi_fops.open)
   VAR_11->ext_vv_data->vbi_fops.open(VAR_9);
 } else {
  FUNC_2("initializing video...\n");
  VAR_13 = VAR_8.open(VAR_11,VAR_9);
 }

 if (0 != VAR_13) {
  goto out;
 }

 if( 0 == FUNC_10(VAR_11->ext->module)) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_13 = 0;
 FUNC_11(&VAR_12->fh);
out:
 if (VAR_12 && VAR_13 != 0) {
  FUNC_3(VAR_12);
  VAR_9->private_data = ((void*)0);
 }
 FUNC_6(VAR_10->lock);
 return VAR_13;
}
