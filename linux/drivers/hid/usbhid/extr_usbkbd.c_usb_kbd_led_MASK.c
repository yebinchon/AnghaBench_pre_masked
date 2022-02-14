
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_kbd {scalar_t__* leds; scalar_t__ newleds; int led_urb_submitted; int leds_lock; TYPE_1__* led; int usbdev; } ;
struct urb {int dev; scalar_t__ status; struct usb_kbd* context; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_1)
{
 unsigned long VAR_2;
 struct usb_kbd *VAR_3 = VAR_1->context;

 if (VAR_1->status)
  FUNC_1(VAR_1->dev, "led urb status %d received\n",
    VAR_1->status);

 FUNC_2(&VAR_3->leds_lock, VAR_2);

 if (*(VAR_3->leds) == VAR_3->newleds){
  VAR_3->led_urb_submitted = 0;
  FUNC_3(&VAR_3->leds_lock, VAR_2);
  return;
 }

 *(VAR_3->leds) = VAR_3->newleds;

 VAR_3->led->dev = VAR_3->usbdev;
 if (FUNC_4(VAR_3->led, VAR_0)){
  FUNC_0(VAR_1->dev, "usb_submit_urb(leds) failed\n");
  VAR_3->led_urb_submitted = 0;
 }
 FUNC_3(&VAR_3->leds_lock, VAR_2);

}
