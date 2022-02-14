
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_keyspan {int toggle; int in_dma; int in_buffer; TYPE_3__* irq_urb; struct input_dev* input; struct usb_device* udev; int * keymap; int phys; int name; struct usb_endpoint_descriptor* in_endpoint; struct usb_interface* interface; } ;
struct usb_interface {int dev; int cur_altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct usb_device {char* product; TYPE_1__ descriptor; scalar_t__ manufacturer; } ;
struct TYPE_7__ {int * parent; } ;
struct input_dev {int keycodesize; int keycodemax; int close; int open; int keybit; int evbit; int * keycode; TYPE_2__ dev; int id; int phys; int name; } ;
struct TYPE_8__ {int transfer_flags; int transfer_dma; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct input_dev*,struct usb_keyspan*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int VAR_9 ;
 struct usb_endpoint_descriptor* FUNC_9 (int ) ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_keyspan*) ;
 struct usb_keyspan* FUNC_12 (int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int ,int,char*,int,int) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (int ,scalar_t__,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct usb_device*,int ,int ,int *) ;
 TYPE_3__* FUNC_20 (int ,int ) ;
 int FUNC_21 (TYPE_3__*,struct usb_device*,int ,int ,int ,int ,struct usb_keyspan*,int ) ;
 int FUNC_22 (struct usb_device*,int ,int ,int ) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (struct usb_device*,int ,int) ;
 int FUNC_25 (struct usb_device*,int ) ;
 int FUNC_26 (struct usb_interface*,struct usb_keyspan*) ;
 int FUNC_27 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_28(struct usb_interface *VAR_13, const struct usb_device_id *VAR_14)
{
 struct usb_device *VAR_15 = FUNC_8(VAR_13);
 struct usb_endpoint_descriptor *VAR_16;
 struct usb_keyspan *VAR_17;
 struct input_dev *VAR_18;
 int VAR_19, VAR_20;

 VAR_16 = FUNC_9(VAR_13->cur_altsetting);
 if (!VAR_16)
  return -VAR_0;

 VAR_17 = FUNC_12(sizeof(*VAR_17), VAR_4);
 VAR_18 = FUNC_3();
 if (!VAR_17 || !VAR_18) {
  VAR_20 = -VAR_1;
  goto fail1;
 }

 VAR_17->udev = VAR_15;
 VAR_17->input = VAR_18;
 VAR_17->interface = VAR_13;
 VAR_17->in_endpoint = VAR_16;
 VAR_17->toggle = -1;

 VAR_17->in_buffer = FUNC_19(VAR_15, VAR_7, VAR_4, &VAR_17->in_dma);
 if (!VAR_17->in_buffer) {
  VAR_20 = -VAR_1;
  goto fail1;
 }

 VAR_17->irq_urb = FUNC_20(0, VAR_4);
 if (!VAR_17->irq_urb) {
  VAR_20 = -VAR_1;
  goto fail2;
 }

 VAR_20 = FUNC_10(VAR_15);
 if (VAR_20) {
  VAR_20 = -VAR_0;
  goto fail3;
 }

 if (VAR_15->manufacturer)
  FUNC_17(VAR_17->name, VAR_15->manufacturer, sizeof(VAR_17->name));

 if (VAR_15->product) {
  if (VAR_15->manufacturer)
   FUNC_16(VAR_17->name, " ", sizeof(VAR_17->name));
  FUNC_16(VAR_17->name, VAR_15->product, sizeof(VAR_17->name));
 }

 if (!FUNC_18(VAR_17->name))
  FUNC_15(VAR_17->name, sizeof(VAR_17->name),
    "USB Keyspan Remote %04x:%04x",
    FUNC_13(VAR_15->descriptor.idVendor),
    FUNC_13(VAR_15->descriptor.idProduct));

 FUNC_24(VAR_15, VAR_17->phys, sizeof(VAR_17->phys));
 FUNC_16(VAR_17->phys, "/input0", sizeof(VAR_17->phys));
 FUNC_14(VAR_17->keymap, VAR_11, sizeof(VAR_17->keymap));

 VAR_18->name = VAR_17->name;
 VAR_18->phys = VAR_17->phys;
 FUNC_27(VAR_15, &VAR_18->id);
 VAR_18->dev.parent = &VAR_13->dev;
 VAR_18->keycode = VAR_17->keymap;
 VAR_18->keycodesize = sizeof(unsigned short);
 VAR_18->keycodemax = FUNC_0(VAR_17->keymap);

 FUNC_6(VAR_18, VAR_3, VAR_6);
 FUNC_2(VAR_2, VAR_18->evbit);
 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_11); VAR_19++)
  FUNC_2(VAR_11[VAR_19], VAR_18->keybit);
 FUNC_1(VAR_5, VAR_18->keybit);

 FUNC_7(VAR_18, VAR_17);

 VAR_18->open = VAR_12;
 VAR_18->close = VAR_9;





 FUNC_21(VAR_17->irq_urb,
    VAR_17->udev,
    FUNC_25(VAR_17->udev, VAR_16->bEndpointAddress),
    VAR_17->in_buffer, VAR_7, VAR_10, VAR_17,
    VAR_16->bInterval);
 VAR_17->irq_urb->transfer_dma = VAR_17->in_dma;
 VAR_17->irq_urb->transfer_flags |= VAR_8;


 VAR_20 = FUNC_5(VAR_17->input);
 if (VAR_20)
  goto fail3;


 FUNC_26(VAR_13, VAR_17);

 return 0;

 fail3: FUNC_23(VAR_17->irq_urb);
 fail2: FUNC_22(VAR_15, VAR_7, VAR_17->in_buffer, VAR_17->in_dma);
 fail1: FUNC_11(VAR_17);
 FUNC_4(VAR_18);

 return VAR_20;
}
