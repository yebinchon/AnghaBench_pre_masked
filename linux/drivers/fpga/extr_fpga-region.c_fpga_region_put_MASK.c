
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_2__* parent; } ;
struct fpga_region {int mutex; struct device dev; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int owner; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct fpga_region *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;

 FUNC_0(VAR_1, "put\n");

 FUNC_1(VAR_1->parent->driver->owner);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_0->mutex);
}
