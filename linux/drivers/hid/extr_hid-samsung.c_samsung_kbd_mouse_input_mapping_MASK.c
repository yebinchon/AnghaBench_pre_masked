
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct hid_usage {int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct hid_device {TYPE_3__ dev; } ;
struct TYPE_4__ {unsigned short bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 struct usb_interface* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_14,
 struct hid_input *VAR_15, struct hid_field *VAR_16, struct hid_usage *VAR_17,
 unsigned long **VAR_18, int *VAR_19)
{
 struct usb_interface *VAR_20 = FUNC_2(VAR_14->dev.parent);
 unsigned short VAR_21 = VAR_20->cur_altsetting->desc.bInterfaceNumber;

 if (1 != VAR_21 || VAR_0 != (VAR_17->hid & VAR_2))
  return 0;

 FUNC_0("samsung wireless keyboard/mouse input mapping event [0x%x]\n",
  VAR_17->hid & VAR_1);

 switch (VAR_17->hid & VAR_1) {

 case 0x183: FUNC_1(VAR_9); break;
 case 0x195: FUNC_1(VAR_6); break;
 case 0x196: FUNC_1(VAR_4); break;
 case 0x197: FUNC_1(VAR_5); break;
 case 0x22b: FUNC_1(VAR_11); break;
 case 0x22c: FUNC_1(VAR_13); break;
 case 0x22d: FUNC_1(VAR_3); break;
 case 0x22e: FUNC_1(VAR_8); break;
 case 0x22f: FUNC_1(VAR_7); break;
 case 0x230: FUNC_1(VAR_10); break;
 case 0x231: FUNC_1(VAR_12); break;
 default:
  return 0;
 }

 return 1;
}
