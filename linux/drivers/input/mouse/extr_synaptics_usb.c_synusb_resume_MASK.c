
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct synusb {int flags; int pm_mutex; int urb; scalar_t__ is_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct synusb* FUNC_2 (struct usb_interface*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_3)
{
 struct synusb *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 0;

 FUNC_0(&VAR_4->pm_mutex);

 if ((VAR_4->is_open || (VAR_4->flags & VAR_2)) &&
     FUNC_3(VAR_4->urb, VAR_1) < 0) {
  VAR_5 = -VAR_0;
 }

 FUNC_1(&VAR_4->pm_mutex);

 return VAR_5;
}
