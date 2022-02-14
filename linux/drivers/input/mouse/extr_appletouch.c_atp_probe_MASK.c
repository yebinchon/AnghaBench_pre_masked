
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_7__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int dummy; } ;
struct TYPE_9__ {int * parent; } ;
struct input_dev {char* name; int keybit; int evbit; int close; int open; TYPE_3__ dev; int id; int phys; } ;
struct atp_info {int xsensors; int xfact; int ysensors; int yfact; int datalen; int fuzz; int callback; } ;
struct atp {int overflow_warned; TYPE_4__* urb; int data; struct atp_info const* info; struct usb_device* udev; int work; struct input_dev* input; int phys; struct usb_interface* intf; } ;
struct TYPE_10__ {int transfer_dma; } ;
struct TYPE_8__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (int *,int ) ;
 int VAR_14 ;
 int FUNC_1 (struct atp*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *,char*) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_7 (struct input_dev*,struct atp*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct atp*) ;
 struct atp* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (struct usb_device*,int ,int ,int *) ;
 TYPE_4__* FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (struct usb_endpoint_descriptor*) ;
 int FUNC_16 (TYPE_4__*,struct usb_device*,int ,int ,int ,int ,struct atp*,int) ;
 int FUNC_17 (struct usb_device*,int ,int ,int ) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (struct usb_device*,int ,int) ;
 int FUNC_20 (struct usb_device*,int) ;
 int FUNC_21 (struct usb_interface*,struct atp*) ;
 int FUNC_22 (struct usb_device*,int *) ;

__attribute__((used)) static int FUNC_23(struct usb_interface *VAR_17,
       const struct usb_device_id *VAR_18)
{
 struct atp *VAR_19;
 struct input_dev *VAR_20;
 struct usb_device *VAR_21 = FUNC_8(VAR_17);
 struct usb_host_interface *VAR_22;
 struct usb_endpoint_descriptor *VAR_23;
 int VAR_24 = 0;
 int VAR_25, VAR_26 = -VAR_10;
 const struct atp_info *VAR_27 = (const struct atp_info *)VAR_18->driver_info;



 VAR_22 = VAR_17->cur_altsetting;
 for (VAR_25 = 0; VAR_25 < VAR_22->desc.bNumEndpoints; VAR_25++) {
  VAR_23 = &VAR_22->endpoint[VAR_25].desc;
  if (!VAR_24 && FUNC_15(VAR_23)) {

   VAR_24 = VAR_23->bEndpointAddress;
   break;
  }
 }
 if (!VAR_24) {
  FUNC_2(&VAR_17->dev, "Could not find int-in endpoint\n");
  return -VAR_9;
 }


 VAR_19 = FUNC_10(sizeof(struct atp), VAR_13);
 VAR_20 = FUNC_3();
 if (!VAR_19 || !VAR_20) {
  FUNC_2(&VAR_17->dev, "Out of memory\n");
  goto err_free_devs;
 }

 VAR_19->udev = VAR_21;
 VAR_19->intf = VAR_17;
 VAR_19->input = VAR_20;
 VAR_19->info = VAR_27;
 VAR_19->overflow_warned = 0;

 VAR_19->urb = FUNC_14(0, VAR_13);
 if (!VAR_19->urb)
  goto err_free_devs;

 VAR_19->data = FUNC_13(VAR_19->udev, VAR_19->info->datalen, VAR_13,
           &VAR_19->urb->transfer_dma);
 if (!VAR_19->data)
  goto err_free_urb;

 FUNC_16(VAR_19->urb, VAR_21,
    FUNC_20(VAR_21, VAR_24),
    VAR_19->data, VAR_19->info->datalen,
    VAR_19->info->callback, VAR_19, 1);

 VAR_26 = FUNC_1(VAR_19);
 if (VAR_26)
  goto err_free_buffer;

 FUNC_19(VAR_21, VAR_19->phys, sizeof(VAR_19->phys));
 FUNC_12(VAR_19->phys, "/input0", sizeof(VAR_19->phys));

 VAR_20->name = "appletouch";
 VAR_20->phys = VAR_19->phys;
 FUNC_22(VAR_19->udev, &VAR_20->id);
 VAR_20->dev.parent = &VAR_17->dev;

 FUNC_7(VAR_20, VAR_19);

 VAR_20->open = VAR_15;
 VAR_20->close = VAR_14;

 FUNC_11(VAR_11, VAR_20->evbit);

 FUNC_6(VAR_20, VAR_1, 0,
        (VAR_19->info->xsensors - 1) * VAR_19->info->xfact - 1,
        VAR_19->info->fuzz, 0);
 FUNC_6(VAR_20, VAR_2, 0,
        (VAR_19->info->ysensors - 1) * VAR_19->info->yfact - 1,
        VAR_19->info->fuzz, 0);
 FUNC_6(VAR_20, VAR_0, 0, VAR_3, 0, 0);

 FUNC_11(VAR_12, VAR_20->evbit);
 FUNC_11(VAR_8, VAR_20->keybit);
 FUNC_11(VAR_6, VAR_20->keybit);
 FUNC_11(VAR_5, VAR_20->keybit);
 FUNC_11(VAR_7, VAR_20->keybit);
 FUNC_11(VAR_4, VAR_20->keybit);

 VAR_26 = FUNC_5(VAR_19->input);
 if (VAR_26)
  goto err_free_buffer;


 FUNC_21(VAR_17, VAR_19);

 FUNC_0(&VAR_19->work, VAR_16);

 return 0;

 err_free_buffer:
 FUNC_17(VAR_19->udev, VAR_19->info->datalen,
     VAR_19->data, VAR_19->urb->transfer_dma);
 err_free_urb:
 FUNC_18(VAR_19->urb);
 err_free_devs:
 FUNC_21(VAR_17, ((void*)0));
 FUNC_9(VAR_19);
 FUNC_4(VAR_20);
 return VAR_26;
}
