
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct pegasus {int data_dma; int data; int data_len; int irq; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct pegasus*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct pegasus* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct pegasus *VAR_1 = FUNC_5(VAR_0);

 FUNC_0(VAR_1->dev);

 FUNC_4(VAR_1->irq);
 FUNC_3(FUNC_1(VAR_0),
     VAR_1->data_len, VAR_1->data,
     VAR_1->data_dma);

 FUNC_2(VAR_1);
 FUNC_6(VAR_0, ((void*)0));
}
