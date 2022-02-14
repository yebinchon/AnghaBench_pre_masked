
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhid_device {TYPE_1__* urbout; } ;
struct usb_device {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;
typedef int __u8 ;
struct TYPE_2__ {int pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct usb_device*,int ,int*,size_t,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2, __u8 *VAR_3, size_t VAR_4)
{
 struct usbhid_device *VAR_5 = VAR_2->driver_data;
 struct usb_device *VAR_6 = FUNC_0(VAR_2);
 int VAR_7, VAR_8 = 0, VAR_9;

 if (!VAR_5->urbout)
  return -VAR_0;

 if (VAR_3[0] == 0x0) {

  VAR_3++;
  VAR_4--;
  VAR_8 = 1;
 }

 VAR_9 = FUNC_1(VAR_6, VAR_5->urbout->pipe,
    VAR_3, VAR_4, &VAR_7,
    VAR_1);

 if (VAR_9 == 0) {
  VAR_9 = VAR_7;

  if (VAR_8)
   VAR_9++;
 }

 return VAR_9;
}
