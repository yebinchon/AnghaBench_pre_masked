
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_2__* cur_altsetting; } ;
struct TYPE_6__ {int wMaxPacketSize; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct hci_dev {int quirks; int send; int flush; int close; int open; int bus; } ;
struct firmware {struct usb_device_id const* size; struct usb_interface* data; } ;
struct bfusb_data {struct hci_dev* hdev; int completed_q; int pending_q; int transmit_q; int * reassembly; int lock; int bulk_pkt_size; int bulk_out_ep; int bulk_in_ep; struct usb_device* udev; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct TYPE_5__ {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;


 int FUNC_0 (char*,struct usb_interface*,struct usb_device_id const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct hci_dev*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct bfusb_data*,struct usb_interface*,struct usb_device_id const*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct bfusb_data* FUNC_4 (int *,int,int ) ;
 struct hci_dev* FUNC_5 () ;
 int FUNC_6 (struct hci_dev*) ;
 scalar_t__ FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*,struct bfusb_data*) ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct firmware const*) ;
 scalar_t__ FUNC_12 (struct firmware const**,char*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct usb_interface*,struct bfusb_data*) ;

__attribute__((used)) static int FUNC_17(struct usb_interface *VAR_9, const struct usb_device_id *VAR_10)
{
 const struct firmware *VAR_11;
 struct usb_device *VAR_12 = FUNC_9(VAR_9);
 struct usb_host_endpoint *VAR_13;
 struct usb_host_endpoint *VAR_14;
 struct hci_dev *VAR_15;
 struct bfusb_data *VAR_16;

 FUNC_0("intf %p id %p", VAR_9, VAR_10);


 if (VAR_9->cur_altsetting->desc.bNumEndpoints < 2)
  return -VAR_0;

 VAR_13 = &VAR_9->cur_altsetting->endpoint[0];
 VAR_14 = &VAR_9->cur_altsetting->endpoint[1];

 if (!VAR_13 || !VAR_14) {
  FUNC_1("Bulk endpoints not found");
  goto done;
 }


 VAR_16 = FUNC_4(&VAR_9->dev, sizeof(struct bfusb_data), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->udev = VAR_12;
 VAR_16->bulk_in_ep = VAR_14->desc.bEndpointAddress;
 VAR_16->bulk_out_ep = VAR_13->desc.bEndpointAddress;
 VAR_16->bulk_pkt_size = FUNC_10(VAR_13->desc.wMaxPacketSize);

 FUNC_13(&VAR_16->lock);

 VAR_16->reassembly = ((void*)0);

 FUNC_15(&VAR_16->transmit_q);
 FUNC_15(&VAR_16->pending_q);
 FUNC_15(&VAR_16->completed_q);

 if (FUNC_12(&VAR_11, "bfubase.frm", &VAR_12->dev) < 0) {
  FUNC_1("Firmware request failed");
  goto done;
 }

 FUNC_0("firmware data %p size %zu", VAR_11->data, VAR_11->size);

 if (FUNC_3(VAR_16, VAR_11->data, VAR_11->size) < 0) {
  FUNC_1("Firmware loading failed");
  goto release;
 }

 FUNC_11(VAR_11);


 VAR_15 = FUNC_5();
 if (!VAR_15) {
  FUNC_1("Can't allocate HCI device");
  goto done;
 }

 VAR_16->hdev = VAR_15;

 VAR_15->bus = VAR_4;
 FUNC_8(VAR_15, VAR_16);
 FUNC_2(VAR_15, &VAR_9->dev);

 VAR_15->open = VAR_7;
 VAR_15->close = VAR_5;
 VAR_15->flush = VAR_6;
 VAR_15->send = VAR_8;

 FUNC_14(VAR_3, &VAR_15->quirks);

 if (FUNC_7(VAR_15) < 0) {
  FUNC_1("Can't register HCI device");
  FUNC_6(VAR_15);
  goto done;
 }

 FUNC_16(VAR_9, VAR_16);

 return 0;

release:
 FUNC_11(VAR_11);

done:
 return -VAR_0;
}
