
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct kbtab {int data_dma; int data; TYPE_5__* irq; struct input_dev* dev; int phys; struct usb_interface* intf; } ;
struct TYPE_11__ {int * parent; } ;
struct input_dev {char* name; int* evbit; int* keybit; int close; int open; TYPE_4__ dev; int id; int phys; } ;
struct TYPE_12__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_8__ {int bNumEndpoints; } ;
struct TYPE_10__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_9__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
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
 int VAR_13 ;
 struct input_dev* FUNC_2 () ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ,int,int,int ) ;
 int FUNC_6 (struct input_dev*,struct kbtab*) ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (struct kbtab*) ;
 struct kbtab* FUNC_9 (int,int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (struct usb_device*,int,int ,int *) ;
 TYPE_5__* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct usb_endpoint_descriptor*) ;
 int FUNC_14 (TYPE_5__*,struct usb_device*,int ,int ,int,int ,struct kbtab*,int ) ;
 int FUNC_15 (struct usb_device*,int,int ,int ) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (struct usb_device*,int ,int) ;
 int FUNC_18 (struct usb_device*,int ) ;
 int FUNC_19 (struct usb_interface*,struct kbtab*) ;
 int FUNC_20 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_21(struct usb_interface *VAR_17, const struct usb_device_id *VAR_18)
{
 struct usb_device *VAR_19 = FUNC_7(VAR_17);
 struct usb_endpoint_descriptor *VAR_20;
 struct kbtab *VAR_21;
 struct input_dev *VAR_22;
 int VAR_23 = -VAR_9;

 if (VAR_17->cur_altsetting->desc.bNumEndpoints < 1)
  return -VAR_8;

 VAR_20 = &VAR_17->cur_altsetting->endpoint[0].desc;
 if (!FUNC_13(VAR_20))
  return -VAR_8;

 VAR_21 = FUNC_9(sizeof(struct kbtab), VAR_12);
 VAR_22 = FUNC_2();
 if (!VAR_21 || !VAR_22)
  goto fail1;

 VAR_21->data = FUNC_11(VAR_19, 8, VAR_12, &VAR_21->data_dma);
 if (!VAR_21->data)
  goto fail1;

 VAR_21->irq = FUNC_12(0, VAR_12);
 if (!VAR_21->irq)
  goto fail2;

 VAR_21->intf = VAR_17;
 VAR_21->dev = VAR_22;

 FUNC_17(VAR_19, VAR_21->phys, sizeof(VAR_21->phys));
 FUNC_10(VAR_21->phys, "/input0", sizeof(VAR_21->phys));

 VAR_22->name = "KB Gear Tablet";
 VAR_22->phys = VAR_21->phys;
 FUNC_20(VAR_19, &VAR_22->id);
 VAR_22->dev.parent = &VAR_17->dev;

 FUNC_6(VAR_22, VAR_21);

 VAR_22->open = VAR_16;
 VAR_22->close = VAR_14;

 VAR_22->evbit[0] |= FUNC_0(VAR_11) | FUNC_0(VAR_10);
 VAR_22->keybit[FUNC_1(VAR_4)] |=
  FUNC_0(VAR_4) | FUNC_0(VAR_5);
 VAR_22->keybit[FUNC_1(VAR_3)] |=
  FUNC_0(VAR_6) | FUNC_0(VAR_7);
 FUNC_5(VAR_22, VAR_1, 0, 0x2000, 4, 0);
 FUNC_5(VAR_22, VAR_2, 0, 0x1750, 4, 0);
 FUNC_5(VAR_22, VAR_0, 0, 0xff, 0, 0);

 FUNC_14(VAR_21->irq, VAR_19,
    FUNC_18(VAR_19, VAR_20->bEndpointAddress),
    VAR_21->data, 8,
    VAR_15, VAR_21, VAR_20->bInterval);
 VAR_21->irq->transfer_dma = VAR_21->data_dma;
 VAR_21->irq->transfer_flags |= VAR_13;

 VAR_23 = FUNC_4(VAR_21->dev);
 if (VAR_23)
  goto fail3;

 FUNC_19(VAR_17, VAR_21);

 return 0;

 fail3: FUNC_16(VAR_21->irq);
 fail2: FUNC_15(VAR_19, 8, VAR_21->data, VAR_21->data_dma);
 fail1: FUNC_3(VAR_22);
 FUNC_8(VAR_21);
 return VAR_23;
}
