
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct pxrc {int pm_mutex; int urb; scalar_t__ is_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pxrc* FUNC_2 (struct usb_interface*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_2)
{
 struct pxrc *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = 0;

 FUNC_0(&VAR_3->pm_mutex);
 if (VAR_3->is_open && FUNC_3(VAR_3->urb, VAR_1) < 0)
  VAR_4 = -VAR_0;

 FUNC_1(&VAR_3->pm_mutex);
 return VAR_4;
}
