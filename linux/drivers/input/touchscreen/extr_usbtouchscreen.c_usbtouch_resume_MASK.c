
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbtouch_usb {int pm_mutex; int irq; TYPE_1__* type; scalar_t__ is_open; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {scalar_t__ irq_always; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct usbtouch_usb* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_1)
{
 struct usbtouch_usb *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = 0;

 FUNC_0(&VAR_2->pm_mutex);
 if (VAR_2->is_open || VAR_2->type->irq_always)
  VAR_3 = FUNC_3(VAR_2->irq, VAR_0);
 FUNC_1(&VAR_2->pm_mutex);

 return VAR_3;
}
