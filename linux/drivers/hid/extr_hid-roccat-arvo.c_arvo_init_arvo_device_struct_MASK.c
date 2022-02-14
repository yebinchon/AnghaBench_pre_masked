
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct arvo_device {int actual_profile; int arvo_lock; } ;


 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_0,
  struct arvo_device *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->arvo_lock);

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_1->actual_profile = VAR_2;

 return 0;
}
