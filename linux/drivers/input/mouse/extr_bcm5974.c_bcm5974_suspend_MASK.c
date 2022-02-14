
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct bcm5974 {int pm_mutex; scalar_t__ opened; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct bcm5974*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bcm5974* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct bcm5974 *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->pm_mutex);

 if (VAR_2->opened)
  FUNC_0(VAR_2);

 FUNC_2(&VAR_2->pm_mutex);

 return 0;
}
