
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dev; } ;
struct gnss_serial {int gdev; struct serdev_device* serdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gnss_serial*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct gnss_serial *VAR_3)
{
 struct serdev_device *VAR_4 = VAR_3->serdev;
 int VAR_5;

 if (FUNC_0(VAR_0)) {
  FUNC_4(&VAR_4->dev);
 } else {
  VAR_5 = FUNC_2(VAR_3, VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_3->gdev);
 if (VAR_5)
  goto err_disable_rpm;

 return 0;

err_disable_rpm:
 if (FUNC_0(VAR_0))
  FUNC_3(&VAR_4->dev);
 else
  FUNC_2(VAR_3, VAR_2);

 return VAR_5;
}
