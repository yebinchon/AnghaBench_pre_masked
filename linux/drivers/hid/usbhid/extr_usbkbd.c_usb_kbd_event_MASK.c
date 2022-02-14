
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_kbd {int newleds; int led_urb_submitted; int* leds; int leds_lock; TYPE_1__* led; int usbdev; } ;
struct input_dev {int led; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_kbd* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_7, unsigned int VAR_8,
    unsigned int VAR_9, int VAR_10)
{
 unsigned long VAR_11;
 struct usb_kbd *VAR_12 = FUNC_0(VAR_7);

 if (VAR_8 != VAR_0)
  return -1;

 FUNC_2(&VAR_12->leds_lock, VAR_11);
 VAR_12->newleds = (!!FUNC_4(VAR_4, VAR_7->led) << 3) | (!!FUNC_4(VAR_3, VAR_7->led) << 3) |
         (!!FUNC_4(VAR_6, VAR_7->led) << 2) | (!!FUNC_4(VAR_2, VAR_7->led) << 1) |
         (!!FUNC_4(VAR_5, VAR_7->led));

 if (VAR_12->led_urb_submitted){
  FUNC_3(&VAR_12->leds_lock, VAR_11);
  return 0;
 }

 if (*(VAR_12->leds) == VAR_12->newleds){
  FUNC_3(&VAR_12->leds_lock, VAR_11);
  return 0;
 }

 *(VAR_12->leds) = VAR_12->newleds;

 VAR_12->led->dev = VAR_12->usbdev;
 if (FUNC_5(VAR_12->led, VAR_1))
  FUNC_1("usb_submit_urb(leds) failed\n");
 else
  VAR_12->led_urb_submitted = 1;

 FUNC_3(&VAR_12->leds_lock, VAR_11);

 return 0;
}
