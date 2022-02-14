
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usbtouch_usb {int is_open; TYPE_3__* interface; int pm_mutex; TYPE_2__* irq; TYPE_1__* type; } ;
struct input_dev {int dummy; } ;
struct TYPE_8__ {int needs_remote_wakeup; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int irq_always; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usbtouch_usb* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_7(struct input_dev *VAR_2)
{
 struct usbtouch_usb *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_3->irq->dev = FUNC_1(VAR_3->interface);

 VAR_4 = FUNC_4(VAR_3->interface) ? -VAR_0 : 0;
 if (VAR_4 < 0)
  goto out;

 FUNC_2(&VAR_3->pm_mutex);
 if (!VAR_3->type->irq_always) {
  if (FUNC_6(VAR_3->irq, VAR_1)) {
   VAR_4 = -VAR_0;
   goto out_put;
  }
 }

 VAR_3->interface->needs_remote_wakeup = 1;
 VAR_3->is_open = 1;
out_put:
 FUNC_3(&VAR_3->pm_mutex);
 FUNC_5(VAR_3->interface);
out:
 return VAR_4;
}
