
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_acecad {TYPE_1__* irq; int intf; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_acecad* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2)
{
 struct usb_acecad *VAR_3 = FUNC_0(VAR_2);

 VAR_3->irq->dev = FUNC_1(VAR_3->intf);
 if (FUNC_2(VAR_3->irq, VAR_1))
  return -VAR_0;

 return 0;
}
