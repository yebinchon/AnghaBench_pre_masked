
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct usb_interface {int dev; TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int driver_info; } ;
struct TYPE_8__ {int bcdDevice; } ;
struct usb_device {TYPE_4__ descriptor; int dev; } ;
struct hci_dev {int manufacturer; int quirks; int setup; void* cmd_timeout; int shutdown; void* set_bdaddr; void* set_diag; int hw_error; int send; int notify; int flush; int close; int open; int dev_type; int bus; } ;
struct gpio_desc {int dummy; } ;
struct btusb_data {int cmdreq_type; int cmdreq; unsigned int isoc_ifnum; struct gpio_desc* reset_gpio; struct usb_device* udev; int * diag; int * isoc; int flags; void* setup_on_usb; scalar_t__ oob_wake_irq; struct hci_dev* hdev; int recv_bulk; int recv_event; int rxlock; int ctrl_anchor; int diag_anchor; int isoc_anchor; int bulk_anchor; int intr_anchor; int txlock; int tx_anchor; int deferred; int waker; int work; struct usb_interface* intf; struct usb_endpoint_descriptor* bulk_rx_ep; struct usb_endpoint_descriptor* bulk_tx_ep; struct usb_endpoint_descriptor* intr_ep; } ;
struct TYPE_5__ {int bInterfaceNumber; int bNumEndpoints; } ;
struct TYPE_7__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (char*,struct usb_interface*,struct usb_device_id const*) ;
 int FUNC_1 (char*,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct gpio_desc*) ;
 int FUNC_4 (struct gpio_desc*) ;
 int FUNC_5 (struct hci_dev*,int *) ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_6 (struct hci_dev*) ;
 int VAR_43 ;
 void* VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 void* VAR_48 ;
 void* VAR_49 ;
 void* VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 void* VAR_53 ;
 int FUNC_7 (struct usb_interface*) ;
 int VAR_54 ;
 int FUNC_8 (struct hci_dev*) ;
 int VAR_55 ;
 int VAR_56 ;
 void* VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_9 (struct usb_device*) ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 void* VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 void* VAR_68 ;
 void* VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 void* VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 struct btusb_data* FUNC_10 (int *,int,int ) ;
 int VAR_79 ;
 scalar_t__ VAR_80 ;
 scalar_t__ VAR_81 ;
 struct gpio_desc* FUNC_11 (int *,char*,int ) ;
 int FUNC_12 (struct gpio_desc*) ;
 struct hci_dev* FUNC_13 () ;
 int FUNC_14 (struct hci_dev*) ;
 int VAR_82 ;
 int FUNC_15 (struct hci_dev*) ;
 int FUNC_16 (struct hci_dev*,struct btusb_data*) ;
 int FUNC_17 (int *) ;
 void* FUNC_18 (struct usb_interface*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct hci_dev*) ;
 int VAR_83 ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int *,struct btusb_data*) ;
 int FUNC_24 (struct usb_device*) ;
 scalar_t__ FUNC_25 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_26 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_27 (struct usb_endpoint_descriptor*) ;
 void* FUNC_28 (struct usb_device*,unsigned int) ;
 struct usb_device_id* FUNC_29 (struct usb_interface*,int ) ;
 int FUNC_30 (struct usb_device*,int ,int ) ;
 int FUNC_31 (struct usb_interface*,struct btusb_data*) ;

__attribute__((used)) static int FUNC_32(struct usb_interface *VAR_84,
         const struct usb_device_id *VAR_85)
{
 struct usb_endpoint_descriptor *VAR_86;
 struct gpio_desc *VAR_87;
 struct btusb_data *VAR_88;
 struct hci_dev *VAR_89;
 unsigned VAR_90;
 int VAR_91, VAR_92;

 FUNC_0("intf %p id %p", VAR_84, VAR_85);


 if (VAR_84->cur_altsetting->desc.bInterfaceNumber != 0) {
  if (!(VAR_85->driver_info & VAR_11))
   return -VAR_24;
  if (VAR_84->cur_altsetting->desc.bInterfaceNumber != 2)
   return -VAR_24;
 }

 VAR_90 = VAR_84->cur_altsetting->desc.bInterfaceNumber;

 if (!VAR_85->driver_info) {
  const struct usb_device_id *VAR_93;

  VAR_93 = FUNC_29(VAR_84, VAR_43);
  if (VAR_93)
   VAR_85 = VAR_93;
 }

 if (VAR_85->driver_info == VAR_12)
  return -VAR_24;

 if (VAR_85->driver_info & VAR_1) {
  struct usb_device *VAR_94 = FUNC_18(VAR_84);




  if (FUNC_19(VAR_94->descriptor.bcdDevice) <= 0x0001 &&
      !FUNC_9(VAR_94))
   return -VAR_24;
 }

 VAR_88 = FUNC_10(&VAR_84->dev, sizeof(*VAR_88), VAR_26);
 if (!VAR_88)
  return -VAR_25;

 for (VAR_91 = 0; VAR_91 < VAR_84->cur_altsetting->desc.bNumEndpoints; VAR_91++) {
  VAR_86 = &VAR_84->cur_altsetting->endpoint[VAR_91].desc;

  if (!VAR_88->intr_ep && FUNC_27(VAR_86)) {
   VAR_88->intr_ep = VAR_86;
   continue;
  }

  if (!VAR_88->bulk_tx_ep && FUNC_26(VAR_86)) {
   VAR_88->bulk_tx_ep = VAR_86;
   continue;
  }

  if (!VAR_88->bulk_rx_ep && FUNC_25(VAR_86)) {
   VAR_88->bulk_rx_ep = VAR_86;
   continue;
  }
 }

 if (!VAR_88->intr_ep || !VAR_88->bulk_tx_ep || !VAR_88->bulk_rx_ep)
  return -VAR_24;

 if (VAR_85->driver_info & VAR_0) {
  VAR_88->cmdreq_type = VAR_41 | 0x01;
  VAR_88->cmdreq = 0x2b;
 } else {
  VAR_88->cmdreq_type = VAR_41;
  VAR_88->cmdreq = 0x00;
 }

 VAR_88->udev = FUNC_18(VAR_84);
 VAR_88->intf = VAR_84;

 FUNC_2(&VAR_88->work, VAR_78);
 FUNC_2(&VAR_88->waker, VAR_77);
 FUNC_17(&VAR_88->deferred);
 FUNC_17(&VAR_88->tx_anchor);
 FUNC_22(&VAR_88->txlock);

 FUNC_17(&VAR_88->intr_anchor);
 FUNC_17(&VAR_88->bulk_anchor);
 FUNC_17(&VAR_88->isoc_anchor);
 FUNC_17(&VAR_88->diag_anchor);
 FUNC_17(&VAR_88->ctrl_anchor);
 FUNC_22(&VAR_88->rxlock);

 if (VAR_85->driver_info & VAR_15) {
  VAR_88->recv_event = VAR_64;
  VAR_88->recv_bulk = VAR_63;
  FUNC_21(VAR_6, &VAR_88->flags);
 } else {
  VAR_88->recv_event = VAR_82;
  VAR_88->recv_bulk = VAR_62;
 }

 VAR_89 = FUNC_13();
 if (!VAR_89)
  return -VAR_25;

 VAR_89->bus = VAR_40;
 FUNC_16(VAR_89, VAR_88);

 if (VAR_85->driver_info & VAR_0)
  VAR_89->dev_type = VAR_28;
 else
  VAR_89->dev_type = VAR_29;

 VAR_88->hdev = VAR_89;

 FUNC_5(VAR_89, &VAR_84->dev);

 VAR_87 = FUNC_11(&VAR_88->udev->dev, "reset",
     VAR_27);
 if (FUNC_3(VAR_87)) {
  VAR_92 = FUNC_4(VAR_87);
  goto out_free_dev;
 } else if (VAR_87) {
  VAR_88->reset_gpio = VAR_87;
 }

 VAR_89->open = VAR_61;
 VAR_89->close = VAR_54;
 VAR_89->flush = VAR_56;
 VAR_89->send = VAR_66;
 VAR_89->notify = VAR_60;
 if (VAR_85->driver_info & VAR_9)
  FUNC_21(VAR_31, &VAR_89->quirks);

 if (VAR_85->driver_info & VAR_2)
  FUNC_21(VAR_31, &VAR_89->quirks);

 if (VAR_85->driver_info & VAR_3)
  VAR_89->setup = VAR_70;
 if (VAR_85->driver_info & VAR_13) {
  VAR_89->manufacturer = 2;
  VAR_89->setup = VAR_72;
  VAR_89->shutdown = VAR_75;
  VAR_89->set_diag = VAR_50;
  VAR_89->set_bdaddr = VAR_48;
  VAR_89->cmd_timeout = VAR_57;
  FUNC_21(VAR_39, &VAR_89->quirks);
  FUNC_21(VAR_38, &VAR_89->quirks);
  FUNC_21(VAR_34, &VAR_89->quirks);
 }

 if (VAR_85->driver_info & VAR_15) {
  VAR_89->manufacturer = 2;
  VAR_89->send = VAR_67;
  VAR_89->setup = VAR_73;
  VAR_89->shutdown = VAR_76;
  VAR_89->hw_error = VAR_47;
  VAR_89->set_diag = VAR_49;
  VAR_89->set_bdaddr = VAR_48;
  VAR_89->cmd_timeout = VAR_57;
  FUNC_21(VAR_39, &VAR_89->quirks);
  FUNC_21(VAR_38, &VAR_89->quirks);
  FUNC_21(VAR_34, &VAR_89->quirks);
 }

 if (VAR_85->driver_info & VAR_16)
  VAR_89->set_bdaddr = VAR_69;
 if (VAR_85->driver_info & VAR_21) {
  FUNC_21(VAR_33, &VAR_89->quirks);
  FUNC_21(VAR_30, &VAR_89->quirks);
 }

 if (VAR_85->driver_info & VAR_14) {
  VAR_89->manufacturer = 2;
  FUNC_21(VAR_36, &VAR_89->quirks);
 }

 if (VAR_85->driver_info & VAR_1) {
  VAR_88->setup_on_usb = VAR_74;
  VAR_89->set_bdaddr = VAR_68;
  FUNC_21(VAR_38, &VAR_89->quirks);
  FUNC_21(VAR_39, &VAR_89->quirks);
 }

 if (VAR_85->driver_info & VAR_18) {
  VAR_88->setup_on_usb = VAR_74;
  VAR_89->set_bdaddr = VAR_68;
  FUNC_21(VAR_38, &VAR_89->quirks);
  FUNC_7(VAR_84);
 }
 if (VAR_85->driver_info & VAR_0) {

  VAR_88->isoc = ((void*)0);
 } else {

  VAR_88->isoc = FUNC_28(VAR_88->udev, VAR_90 + 1);
  VAR_88->isoc_ifnum = VAR_90 + 1;
 }

 if (!VAR_83)
  FUNC_21(VAR_37, &VAR_89->quirks);

 if (VAR_81 || VAR_85->driver_info & VAR_23) {
  if (!VAR_79)
   FUNC_21(VAR_32, &VAR_89->quirks);
 }

 if (VAR_85->driver_info & VAR_7)
  VAR_88->isoc = ((void*)0);

 if (VAR_85->driver_info & VAR_10) {
  VAR_88->cmdreq_type = VAR_42;
  FUNC_21(VAR_37, &VAR_89->quirks);
 }

 if (VAR_85->driver_info & VAR_8) {
  struct usb_device *VAR_95 = VAR_88->udev;
  u16 VAR_96 = FUNC_19(VAR_95->descriptor.bcdDevice);


  if (VAR_96 < 0x117)
   FUNC_21(VAR_37, &VAR_89->quirks);


  if (VAR_96 <= 0x100 || VAR_96 == 0x134)
   VAR_89->setup = VAR_71;

  FUNC_21(VAR_38, &VAR_89->quirks);
 }

 if (VAR_85->driver_info & VAR_20) {
  struct usb_device *VAR_97 = VAR_88->udev;


  if (FUNC_19(VAR_97->descriptor.bcdDevice) > 0x997)
   FUNC_21(VAR_36, &VAR_89->quirks);
 }

 if (VAR_85->driver_info & VAR_14) {



  VAR_92 = FUNC_30(VAR_88->udev, 0, 0);
  if (VAR_92 < 0) {
   FUNC_1("failed to set interface 0, alt 0 %d", VAR_92);
   goto out_free_dev;
  }
 }

 if (VAR_88->isoc) {
  VAR_92 = FUNC_23(&VAR_55,
       VAR_88->isoc, VAR_88);
  if (VAR_92 < 0)
   goto out_free_dev;
 }
 if (VAR_80)
  FUNC_24(VAR_88->udev);

 VAR_92 = FUNC_15(VAR_89);
 if (VAR_92 < 0)
  goto out_free_dev;

 FUNC_31(VAR_84, VAR_88);

 return 0;

out_free_dev:
 if (VAR_88->reset_gpio)
  FUNC_12(VAR_88->reset_gpio);
 FUNC_14(VAR_89);
 return VAR_92;
}
