
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dev; } ;
struct gnss_serial {int speed; struct serdev_device* serdev; } ;
struct gnss_device {int dummy; } ;


 struct gnss_serial* FUNC_0 (struct gnss_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct serdev_device*) ;
 int FUNC_4 (struct serdev_device*) ;
 int FUNC_5 (struct serdev_device*,int ) ;
 int FUNC_6 (struct serdev_device*,int) ;

__attribute__((used)) static int FUNC_7(struct gnss_device *VAR_0)
{
 struct gnss_serial *VAR_1 = FUNC_0(VAR_0);
 struct serdev_device *VAR_2 = VAR_1->serdev;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_5(VAR_2, VAR_1->speed);
 FUNC_6(VAR_2, 0);

 VAR_3 = FUNC_1(&VAR_2->dev);
 if (VAR_3 < 0) {
  FUNC_2(&VAR_2->dev);
  goto err_close;
 }

 return 0;

err_close:
 FUNC_3(VAR_2);

 return VAR_3;
}
