
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtouch_usb {int input; int press; int y; int x; int touch; struct usbtouch_device_info* type; } ;
struct usbtouch_device_info {scalar_t__ max_press; int (* read_data ) (struct usbtouch_usb*,unsigned char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usbtouch_usb*,unsigned char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_4(struct usbtouch_usb *VAR_5,
                                 unsigned char *VAR_6, int VAR_7)
{
 struct usbtouch_device_info *VAR_8 = VAR_5->type;

 if (!VAR_8->read_data(VAR_5, VAR_6))
   return;

 FUNC_1(VAR_5->input, VAR_3, VAR_5->touch);

 if (VAR_4) {
  FUNC_0(VAR_5->input, VAR_1, VAR_5->y);
  FUNC_0(VAR_5->input, VAR_2, VAR_5->x);
 } else {
  FUNC_0(VAR_5->input, VAR_1, VAR_5->x);
  FUNC_0(VAR_5->input, VAR_2, VAR_5->y);
 }
 if (VAR_8->max_press)
  FUNC_0(VAR_5->input, VAR_0, VAR_5->press);
 FUNC_2(VAR_5->input);
}
