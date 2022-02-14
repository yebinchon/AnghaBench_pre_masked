
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct cm109_dev {int pm_mutex; } ;
struct TYPE_3__ {int event; } ;
typedef TYPE_1__ pm_message_t ;


 int FUNC_0 (struct cm109_dev*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct cm109_dev* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct cm109_dev *VAR_2 = FUNC_4(VAR_0);

 FUNC_1(&VAR_0->dev, "cm109: usb_suspend (event=%d)\n", VAR_1.event);

 FUNC_2(&VAR_2->pm_mutex);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->pm_mutex);

 return 0;
}
