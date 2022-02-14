
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbtouch_usb {int is_open; TYPE_2__* interface; int pm_mutex; int irq; TYPE_1__* type; } ;
struct input_dev {int dummy; } ;
struct TYPE_5__ {scalar_t__ needs_remote_wakeup; } ;
struct TYPE_4__ {int irq_always; } ;


 struct usbtouch_usb* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_0)
{
 struct usbtouch_usb *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_1(&VAR_1->pm_mutex);
 if (!VAR_1->type->irq_always)
  FUNC_5(VAR_1->irq);
 VAR_1->is_open = 0;
 FUNC_2(&VAR_1->pm_mutex);

 VAR_2 = FUNC_3(VAR_1->interface);
 VAR_1->interface->needs_remote_wakeup = 0;
 if (!VAR_2)
  FUNC_4(VAR_1->interface);
}
