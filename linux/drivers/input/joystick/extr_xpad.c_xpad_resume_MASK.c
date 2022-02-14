
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xpad {scalar_t__ xtype; struct input_dev* dev; } ;
struct usb_interface {int dummy; } ;
struct input_dev {int mutex; scalar_t__ users; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct usb_xpad* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_xpad*) ;
 int FUNC_4 (struct usb_xpad*) ;
 int FUNC_5 (struct usb_xpad*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_2)
{
 struct usb_xpad *VAR_3 = FUNC_2(VAR_2);
 struct input_dev *VAR_4 = VAR_3->dev;
 int VAR_5 = 0;

 if (VAR_3->xtype == VAR_0) {
  VAR_5 = FUNC_3(VAR_3);
 } else {
  FUNC_0(&VAR_4->mutex);
  if (VAR_4->users) {
   VAR_5 = FUNC_4(VAR_3);
  } else if (VAR_3->xtype == VAR_1) {





   VAR_5 = FUNC_5(VAR_3);
  }
  FUNC_1(&VAR_4->mutex);
 }

 return VAR_5;
}
