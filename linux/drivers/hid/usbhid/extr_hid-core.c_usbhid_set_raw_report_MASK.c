
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhid_device {struct usb_interface* intf; } ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_2__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;
struct hid_device {int quirks; struct usbhid_device* driver_data; } ;
typedef int __u8 ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,unsigned char,int ,int*,size_t,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_7, unsigned int VAR_8,
     __u8 *VAR_9, size_t VAR_10, unsigned char VAR_11)
{
 struct usbhid_device *VAR_12 = VAR_7->driver_data;
 struct usb_device *VAR_13 = FUNC_0(VAR_7);
 struct usb_interface *VAR_14 = VAR_12->intf;
 struct usb_host_interface *VAR_15 = VAR_14->cur_altsetting;
 int VAR_16, VAR_17 = 0;


 if ((VAR_11 == VAR_0) &&
     (VAR_7->quirks & VAR_1))
  VAR_9[0] = 0;
 else
  VAR_9[0] = VAR_8;

 if (VAR_9[0] == 0x0) {

  VAR_9++;
  VAR_10--;
  VAR_17 = 1;
 }

 VAR_16 = FUNC_1(VAR_13, FUNC_2(VAR_13, 0),
   VAR_2,
   VAR_4 | VAR_6 | VAR_5,
   ((VAR_11 + 1) << 8) | VAR_8,
   VAR_15->desc.bInterfaceNumber, VAR_9, VAR_10,
   VAR_3);

 if (VAR_16 > 0 && VAR_17)
  VAR_16++;

 return VAR_16;
}
