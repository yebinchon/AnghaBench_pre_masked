
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_7__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_4__* endpoint; TYPE_3__ desc; } ;
struct usb_cdc_union_desc {int bSlaveInterface0; int bMasterInterface0; } ;
struct ims_pcu {int max_out_size; int max_in_size; int dev; int * ep_in; int * ep_out; TYPE_2__* data_intf; int udev; int * ep_ctrl; void* max_ctrl_size; TYPE_1__* ctrl_intf; } ;
struct TYPE_8__ {int desc; } ;
struct TYPE_6__ {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_5__ {struct usb_host_interface* cur_altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct usb_cdc_union_desc* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_2, struct ims_pcu *VAR_3)
{
 const struct usb_cdc_union_desc *VAR_4;
 struct usb_host_interface *VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->ctrl_intf = FUNC_5(VAR_3->udev,
      VAR_4->bMasterInterface0);
 if (!VAR_3->ctrl_intf)
  return -VAR_0;

 VAR_5 = VAR_3->ctrl_intf->cur_altsetting;

 if (VAR_5->desc.bNumEndpoints < 1)
  return -VAR_1;

 VAR_3->ep_ctrl = &VAR_5->endpoint[0].desc;
 VAR_3->max_ctrl_size = FUNC_4(VAR_3->ep_ctrl);

 VAR_3->data_intf = FUNC_5(VAR_3->udev,
      VAR_4->bSlaveInterface0);
 if (!VAR_3->data_intf)
  return -VAR_0;

 VAR_5 = VAR_3->data_intf->cur_altsetting;
 if (VAR_5->desc.bNumEndpoints != 2) {
  FUNC_0(VAR_3->dev,
   "Incorrect number of endpoints on data interface (%d)\n",
   VAR_5->desc.bNumEndpoints);
  return -VAR_0;
 }

 VAR_3->ep_out = &VAR_5->endpoint[0].desc;
 if (!FUNC_3(VAR_3->ep_out)) {
  FUNC_0(VAR_3->dev,
   "First endpoint on data interface is not BULK OUT\n");
  return -VAR_0;
 }

 VAR_3->max_out_size = FUNC_4(VAR_3->ep_out);
 if (VAR_3->max_out_size < 8) {
  FUNC_0(VAR_3->dev,
   "Max OUT packet size is too small (%zd)\n",
   VAR_3->max_out_size);
  return -VAR_0;
 }

 VAR_3->ep_in = &VAR_5->endpoint[1].desc;
 if (!FUNC_2(VAR_3->ep_in)) {
  FUNC_0(VAR_3->dev,
   "Second endpoint on data interface is not BULK IN\n");
  return -VAR_0;
 }

 VAR_3->max_in_size = FUNC_4(VAR_3->ep_in);
 if (VAR_3->max_in_size < 8) {
  FUNC_0(VAR_3->dev,
   "Max IN packet size is too small (%zd)\n",
   VAR_3->max_in_size);
  return -VAR_0;
 }

 return 0;
}
