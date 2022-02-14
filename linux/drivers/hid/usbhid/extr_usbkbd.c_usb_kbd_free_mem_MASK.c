
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_kbd {int leds_dma; int leds; int cr; int new_dma; int new; int led; int irq; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,int,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_device *VAR_0, struct usb_kbd *VAR_1)
{
 FUNC_2(VAR_1->irq);
 FUNC_2(VAR_1->led);
 FUNC_1(VAR_0, 8, VAR_1->new, VAR_1->new_dma);
 FUNC_0(VAR_1->cr);
 FUNC_1(VAR_0, 1, VAR_1->leds, VAR_1->leds_dma);
}
