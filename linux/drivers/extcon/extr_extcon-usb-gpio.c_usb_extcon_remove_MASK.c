
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_extcon_info {int wq_detcable; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct usb_extcon_info* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct usb_extcon_info *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->wq_detcable);
 FUNC_1(&VAR_0->dev, 0);

 return 0;
}
