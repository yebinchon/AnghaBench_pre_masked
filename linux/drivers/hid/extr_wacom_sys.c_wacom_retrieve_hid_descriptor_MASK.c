
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom_features {int x_fuzz; int y_fuzz; int distance_fuzz; int tilt_fuzz; scalar_t__ type; int device_type; scalar_t__ pressure_fuzz; } ;
struct wacom {struct usb_interface* intf; } ;
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct hid_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,struct wacom_features*) ;

__attribute__((used)) static void FUNC_2(struct hid_device *VAR_3,
      struct wacom_features *VAR_4)
{
 struct wacom *VAR_5 = FUNC_0(VAR_3);
 struct usb_interface *VAR_6 = VAR_5->intf;


 VAR_4->x_fuzz = 4;
 VAR_4->y_fuzz = 4;
 VAR_4->pressure_fuzz = 0;
 VAR_4->distance_fuzz = 1;
 VAR_4->tilt_fuzz = 1;







 if (VAR_4->type == VAR_2) {
  if (VAR_6->cur_altsetting->desc.bInterfaceNumber == 0)
   VAR_4->device_type = VAR_1;
  else
   VAR_4->device_type = VAR_0;
  return;
 }

 FUNC_1(VAR_3, VAR_4);
}
