
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct usbhid_device {unsigned int bufsize; TYPE_4__* urbctrl; TYPE_4__* urbout; TYPE_4__* urbin; TYPE_7__* intf; int iofl; int ctrlbuf_dma; int ctrlbuf; scalar_t__ cr; int outbuf_dma; int outbuf; int inbuf_dma; int inbuf; } ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_12__ {unsigned int bNumEndpoints; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; } ;
struct usb_host_interface {TYPE_3__ desc; TYPE_1__* endpoint; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device {scalar_t__ speed; int dev; } ;
struct TYPE_15__ {int parent; } ;
struct hid_device {int quirks; TYPE_9__ dev; TYPE_2__* collection; int name; struct usbhid_device* driver_data; } ;
struct TYPE_14__ {int needs_remote_wakeup; } ;
struct TYPE_13__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_11__ {int usage; } ;
struct TYPE_10__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_9__*,char*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct usb_device*,struct hid_device*) ;
 int VAR_16 ;
 int FUNC_5 (struct hid_device*,int ,unsigned int*) ;
 int FUNC_6 (struct usb_device*,struct hid_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (struct hid_device*) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (char*,int ,int,int) ;
 int FUNC_10 (int ,int *) ;
 struct usb_interface* FUNC_11 (int ) ;
 void* FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_7__*) ;
 scalar_t__ FUNC_15 (struct usb_endpoint_descriptor*) ;
 int FUNC_16 (struct usb_endpoint_descriptor*) ;
 int FUNC_17 (TYPE_4__*,struct usb_device*,int ,void*,int ,int,int ,struct hid_device*) ;
 int FUNC_18 (TYPE_4__*,struct usb_device*,int,int ,unsigned int,int ,struct hid_device*,int) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (struct usb_device*,int ) ;
 int FUNC_21 (struct usb_device*,int ) ;
 int FUNC_22 (struct hid_device*) ;

__attribute__((used)) static int FUNC_23(struct hid_device *VAR_22)
{
 struct usb_interface *VAR_23 = FUNC_11(VAR_22->dev.parent);
 struct usb_host_interface *VAR_24 = VAR_23->cur_altsetting;
 struct usb_device *VAR_25 = FUNC_8(VAR_23);
 struct usbhid_device *VAR_26 = VAR_22->driver_data;
 unsigned int VAR_27, VAR_28 = 0;
 int VAR_29;

 FUNC_0(VAR_2, &VAR_26->iofl);

 VAR_26->bufsize = VAR_7;
 FUNC_5(VAR_22, VAR_4, &VAR_26->bufsize);
 FUNC_5(VAR_22, VAR_8, &VAR_26->bufsize);
 FUNC_5(VAR_22, VAR_3, &VAR_26->bufsize);

 if (VAR_26->bufsize > VAR_6)
  VAR_26->bufsize = VAR_6;

 FUNC_5(VAR_22, VAR_4, &VAR_28);

 if (VAR_28 > VAR_6)
  VAR_28 = VAR_6;

 if (FUNC_4(VAR_25, VAR_22)) {
  VAR_29 = -VAR_0;
  goto fail;
 }

 for (VAR_27 = 0; VAR_27 < VAR_24->desc.bNumEndpoints; VAR_27++) {
  struct usb_endpoint_descriptor *VAR_30;
  int VAR_31;
  int VAR_32;

  VAR_30 = &VAR_24->endpoint[VAR_27].desc;
  if (!FUNC_16(VAR_30))
   continue;

  VAR_32 = VAR_30->bInterval;


  if (VAR_22->quirks & VAR_10 &&
      VAR_25->speed == VAR_15) {
   VAR_32 = FUNC_3(VAR_30->bInterval*8);
   FUNC_9("%s: Fixing fullspeed to highspeed interval: %d -> %d\n",
    VAR_22->name, VAR_30->bInterval, VAR_32);
  }




  switch (VAR_22->collection->usage) {
  case 128:
   if (VAR_21 > 0)
    VAR_32 = VAR_21;
   break;
  case 130:
   if (VAR_19 > 0)
    VAR_32 = VAR_19;
   break;
  case 129:
   if (VAR_20 > 0)
    VAR_32 = VAR_20;
   break;
  }

  VAR_29 = -VAR_0;
  if (FUNC_15(VAR_30)) {
   if (VAR_26->urbin)
    continue;
   if (!(VAR_26->urbin = FUNC_12(0, VAR_1)))
    goto fail;
   VAR_31 = FUNC_20(VAR_25, VAR_30->bEndpointAddress);
   FUNC_18(VAR_26->urbin, VAR_25, VAR_31, VAR_26->inbuf, VAR_28,
      VAR_17, VAR_22, VAR_32);
   VAR_26->urbin->transfer_dma = VAR_26->inbuf_dma;
   VAR_26->urbin->transfer_flags |= VAR_12;
  } else {
   if (VAR_26->urbout)
    continue;
   if (!(VAR_26->urbout = FUNC_12(0, VAR_1)))
    goto fail;
   VAR_31 = FUNC_21(VAR_25, VAR_30->bEndpointAddress);
   FUNC_18(VAR_26->urbout, VAR_25, VAR_31, VAR_26->outbuf, 0,
      VAR_18, VAR_22, VAR_32);
   VAR_26->urbout->transfer_dma = VAR_26->outbuf_dma;
   VAR_26->urbout->transfer_flags |= VAR_12;
  }
 }

 VAR_26->urbctrl = FUNC_12(0, VAR_1);
 if (!VAR_26->urbctrl) {
  VAR_29 = -VAR_0;
  goto fail;
 }

 FUNC_17(VAR_26->urbctrl, VAR_25, 0, (void *) VAR_26->cr,
        VAR_26->ctrlbuf, 1, VAR_16, VAR_22);
 VAR_26->urbctrl->transfer_dma = VAR_26->ctrlbuf_dma;
 VAR_26->urbctrl->transfer_flags |= VAR_12;

 FUNC_10(VAR_11, &VAR_26->iofl);

 if (VAR_22->quirks & VAR_9) {
  VAR_29 = FUNC_13(VAR_26->intf);
  if (VAR_29)
   goto fail;
  FUNC_10(VAR_5, &VAR_26->iofl);
  VAR_26->intf->needs_remote_wakeup = 1;
  VAR_29 = FUNC_7(VAR_22);
  if (VAR_29) {
   FUNC_1(&VAR_22->dev,
    "failed to start in urb: %d\n", VAR_29);
  }
  FUNC_14(VAR_26->intf);
 }







 if (VAR_24->desc.bInterfaceSubClass == VAR_14 &&
   VAR_24->desc.bInterfaceProtocol ==
    VAR_13) {
  FUNC_22(VAR_22);
  FUNC_2(&VAR_25->dev, 1);
 }
 return 0;

fail:
 FUNC_19(VAR_26->urbin);
 FUNC_19(VAR_26->urbout);
 FUNC_19(VAR_26->urbctrl);
 VAR_26->urbin = ((void*)0);
 VAR_26->urbout = ((void*)0);
 VAR_26->urbctrl = ((void*)0);
 FUNC_6(VAR_25, VAR_22);
 return VAR_29;
}
