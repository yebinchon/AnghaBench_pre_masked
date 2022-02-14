
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct pxrc {int urb; int pm_mutex; } ;


 int FUNC_0 (int *) ;
 struct pxrc* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_0)
{
 struct pxrc *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->pm_mutex);
 FUNC_2(VAR_1->urb);
 return 0;
}
