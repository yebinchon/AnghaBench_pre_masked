
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct koneplus_device {int koneplus_lock; } ;


 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct koneplus_device*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_0,
  struct koneplus_device *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_1->koneplus_lock);

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 FUNC_1(VAR_1, VAR_2);

 return 0;
}
