
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct kbtab {int data_dma; int data; int irq; int dev; } ;


 int FUNC_0 (int ) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct kbtab*) ;
 int FUNC_3 (struct usb_device*,int,int ,int ) ;
 int FUNC_4 (int ) ;
 struct kbtab* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct kbtab *VAR_1 = FUNC_5(VAR_0);
 struct usb_device *VAR_2 = FUNC_1(VAR_0);

 FUNC_6(VAR_0, ((void*)0));

 FUNC_0(VAR_1->dev);
 FUNC_4(VAR_1->irq);
 FUNC_3(VAR_2, 8, VAR_1->data, VAR_1->data_dma);
 FUNC_2(VAR_1);
}
