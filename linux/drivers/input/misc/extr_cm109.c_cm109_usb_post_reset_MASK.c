
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct cm109_dev {int pm_mutex; scalar_t__ resetting; } ;


 int FUNC_0 (struct cm109_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 struct cm109_dev* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_0)
{
 struct cm109_dev *VAR_1 = FUNC_3(VAR_0);

 VAR_1->resetting = 0;
 FUNC_2();

 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->pm_mutex);

 return 0;
}
