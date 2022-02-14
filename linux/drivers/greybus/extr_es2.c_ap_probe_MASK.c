
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {void* bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct urb {int dummy; } ;
struct TYPE_6__ {int ** buffer; void* endpoint; struct urb** urb; } ;
struct gb_host_device {int* cport_out_urb_busy; TYPE_3__ cport_in; int arpc_lock; int arpcs; int apb_log_enable_dentry; struct urb** cport_out_urb; int ** arpc_buffer; void* arpc_endpoint_in; struct urb** arpc_urb; void* cport_out_endpoint; int apb_log_fifo; int cport_out_urb_lock; struct usb_device* usb_dev; struct usb_interface* usb_intf; struct gb_host_device* hd; } ;
struct es2_ap_dev {int* cport_out_urb_busy; TYPE_3__ cport_in; int arpc_lock; int arpcs; int apb_log_enable_dentry; struct urb** cport_out_urb; int ** arpc_buffer; void* arpc_endpoint_in; struct urb** arpc_urb; void* cport_out_endpoint; int apb_log_fifo; int cport_out_urb_lock; struct usb_device* usb_dev; struct usb_interface* usb_intf; struct es2_ap_dev* hd; } ;
typedef void* __u8 ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct gb_host_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct gb_host_device*) ;
 int FUNC_4 (struct usb_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (char*,int,int ,struct gb_host_device*,int *) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*,void*) ;
 int FUNC_8 (struct gb_host_device*) ;
 int FUNC_9 (struct gb_host_device*) ;
 int FUNC_10 (struct gb_host_device*,TYPE_3__*) ;
 int FUNC_11 (struct gb_host_device*) ;
 int VAR_13 ;
 int FUNC_12 () ;
 int FUNC_13 (struct gb_host_device*) ;
 int FUNC_14 (struct gb_host_device*,int ) ;
 struct gb_host_device* FUNC_15 (int *,int *,int ,int) ;
 int FUNC_16 (struct gb_host_device*) ;
 struct gb_host_device* FUNC_17 (struct gb_host_device*) ;
 int FUNC_18 (struct usb_interface*) ;
 int * FUNC_19 (int ,int ) ;
 int FUNC_20 (int *) ;
 struct urb* FUNC_21 (int ,int ) ;
 scalar_t__ FUNC_22 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_23 (struct usb_endpoint_descriptor*) ;
 int FUNC_24 (struct urb*,struct usb_device*,int ,int *,int ,int ,struct gb_host_device*) ;
 struct usb_device* FUNC_25 (int ) ;
 int FUNC_26 (struct usb_device*) ;
 int FUNC_27 (struct usb_device*,void*) ;
 int FUNC_28 (struct usb_interface*,struct gb_host_device*) ;

__attribute__((used)) static int FUNC_29(struct usb_interface *VAR_14,
      const struct usb_device_id *VAR_15)
{
 struct es2_ap_dev *VAR_16;
 struct gb_host_device *VAR_17;
 struct usb_device *VAR_18;
 struct usb_host_interface *VAR_19;
 struct usb_endpoint_descriptor *VAR_20;
 __u8 VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 bool VAR_25 = 0;
 bool VAR_26 = 0;
 bool VAR_27 = 0;

 VAR_18 = FUNC_25(FUNC_18(VAR_14));

 VAR_24 = FUNC_4(VAR_18);
 if (VAR_24 < 0) {
  FUNC_26(VAR_18);
  FUNC_6(&VAR_18->dev, "Cannot retrieve CPort count: %d\n",
   VAR_24);
  return VAR_24;
 }

 VAR_17 = FUNC_15(&VAR_13, &VAR_18->dev, VAR_5,
     VAR_24);
 if (FUNC_2(VAR_17)) {
  FUNC_26(VAR_18);
  return FUNC_3(VAR_17);
 }

 VAR_16 = FUNC_17(VAR_17);
 VAR_16->hd = VAR_17;
 VAR_16->usb_intf = VAR_14;
 VAR_16->usb_dev = VAR_18;
 FUNC_20(&VAR_16->cport_out_urb_lock);
 FUNC_0(VAR_16->apb_log_fifo);
 FUNC_28(VAR_14, VAR_16);





 VAR_22 = FUNC_14(VAR_17, VAR_3);
 if (VAR_22)
  goto error;
 VAR_22 = FUNC_14(VAR_17, VAR_4);
 if (VAR_22)
  goto error;


 VAR_19 = VAR_14->cur_altsetting;
 for (VAR_23 = 0; VAR_23 < VAR_19->desc.bNumEndpoints; ++VAR_23) {
  VAR_20 = &VAR_19->endpoint[VAR_23].desc;
  VAR_21 = VAR_20->bEndpointAddress;

  if (FUNC_22(VAR_20)) {
   if (!VAR_26) {
    VAR_16->cport_in.endpoint = VAR_21;
    VAR_26 = 1;
   } else if (!VAR_27) {
    VAR_16->arpc_endpoint_in = VAR_21;
    VAR_27 = 1;
   } else {
    FUNC_7(&VAR_18->dev,
      "Unused bulk IN endpoint found: 0x%02x\n",
      VAR_21);
   }
   continue;
  }
  if (FUNC_23(VAR_20)) {
   if (!VAR_25) {
    VAR_16->cport_out_endpoint = VAR_21;
    VAR_25 = 1;
   } else {
    FUNC_7(&VAR_18->dev,
      "Unused bulk OUT endpoint found: 0x%02x\n",
      VAR_21);
   }
   continue;
  }
  FUNC_7(&VAR_18->dev,
    "Unknown endpoint type found, address 0x%02x\n",
    VAR_21);
 }
 if (!VAR_26 || !VAR_27 || !VAR_25) {
  FUNC_6(&VAR_18->dev, "Not enough endpoints found in device, aborting!\n");
  VAR_22 = -VAR_1;
  goto error;
 }


 for (VAR_23 = 0; VAR_23 < VAR_8; ++VAR_23) {
  struct urb *VAR_28;
  u8 *VAR_29;

  VAR_28 = FUNC_21(0, VAR_6);
  if (!VAR_28) {
   VAR_22 = -VAR_2;
   goto error;
  }
  VAR_16->cport_in.urb[VAR_23] = VAR_28;

  VAR_29 = FUNC_19(VAR_5, VAR_6);
  if (!VAR_29) {
   VAR_22 = -VAR_2;
   goto error;
  }

  FUNC_24(VAR_28, VAR_18,
      FUNC_27(VAR_18, VAR_16->cport_in.endpoint),
      VAR_29, VAR_5,
      VAR_12, VAR_17);

  VAR_16->cport_in.buffer[VAR_23] = VAR_29;
 }


 for (VAR_23 = 0; VAR_23 < VAR_7; ++VAR_23) {
  struct urb *VAR_30;
  u8 *VAR_31;

  VAR_30 = FUNC_21(0, VAR_6);
  if (!VAR_30) {
   VAR_22 = -VAR_2;
   goto error;
  }
  VAR_16->arpc_urb[VAR_23] = VAR_30;

  VAR_31 = FUNC_19(VAR_0, VAR_6);
  if (!VAR_31) {
   VAR_22 = -VAR_2;
   goto error;
  }

  FUNC_24(VAR_30, VAR_18,
      FUNC_27(VAR_18,
        VAR_16->arpc_endpoint_in),
      VAR_31, VAR_0,
      VAR_11, VAR_16);

  VAR_16->arpc_buffer[VAR_23] = VAR_31;
 }


 for (VAR_23 = 0; VAR_23 < VAR_9; ++VAR_23) {
  struct urb *VAR_32;

  VAR_32 = FUNC_21(0, VAR_6);
  if (!VAR_32) {
   VAR_22 = -VAR_2;
   goto error;
  }

  VAR_16->cport_out_urb[VAR_23] = VAR_32;
  VAR_16->cport_out_urb_busy[VAR_23] = 0;
 }


 VAR_16->apb_log_enable_dentry = FUNC_5("apb_log_enable",
        0644,
        FUNC_12(), VAR_16,
        &VAR_10);

 FUNC_1(&VAR_16->arpcs);
 FUNC_20(&VAR_16->arpc_lock);

 VAR_22 = FUNC_9(VAR_16);
 if (VAR_22)
  goto error;

 VAR_22 = FUNC_13(VAR_17);
 if (VAR_22)
  goto err_disable_arpc_in;

 VAR_22 = FUNC_10(VAR_16, &VAR_16->cport_in);
 if (VAR_22)
  goto err_hd_del;

 return 0;

err_hd_del:
 FUNC_16(VAR_17);
err_disable_arpc_in:
 FUNC_8(VAR_16);
error:
 FUNC_11(VAR_16);

 return VAR_22;
}
