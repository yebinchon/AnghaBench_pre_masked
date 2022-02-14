
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_driver* driver; } ;
struct pardevice {int name; TYPE_1__ dev; } ;
struct device_driver {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pardevice *VAR_1)
{
 struct device_driver *VAR_2 = VAR_1->dev.driver;
 int VAR_3 = FUNC_0(VAR_2->name);

 if (FUNC_1(VAR_1->name, VAR_2->name, VAR_3))
  return -VAR_0;

 return 0;
}
