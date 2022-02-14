
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_22__ ;
typedef struct TYPE_26__ TYPE_21__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_11__ ;


struct v4l2_subdev {int ctrl_handler; } ;
struct v4l2_ctrl_ops {int dummy; } ;
struct rtl2832_sdr_platform_data {int tuner; TYPE_3__* dvb_usb_device; int regmap; struct v4l2_subdev* v4l2_subdev; } ;
struct rtl2832_sdr_frame_buf {int dummy; } ;
struct TYPE_23__ {int error; } ;
struct TYPE_32__ {TYPE_11__* ctrl_handler; int release; } ;
struct TYPE_30__ {int vfl_dir; int * lock; TYPE_8__* v4l2_dev; TYPE_7__* queue; } ;
struct TYPE_31__ {int io_modes; int buf_struct_size; int * lock; int timestamp_flags; int * mem_ops; int * ops; struct rtl2832_sdr_dev* drv_priv; int type; } ;
struct rtl2832_sdr_dev {int num_formats; TYPE_11__ hdl; TYPE_8__ v4l2_dev; TYPE_4__ vdev; int v4l2_lock; int vb_queue_lock; TYPE_7__ vb_queue; void* bandwidth_auto; void* bandwidth; int queued_bufs; int queued_bufs_lock; int buffersize; int pixelformat; int f_tuner; int f_adc; int udev; int regmap; struct platform_device* pdev; struct v4l2_subdev* v4l2_subdev; } ;
struct TYPE_33__ {TYPE_2__* parent; struct rtl2832_sdr_platform_data* platform_data; } ;
struct platform_device {TYPE_9__ dev; } ;
struct TYPE_29__ {int udev; } ;
struct TYPE_28__ {TYPE_1__* driver; } ;
struct TYPE_27__ {int rangelow; } ;
struct TYPE_26__ {int rangelow; } ;
struct TYPE_25__ {int owner; } ;
struct TYPE_24__ {int buffersize; int pixelformat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
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
 TYPE_22__* VAR_13 ;
 TYPE_21__* VAR_14 ;
 int FUNC_1 (TYPE_9__*,char*) ;
 int FUNC_2 (TYPE_9__*,char*,...) ;
 int FUNC_3 (TYPE_9__*,char*,...) ;
 int FUNC_4 (TYPE_9__*,char*) ;
 TYPE_16__* VAR_15 ;
 int FUNC_5 (struct rtl2832_sdr_dev*) ;
 struct rtl2832_sdr_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,struct rtl2832_sdr_dev*) ;
 struct v4l2_ctrl_ops VAR_16 ;
 int VAR_17 ;
 TYPE_4__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_11__*,int ,int *,int) ;
 int FUNC_13 (int,void**,int ,int) ;
 int FUNC_14 (TYPE_11__*) ;
 int FUNC_15 (TYPE_11__*,int) ;
 void* FUNC_16 (TYPE_11__*,struct v4l2_ctrl_ops const*,int ,int,int,int,int) ;
 int FUNC_17 (TYPE_9__*,TYPE_8__*) ;
 int FUNC_18 (TYPE_8__*) ;
 int FUNC_19 (TYPE_7__*) ;
 int VAR_21 ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_4__*,int ,int) ;
 int FUNC_22 (TYPE_4__*,struct rtl2832_sdr_dev*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_22)
{
 struct rtl2832_sdr_dev *VAR_23;
 struct rtl2832_sdr_platform_data *VAR_24 = VAR_22->dev.platform_data;
 const struct v4l2_ctrl_ops *VAR_25 = &VAR_16;
 struct v4l2_subdev *VAR_26;
 int VAR_27;

 FUNC_1(&VAR_22->dev, "\n");

 if (!VAR_24) {
  FUNC_2(&VAR_22->dev, "Cannot proceed without platform data\n");
  VAR_27 = -VAR_0;
  goto err;
 }
 if (!VAR_22->dev.parent->driver) {
  FUNC_1(&VAR_22->dev, "No parent device\n");
  VAR_27 = -VAR_0;
  goto err;
 }

 if (!FUNC_11(VAR_22->dev.parent->driver->owner)) {
  FUNC_2(&VAR_22->dev, "Refcount fail");
  VAR_27 = -VAR_0;
  goto err;
 }
 VAR_23 = FUNC_6(sizeof(*VAR_23), VAR_2);
 if (VAR_23 == ((void*)0)) {
  VAR_27 = -VAR_1;
  goto err_module_put;
 }


 VAR_26 = VAR_24->v4l2_subdev;
 VAR_23->v4l2_subdev = VAR_24->v4l2_subdev;
 VAR_23->pdev = VAR_22;
 VAR_23->regmap = VAR_24->regmap;
 VAR_23->udev = VAR_24->dvb_usb_device->udev;
 VAR_23->f_adc = VAR_13[0].rangelow;
 VAR_23->f_tuner = VAR_14[0].rangelow;
 VAR_23->pixelformat = VAR_15[0].pixelformat;
 VAR_23->buffersize = VAR_15[0].buffersize;
 VAR_23->num_formats = VAR_3;
 if (!VAR_17)
  VAR_23->num_formats -= 1;

 FUNC_8(&VAR_23->v4l2_lock);
 FUNC_8(&VAR_23->vb_queue_lock);
 FUNC_10(&VAR_23->queued_bufs_lock);
 FUNC_0(&VAR_23->queued_bufs);


 VAR_23->vb_queue.type = VAR_5;
 VAR_23->vb_queue.io_modes = VAR_8 | VAR_10 | VAR_9;
 VAR_23->vb_queue.drv_priv = VAR_23;
 VAR_23->vb_queue.buf_struct_size = sizeof(struct rtl2832_sdr_frame_buf);
 VAR_23->vb_queue.ops = &VAR_19;
 VAR_23->vb_queue.mem_ops = &VAR_21;
 VAR_23->vb_queue.timestamp_flags = VAR_4;
 VAR_27 = FUNC_19(&VAR_23->vb_queue);
 if (VAR_27) {
  FUNC_2(&VAR_22->dev, "Could not initialize vb2 queue\n");
  goto err_kfree;
 }


 switch (VAR_24->tuner) {
 case 133:
  FUNC_15(&VAR_23->hdl, 9);
  if (VAR_26)
   FUNC_12(&VAR_23->hdl, VAR_26->ctrl_handler,
           ((void*)0), 1);
  break;
 case 129:
 case 128:
  FUNC_15(&VAR_23->hdl, 2);
  VAR_23->bandwidth_auto = FUNC_16(&VAR_23->hdl, VAR_25,
       VAR_7,
       0, 1, 1, 1);
  VAR_23->bandwidth = FUNC_16(&VAR_23->hdl, VAR_25,
         VAR_6,
         0, 8000000, 100000, 0);
  FUNC_13(2, &VAR_23->bandwidth_auto, 0, 0);
  break;
 case 132:
 case 131:
  FUNC_15(&VAR_23->hdl, 2);
  VAR_23->bandwidth_auto = FUNC_16(&VAR_23->hdl, VAR_25,
       VAR_7,
       0, 1, 1, 1);
  VAR_23->bandwidth = FUNC_16(&VAR_23->hdl, VAR_25,
         VAR_6,
         6000000, 8000000, 1000000,
         6000000);
  FUNC_13(2, &VAR_23->bandwidth_auto, 0, 0);
  break;
 case 130:
  FUNC_15(&VAR_23->hdl, 2);
  if (VAR_26)
   FUNC_12(&VAR_23->hdl, VAR_26->ctrl_handler,
           ((void*)0), 1);
  break;
 default:
  FUNC_15(&VAR_23->hdl, 0);
  FUNC_2(&VAR_22->dev, "Unsupported tuner\n");
  goto err_v4l2_ctrl_handler_free;
 }
 if (VAR_23->hdl.error) {
  VAR_27 = VAR_23->hdl.error;
  FUNC_2(&VAR_22->dev, "Could not initialize controls\n");
  goto err_v4l2_ctrl_handler_free;
 }


 VAR_23->vdev = VAR_18;
 VAR_23->vdev.queue = &VAR_23->vb_queue;
 VAR_23->vdev.queue->lock = &VAR_23->vb_queue_lock;
 FUNC_22(&VAR_23->vdev, VAR_23);


 VAR_23->v4l2_dev.release = VAR_20;
 VAR_27 = FUNC_17(&VAR_22->dev, &VAR_23->v4l2_dev);
 if (VAR_27) {
  FUNC_2(&VAR_22->dev, "Failed to register v4l2-device %d\n", VAR_27);
  goto err_v4l2_ctrl_handler_free;
 }

 VAR_23->v4l2_dev.ctrl_handler = &VAR_23->hdl;
 VAR_23->vdev.v4l2_dev = &VAR_23->v4l2_dev;
 VAR_23->vdev.lock = &VAR_23->v4l2_lock;
 VAR_23->vdev.vfl_dir = VAR_11;

 VAR_27 = FUNC_21(&VAR_23->vdev, VAR_12, -1);
 if (VAR_27) {
  FUNC_2(&VAR_22->dev, "Failed to register as video device %d\n",
   VAR_27);
  goto err_v4l2_device_unregister;
 }
 FUNC_3(&VAR_22->dev, "Registered as %s\n",
   FUNC_20(&VAR_23->vdev));
 FUNC_3(&VAR_22->dev, "Realtek RTL2832 SDR attached\n");
 FUNC_4(&VAR_22->dev,
     "SDR API is still slightly experimental and functionality changes may follow\n");
 FUNC_9(VAR_22, VAR_23);
 return 0;
err_v4l2_device_unregister:
 FUNC_18(&VAR_23->v4l2_dev);
err_v4l2_ctrl_handler_free:
 FUNC_14(&VAR_23->hdl);
err_kfree:
 FUNC_5(VAR_23);
err_module_put:
 FUNC_7(VAR_22->dev.parent->driver->owner);
err:
 return VAR_27;
}
