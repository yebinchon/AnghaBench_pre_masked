
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


struct usb_xpad {scalar_t__ xtype; int idata_dma; int idata; TYPE_6__* irq_in; int mapping; int work; int name; struct usb_interface* intf; struct usb_device* udev; int phys; } ;
struct usb_interface {TYPE_4__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_9__ {int idProduct; int idVendor; } ;
struct usb_device {int quirks; TYPE_1__ descriptor; } ;
struct TYPE_14__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_13__ {scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ xtype; int name; int mapping; } ;
struct TYPE_10__ {int bNumEndpoints; scalar_t__ bInterfaceClass; int bInterfaceProtocol; scalar_t__ bInterfaceNumber; } ;
struct TYPE_12__ {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct TYPE_11__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_xpad*) ;
 struct usb_xpad* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (struct usb_device*,int ,int ,int *) ;
 TYPE_6__* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_9 (struct usb_endpoint_descriptor*) ;
 int FUNC_10 (TYPE_6__*,struct usb_device*,int ,int ,int ,int ,struct usb_xpad*,int ) ;
 int FUNC_11 (struct usb_device*,int ,int ,int ) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (struct usb_device*,int ,int) ;
 int FUNC_14 (struct usb_device*,int ) ;
 int FUNC_15 (struct usb_interface*,struct usb_xpad*) ;
 int FUNC_16 (struct usb_xpad*) ;
 int FUNC_17 (struct usb_xpad*) ;
 TYPE_5__* VAR_18 ;
 int FUNC_18 (struct usb_xpad*) ;
 int FUNC_19 (struct usb_interface*,struct usb_xpad*,struct usb_endpoint_descriptor*) ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_20(struct usb_interface *VAR_21, const struct usb_device_id *VAR_22)
{
 struct usb_device *VAR_23 = FUNC_1(VAR_21);
 struct usb_xpad *VAR_24;
 struct usb_endpoint_descriptor *VAR_25, *VAR_26;
 int VAR_27, VAR_28;

 if (VAR_21->cur_altsetting->desc.bNumEndpoints != 2)
  return -VAR_0;

 for (VAR_27 = 0; VAR_18[VAR_27].idVendor; VAR_27++) {
  if ((FUNC_4(VAR_23->descriptor.idVendor) == VAR_18[VAR_27].idVendor) &&
      (FUNC_4(VAR_23->descriptor.idProduct) == VAR_18[VAR_27].idProduct))
   break;
 }

 VAR_24 = FUNC_3(sizeof(struct usb_xpad), VAR_2);
 if (!VAR_24)
  return -VAR_1;

 FUNC_13(VAR_23, VAR_24->phys, sizeof(VAR_24->phys));
 FUNC_5(VAR_24->phys, "/input0", sizeof(VAR_24->phys));

 VAR_24->idata = FUNC_6(VAR_23, VAR_9,
      VAR_2, &VAR_24->idata_dma);
 if (!VAR_24->idata) {
  VAR_28 = -VAR_1;
  goto err_free_mem;
 }

 VAR_24->irq_in = FUNC_7(0, VAR_2);
 if (!VAR_24->irq_in) {
  VAR_28 = -VAR_1;
  goto err_free_idata;
 }

 VAR_24->udev = VAR_23;
 VAR_24->intf = VAR_21;
 VAR_24->mapping = VAR_18[VAR_27].mapping;
 VAR_24->xtype = VAR_18[VAR_27].xtype;
 VAR_24->name = VAR_18[VAR_27].name;
 FUNC_0(&VAR_24->work, VAR_20);

 if (VAR_24->xtype == VAR_10) {
  if (VAR_21->cur_altsetting->desc.bInterfaceClass == VAR_7) {
   if (VAR_21->cur_altsetting->desc.bInterfaceProtocol == 129)
    VAR_24->xtype = VAR_13;
   else if (VAR_21->cur_altsetting->desc.bInterfaceProtocol == 208)
    VAR_24->xtype = VAR_14;
   else
    VAR_24->xtype = VAR_12;
  } else {
   VAR_24->xtype = VAR_11;
  }

  if (VAR_15)
   VAR_24->mapping |= VAR_3;
  if (VAR_17)
   VAR_24->mapping |= VAR_5;
  if (VAR_16)
   VAR_24->mapping |= VAR_4;
 }

 if (VAR_24->xtype == VAR_14 &&
     VAR_21->cur_altsetting->desc.bInterfaceNumber != 0) {





  VAR_28 = -VAR_0;
  goto err_free_in_urb;
 }

 VAR_25 = VAR_26 = ((void*)0);

 for (VAR_27 = 0; VAR_27 < 2; VAR_27++) {
  struct usb_endpoint_descriptor *VAR_29 =
    &VAR_21->cur_altsetting->endpoint[VAR_27].desc;

  if (FUNC_9(VAR_29)) {
   if (FUNC_8(VAR_29))
    VAR_25 = VAR_29;
   else
    VAR_26 = VAR_29;
  }
 }

 if (!VAR_25 || !VAR_26) {
  VAR_28 = -VAR_0;
  goto err_free_in_urb;
 }

 VAR_28 = FUNC_19(VAR_21, VAR_24, VAR_26);
 if (VAR_28)
  goto err_free_in_urb;

 FUNC_10(VAR_24->irq_in, VAR_23,
    FUNC_14(VAR_23, VAR_25->bEndpointAddress),
    VAR_24->idata, VAR_9, VAR_19,
    VAR_24, VAR_25->bInterval);
 VAR_24->irq_in->transfer_dma = VAR_24->idata_dma;
 VAR_24->irq_in->transfer_flags |= VAR_6;

 FUNC_15(VAR_21, VAR_24);

 if (VAR_24->xtype == VAR_13) {







  VAR_28 = FUNC_16(VAR_24);
  if (VAR_28)
   goto err_deinit_output;







  VAR_23->quirks |= VAR_8;
 } else {
  VAR_28 = FUNC_18(VAR_24);
  if (VAR_28)
   goto err_deinit_output;
 }
 return 0;

err_deinit_output:
 FUNC_17(VAR_24);
err_free_in_urb:
 FUNC_12(VAR_24->irq_in);
err_free_idata:
 FUNC_11(VAR_23, VAR_9, VAR_24->idata, VAR_24->idata_dma);
err_free_mem:
 FUNC_2(VAR_24);
 return VAR_28;
}
