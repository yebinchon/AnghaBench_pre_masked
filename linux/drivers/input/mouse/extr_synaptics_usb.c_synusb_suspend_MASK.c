
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct synusb {int pm_mutex; int urb; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct synusb* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct synusb *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->pm_mutex);
 FUNC_3(VAR_2->urb);
 FUNC_1(&VAR_2->pm_mutex);

 return 0;
}
