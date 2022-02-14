
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int device_caps; int name; int tvnorms; int * v4l2_dev; int * lock; int release; int * ioctl_ops; int * fops; } ;
struct saa7146_dev {int name; TYPE_2__* ext_vv_data; int v4l2_dev; int v4l2_lock; } ;
struct TYPE_4__ {int num_stds; int capabilities; TYPE_1__* stds; int vbi_ops; int vid_ops; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (char*,struct saa7146_dev*,char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct video_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct video_device*,int,int) ;
 int FUNC_6 (struct video_device*,struct saa7146_dev*) ;

int FUNC_7(struct video_device *VAR_10, struct saa7146_dev *VAR_11,
       char *VAR_12, int VAR_13)
{
 int VAR_14;
 int VAR_15;

 FUNC_0("dev:%p, name:'%s', type:%d\n", VAR_11, VAR_12, VAR_13);

 VAR_10->fops = &VAR_9;
 if (VAR_13 == VAR_7)
  VAR_10->ioctl_ops = &VAR_11->ext_vv_data->vid_ops;
 else
  VAR_10->ioctl_ops = &VAR_11->ext_vv_data->vbi_ops;
 VAR_10->release = VAR_8;
 VAR_10->lock = &VAR_11->v4l2_lock;
 VAR_10->v4l2_dev = &VAR_11->v4l2_dev;
 VAR_10->tvnorms = 0;
 for (VAR_15 = 0; VAR_15 < VAR_11->ext_vv_data->num_stds; VAR_15++)
  VAR_10->tvnorms |= VAR_11->ext_vv_data->stds[VAR_15].id;
 FUNC_3(VAR_10->name, VAR_12, sizeof(VAR_10->name));
 VAR_10->device_caps = VAR_5 | VAR_6 |
      VAR_1 | VAR_3;
 VAR_10->device_caps |= VAR_11->ext_vv_data->capabilities;
 if (VAR_13 == VAR_7)
  VAR_10->device_caps &=
   ~(VAR_4 | VAR_2);
 else
  VAR_10->device_caps &=
   ~(VAR_5 | VAR_6 | VAR_0);
 FUNC_6(VAR_10, VAR_11);

 VAR_14 = FUNC_5(VAR_10, VAR_13, -1);
 if (VAR_14 < 0) {
  FUNC_1("cannot register v4l2 device. skipping.\n");
  return VAR_14;
 }

 FUNC_2("%s: registered device %s [v4l2]\n",
  VAR_11->name, FUNC_4(VAR_10));
 return 0;
}
