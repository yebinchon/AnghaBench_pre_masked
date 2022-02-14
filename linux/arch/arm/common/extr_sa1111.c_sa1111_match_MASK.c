
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_driver {int devid; } ;
struct sa1111_dev {int devid; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct sa1111_driver* FUNC_0 (struct device_driver*) ;
 struct sa1111_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct sa1111_dev *VAR_2 = FUNC_1(VAR_0);
 struct sa1111_driver *VAR_3 = FUNC_0(VAR_1);

 return !!(VAR_2->devid & VAR_3->devid);
}
