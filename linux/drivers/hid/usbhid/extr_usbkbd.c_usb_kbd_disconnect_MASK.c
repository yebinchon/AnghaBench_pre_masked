
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_kbd {int led; int dev; int irq; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_kbd*) ;
 struct usb_kbd* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ,struct usb_kbd*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct usb_kbd *VAR_1 = FUNC_3 (VAR_0);

 FUNC_6(VAR_0, ((void*)0));
 if (VAR_1) {
  FUNC_5(VAR_1->irq);
  FUNC_0(VAR_1->dev);
  FUNC_5(VAR_1->led);
  FUNC_4(FUNC_1(VAR_0), VAR_1);
  FUNC_2(VAR_1);
 }
}
