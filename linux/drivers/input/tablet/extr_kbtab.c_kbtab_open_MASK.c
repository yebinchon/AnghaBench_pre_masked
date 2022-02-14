
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct kbtab {TYPE_1__* irq; int intf; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kbtab* FUNC_0 (struct input_dev*) ;
 struct usb_device* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2)
{
 struct kbtab *VAR_3 = FUNC_0(VAR_2);
 struct usb_device *VAR_4 = FUNC_1(VAR_3->intf);

 VAR_3->irq->dev = VAR_4;
 if (FUNC_2(VAR_3->irq, VAR_1))
  return -VAR_0;

 return 0;
}
