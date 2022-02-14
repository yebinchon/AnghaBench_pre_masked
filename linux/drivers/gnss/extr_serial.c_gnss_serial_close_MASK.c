
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dev; } ;
struct gnss_serial {struct serdev_device* serdev; } ;
struct gnss_device {int dummy; } ;


 struct gnss_serial* FUNC_0 (struct gnss_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct serdev_device*) ;

__attribute__((used)) static void FUNC_3(struct gnss_device *VAR_0)
{
 struct gnss_serial *VAR_1 = FUNC_0(VAR_0);
 struct serdev_device *VAR_2 = VAR_1->serdev;

 FUNC_2(VAR_2);

 FUNC_1(&VAR_2->dev);
}
