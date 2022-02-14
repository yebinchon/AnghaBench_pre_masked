
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mouse {int data_dma; int data; int irq; int dev; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_mouse*) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ) ;
 struct usb_mouse* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct usb_mouse *VAR_1 = FUNC_5 (VAR_0);

 FUNC_7(VAR_0, ((void*)0));
 if (VAR_1) {
  FUNC_6(VAR_1->irq);
  FUNC_0(VAR_1->dev);
  FUNC_4(VAR_1->irq);
  FUNC_3(FUNC_1(VAR_0), 8, VAR_1->data, VAR_1->data_dma);
  FUNC_2(VAR_1);
 }
}
