
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dev; } ;
struct gnss_serial {int gdev; struct serdev_device* serdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gnss_serial*,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct gnss_serial *VAR_2)
{
 struct serdev_device *VAR_3 = VAR_2->serdev;

 FUNC_1(VAR_2->gdev);

 if (FUNC_0(VAR_0))
  FUNC_3(&VAR_3->dev);
 else
  FUNC_2(VAR_2, VAR_1);
}
