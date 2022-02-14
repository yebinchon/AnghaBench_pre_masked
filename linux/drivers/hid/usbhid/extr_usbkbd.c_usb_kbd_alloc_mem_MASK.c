
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_kbd {int leds_dma; void* leds; int cr; int new_dma; void* new; void* led; void* irq; } ;
struct usb_device {int dummy; } ;
struct usb_ctrlrequest {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 void* FUNC_1 (struct usb_device*,int,int ,int *) ;
 void* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_2, struct usb_kbd *VAR_3)
{
 if (!(VAR_3->irq = FUNC_2(0, VAR_1)))
  return -1;
 if (!(VAR_3->led = FUNC_2(0, VAR_1)))
  return -1;
 if (!(VAR_3->new = FUNC_1(VAR_2, 8, VAR_0, &VAR_3->new_dma)))
  return -1;
 if (!(VAR_3->cr = FUNC_0(sizeof(struct usb_ctrlrequest), VAR_1)))
  return -1;
 if (!(VAR_3->leds = FUNC_1(VAR_2, 1, VAR_0, &VAR_3->leds_dma)))
  return -1;

 return 0;
}
