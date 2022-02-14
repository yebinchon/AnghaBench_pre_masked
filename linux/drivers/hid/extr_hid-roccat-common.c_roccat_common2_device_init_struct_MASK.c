
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct roccat_common2_device {int lock; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct usb_device *VAR_0,
  struct roccat_common2_device *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 return 0;
}
