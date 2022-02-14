
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xpad {scalar_t__ xtype; scalar_t__ pad_present; struct input_dev* dev; } ;
struct usb_interface {int dummy; } ;
struct input_dev {int mutex; scalar_t__ users; } ;
typedef int pm_message_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct usb_xpad* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_xpad*) ;
 int FUNC_4 (struct usb_xpad*) ;
 int FUNC_5 (struct usb_xpad*) ;
 int FUNC_6 (struct usb_xpad*) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_2, pm_message_t VAR_3)
{
 struct usb_xpad *VAR_4 = FUNC_2(VAR_2);
 struct input_dev *VAR_5 = VAR_4->dev;

 if (VAR_4->xtype == VAR_0) {





  FUNC_4(VAR_4);







  if (VAR_1 && VAR_4->pad_present)
   FUNC_3(VAR_4);
 } else {
  FUNC_0(&VAR_5->mutex);
  if (VAR_5->users)
   FUNC_5(VAR_4);
  FUNC_1(&VAR_5->mutex);
 }

 FUNC_6(VAR_4);

 return 0;
}
