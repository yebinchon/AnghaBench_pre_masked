
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_interface {TYPE_4__* cur_altsetting; int dev; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_10__ {int * parent; } ;
struct input_dev {int mscbit; int keybit; int absbit; int evbit; int close; int open; TYPE_2__ dev; int id; int phys; int name; } ;
struct hanwang {int data_dma; int data; TYPE_5__* features; TYPE_6__* irq; struct input_dev* dev; int phys; int name; struct usb_device* usbdev; } ;
struct TYPE_14__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_13__ {int pkg_len; int max_pressure; int max_tilt_y; int max_tilt_x; int max_y; int max_x; int name; } ;
struct TYPE_9__ {int bNumEndpoints; } ;
struct TYPE_12__ {TYPE_3__* endpoint; TYPE_1__ desc; } ;
struct TYPE_11__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_device*,struct hanwang*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ,int ,int,int ) ;
 int FUNC_7 (struct input_dev*,struct hanwang*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct hanwang*) ;
 struct hanwang* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct usb_device*,int ,int ,int *) ;
 TYPE_6__* FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_6__*,struct usb_device*,int ,int ,int ,int ,struct hanwang*,int ) ;
 int FUNC_16 (struct usb_device*,int ,int ,int ) ;
 int FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (struct usb_device*,int ,int) ;
 int FUNC_19 (struct usb_device*,int ) ;
 int FUNC_20 (struct usb_interface*,struct hanwang*) ;
 int FUNC_21 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_22(struct usb_interface *VAR_17, const struct usb_device_id *VAR_18)
{
 struct usb_device *VAR_19 = FUNC_8(VAR_17);
 struct usb_endpoint_descriptor *VAR_20;
 struct hanwang *VAR_21;
 struct input_dev *VAR_22;
 int VAR_23;
 int VAR_24;

 if (VAR_17->cur_altsetting->desc.bNumEndpoints < 1)
  return -VAR_5;

 VAR_21 = FUNC_10(sizeof(struct hanwang), VAR_8);
 VAR_22 = FUNC_3();
 if (!VAR_21 || !VAR_22) {
  VAR_23 = -VAR_6;
  goto fail1;
 }

 if (!FUNC_2(VAR_19, VAR_21)) {
  VAR_23 = -VAR_7;
  goto fail1;
 }

 VAR_21->data = FUNC_13(VAR_19, VAR_21->features->pkg_len,
     VAR_8, &VAR_21->data_dma);
 if (!VAR_21->data) {
  VAR_23 = -VAR_6;
  goto fail1;
 }

 VAR_21->irq = FUNC_14(0, VAR_8);
 if (!VAR_21->irq) {
  VAR_23 = -VAR_6;
  goto fail2;
 }

 VAR_21->usbdev = VAR_19;
 VAR_21->dev = VAR_22;

 FUNC_18(VAR_19, VAR_21->phys, sizeof(VAR_21->phys));
 FUNC_11(VAR_21->phys, "/input0", sizeof(VAR_21->phys));

 FUNC_12(VAR_21->name, VAR_21->features->name, sizeof(VAR_21->name));
 VAR_22->name = VAR_21->name;
 VAR_22->phys = VAR_21->phys;
 FUNC_21(VAR_19, &VAR_22->id);
 VAR_22->dev.parent = &VAR_17->dev;

 FUNC_7(VAR_22, VAR_21);

 VAR_22->open = VAR_12;
 VAR_22->close = VAR_10;

 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_15); ++VAR_24)
  FUNC_1(VAR_15[VAR_24], VAR_22->evbit);

 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_13); ++VAR_24)
  FUNC_1(VAR_13[VAR_24], VAR_22->absbit);

 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_14); ++VAR_24)
  FUNC_1(VAR_14[VAR_24], VAR_22->keybit);

 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_16); ++VAR_24)
  FUNC_1(VAR_16[VAR_24], VAR_22->mscbit);

 FUNC_6(VAR_22, VAR_3,
        0, VAR_21->features->max_x, 4, 0);
 FUNC_6(VAR_22, VAR_4,
        0, VAR_21->features->max_y, 4, 0);
 FUNC_6(VAR_22, VAR_1,
        0, VAR_21->features->max_tilt_x, 0, 0);
 FUNC_6(VAR_22, VAR_2,
        0, VAR_21->features->max_tilt_y, 0, 0);
 FUNC_6(VAR_22, VAR_0,
        0, VAR_21->features->max_pressure, 0, 0);

 VAR_20 = &VAR_17->cur_altsetting->endpoint[0].desc;
 FUNC_15(VAR_21->irq, VAR_19,
   FUNC_19(VAR_19, VAR_20->bEndpointAddress),
   VAR_21->data, VAR_21->features->pkg_len,
   VAR_11, VAR_21, VAR_20->bInterval);
 VAR_21->irq->transfer_dma = VAR_21->data_dma;
 VAR_21->irq->transfer_flags |= VAR_9;

 VAR_23 = FUNC_5(VAR_21->dev);
 if (VAR_23)
  goto fail3;

 FUNC_20(VAR_17, VAR_21);

 return 0;

 fail3: FUNC_17(VAR_21->irq);
 fail2: FUNC_16(VAR_19, VAR_21->features->pkg_len,
   VAR_21->data, VAR_21->data_dma);
 fail1: FUNC_4(VAR_22);
 FUNC_9(VAR_21);
 return VAR_23;

}
