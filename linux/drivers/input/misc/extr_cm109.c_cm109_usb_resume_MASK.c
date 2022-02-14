
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct cm109_dev {int pm_mutex; } ;


 int FUNC_0 (struct cm109_dev*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct cm109_dev* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0)
{
 struct cm109_dev *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(&VAR_0->dev, "cm109: usb_resume\n");

 FUNC_2(&VAR_1->pm_mutex);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->pm_mutex);

 return 0;
}
