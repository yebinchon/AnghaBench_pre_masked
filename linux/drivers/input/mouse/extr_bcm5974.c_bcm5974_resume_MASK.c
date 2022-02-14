
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct bcm5974 {int pm_mutex; scalar_t__ opened; } ;


 int FUNC_0 (struct bcm5974*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bcm5974* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_0)
{
 struct bcm5974 *VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = 0;

 FUNC_1(&VAR_1->pm_mutex);

 if (VAR_1->opened)
  VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_1->pm_mutex);

 return VAR_2;
}
