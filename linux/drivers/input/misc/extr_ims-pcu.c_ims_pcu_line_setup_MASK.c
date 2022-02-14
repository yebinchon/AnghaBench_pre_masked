
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_2__ desc; } ;
struct usb_cdc_line_coding {int bDataBits; int dwDTERate; } ;
struct ims_pcu {int dev; int udev; scalar_t__ cmd_buf; TYPE_1__* ctrl_intf; } ;
struct TYPE_3__ {struct usb_host_interface* cur_altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct usb_cdc_line_coding*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int,int ,struct usb_cdc_line_coding*,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ims_pcu *VAR_4)
{
 struct usb_host_interface *VAR_5 = VAR_4->ctrl_intf->cur_altsetting;
 struct usb_cdc_line_coding *VAR_6 = (void *)VAR_4->cmd_buf;
 int VAR_7;

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->dwDTERate = FUNC_0(57600);
 VAR_6->bDataBits = 8;

 VAR_7 = FUNC_3(VAR_4->udev, FUNC_4(VAR_4->udev, 0),
    VAR_1,
    VAR_3 | VAR_2,
    0, VAR_5->desc.bInterfaceNumber,
    VAR_6, sizeof(struct usb_cdc_line_coding),
    5000);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4->dev, "Failed to set line coding, error: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_4->udev, FUNC_4(VAR_4->udev, 0),
    VAR_0,
    VAR_3 | VAR_2,
    0x03, VAR_5->desc.bInterfaceNumber,
    ((void*)0), 0, 5000);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4->dev, "Failed to set line state, error: %d\n",
   VAR_7);
  return VAR_7;
 }

 return 0;
}
