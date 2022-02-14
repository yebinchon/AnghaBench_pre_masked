
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint ;
struct usb_interface {int dev; struct usb_host_interface* altsetting; } ;
struct TYPE_19__ {int bInterfaceClass; int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_24__ {TYPE_10__* ctrl_handler; int name; } ;
struct TYPE_22__ {TYPE_7__* queue; int * lock; TYPE_8__* v4l2_dev; } ;
struct TYPE_17__ {scalar_t__ error; } ;
struct TYPE_23__ {int * dev; int * lock; struct sur40_state* drv_priv; } ;
struct sur40_state {scalar_t__ bulk_in_epaddr; int vsvideo; struct input_polled_dev* input; struct sur40_state* bulk_in_buffer; TYPE_8__ v4l2; TYPE_4__ vdev; TYPE_10__ hdl; TYPE_7__ queue; int lock; int pix_fmt; int * dev; int bulk_in_size; struct usb_device* usbdev; int phys; int qlock; int buf_list; } ;
struct input_polled_dev {TYPE_16__* input; int close; int poll; int open; int poll_interval; struct sur40_state* private; } ;
struct TYPE_21__ {int * parent; } ;
struct TYPE_20__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_18__ {char* name; TYPE_3__ dev; int phys; int id; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_24 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 int VAR_25 ;
 struct input_polled_dev* FUNC_4 () ;
 int FUNC_5 (struct input_polled_dev*) ;
 int FUNC_6 (struct input_polled_dev*) ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct sur40_state*) ;
 struct sur40_state* FUNC_9 (int ,int ) ;
 struct sur40_state* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int,char*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_15 (TYPE_16__*) ;
 int VAR_28 ;
 int * VAR_29 ;
 int VAR_30 ;
 TYPE_7__ VAR_31 ;
 TYPE_4__ VAR_32 ;
 int FUNC_16 (struct usb_endpoint_descriptor*) ;
 int FUNC_17 (struct usb_device*,int ,int) ;
 int FUNC_18 (struct usb_interface*,struct sur40_state*) ;
 int FUNC_19 (struct usb_device*,int *) ;
 int FUNC_20 (TYPE_10__*) ;
 int FUNC_21 (TYPE_10__*,int) ;
 int FUNC_22 (TYPE_10__*) ;
 int FUNC_23 (TYPE_10__*,int *,int ,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_24 (int *,TYPE_8__*) ;
 int FUNC_25 (TYPE_8__*) ;
 int FUNC_26 (TYPE_7__*) ;
 int FUNC_27 (TYPE_4__*,int ,int) ;
 int FUNC_28 (TYPE_4__*,struct sur40_state*) ;
 int FUNC_29 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_30(struct usb_interface *VAR_33,
         const struct usb_device_id *VAR_34)
{
 struct usb_device *VAR_35 = FUNC_7(VAR_33);
 struct sur40_state *VAR_36;
 struct usb_host_interface *VAR_37;
 struct usb_endpoint_descriptor *VAR_38;
 struct input_polled_dev *VAR_39;
 int VAR_40;


 VAR_37 = &VAR_33->altsetting[0];
 if (VAR_37->desc.bInterfaceClass != 0xFF)
  return -VAR_2;

 if (VAR_37->desc.bNumEndpoints < 5)
  return -VAR_2;


 VAR_38 = &VAR_37->endpoint[4].desc;
 if (VAR_38->bEndpointAddress != VAR_17)
  return -VAR_2;


 VAR_36 = FUNC_10(sizeof(struct sur40_state), VAR_4);
 if (!VAR_36)
  return -VAR_3;

 VAR_39 = FUNC_4();
 if (!VAR_39) {
  VAR_40 = -VAR_3;
  goto err_free_dev;
 }


 FUNC_0(&VAR_36->buf_list);
 FUNC_13(&VAR_36->qlock);
 FUNC_11(&VAR_36->lock);


 VAR_39->private = VAR_36;
 VAR_39->poll_interval = VAR_5;
 VAR_39->open = VAR_28;
 VAR_39->poll = VAR_30;
 VAR_39->close = VAR_26;


 FUNC_15(VAR_39->input);

 VAR_39->input->name = VAR_1;
 FUNC_19(VAR_35, &VAR_39->input->id);
 FUNC_17(VAR_35, VAR_36->phys, sizeof(VAR_36->phys));
 FUNC_14(VAR_36->phys, "/input0", sizeof(VAR_36->phys));
 VAR_39->input->phys = VAR_36->phys;
 VAR_39->input->dev.parent = &VAR_33->dev;

 VAR_36->usbdev = VAR_35;
 VAR_36->dev = &VAR_33->dev;
 VAR_36->input = VAR_39;


 VAR_36->bulk_in_size = FUNC_16(VAR_38);
 VAR_36->bulk_in_epaddr = VAR_38->bEndpointAddress;
 VAR_36->bulk_in_buffer = FUNC_9(VAR_36->bulk_in_size, VAR_4);
 if (!VAR_36->bulk_in_buffer) {
  FUNC_3(&VAR_33->dev, "Unable to allocate input buffer.");
  VAR_40 = -VAR_3;
  goto err_free_polldev;
 }


 VAR_40 = FUNC_6(VAR_39);
 if (VAR_40) {
  FUNC_3(&VAR_33->dev,
   "Unable to register polled input device.");
  goto err_free_buffer;
 }


 FUNC_12(VAR_36->v4l2.name, sizeof(VAR_36->v4l2.name), "%s", VAR_1);
 VAR_40 = FUNC_24(VAR_36->dev, &VAR_36->v4l2);
 if (VAR_40) {
  FUNC_3(&VAR_33->dev,
   "Unable to register video master device.");
  goto err_unreg_v4l2;
 }


 VAR_36->queue = VAR_31;
 VAR_36->queue.drv_priv = VAR_36;
 VAR_36->queue.lock = &VAR_36->lock;
 VAR_36->queue.dev = VAR_36->dev;


 VAR_40 = FUNC_26(&VAR_36->queue);
 if (VAR_40)
  goto err_unreg_v4l2;

 VAR_36->pix_fmt = VAR_29[0];
 VAR_36->vdev = VAR_32;
 VAR_36->vdev.v4l2_dev = &VAR_36->v4l2;
 VAR_36->vdev.lock = &VAR_36->lock;
 VAR_36->vdev.queue = &VAR_36->queue;
 FUNC_28(&VAR_36->vdev, VAR_36);


 FUNC_21(&VAR_36->hdl, 4);
 VAR_36->v4l2.ctrl_handler = &VAR_36->hdl;
 VAR_36->vsvideo = (VAR_11 << 4) | VAR_14;

 FUNC_23(&VAR_36->hdl, &VAR_27, VAR_19,
   VAR_10, VAR_9, 1, FUNC_1(VAR_23,
   (uint)VAR_10, (uint)VAR_9));

 FUNC_23(&VAR_36->hdl, &VAR_27, VAR_20,
   VAR_13, VAR_12, 1, FUNC_1(VAR_24,
   (uint)VAR_13, (uint)VAR_12));

 FUNC_23(&VAR_36->hdl, &VAR_27, VAR_21,
   VAR_16, VAR_15, 1, FUNC_1(VAR_25,
   (uint)VAR_16, (uint)VAR_15));

 FUNC_23(&VAR_36->hdl, &VAR_27,
   VAR_18, VAR_8,
   VAR_7, 1, VAR_6);

 FUNC_22(&VAR_36->hdl);

 if (VAR_36->hdl.error) {
  FUNC_3(&VAR_33->dev,
   "Unable to register video controls.");
  FUNC_20(&VAR_36->hdl);
  goto err_unreg_v4l2;
 }

 VAR_40 = FUNC_27(&VAR_36->vdev, VAR_22, -1);
 if (VAR_40) {
  FUNC_3(&VAR_33->dev,
   "Unable to register video subdevice.");
  goto err_unreg_video;
 }


 FUNC_18(VAR_33, VAR_36);
 FUNC_2(&VAR_33->dev, "%s is now attached\n", VAR_0);

 return 0;

err_unreg_video:
 FUNC_29(&VAR_36->vdev);
err_unreg_v4l2:
 FUNC_25(&VAR_36->v4l2);
err_free_buffer:
 FUNC_8(VAR_36->bulk_in_buffer);
err_free_polldev:
 FUNC_5(VAR_36->input);
err_free_dev:
 FUNC_8(VAR_36);

 return VAR_40;
}
