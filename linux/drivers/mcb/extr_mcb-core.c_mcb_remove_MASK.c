
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module {int dummy; } ;
struct mcb_driver {int (* remove ) (struct mcb_device*) ;} ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct mcb_device {TYPE_3__ dev; } ;
struct device {int driver; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {struct module* owner; } ;


 int FUNC_0 (struct module*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct mcb_device*) ;
 struct mcb_device* FUNC_3 (struct device*) ;
 struct mcb_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct mcb_driver *VAR_1 = FUNC_4(VAR_0->driver);
 struct mcb_device *VAR_2 = FUNC_3(VAR_0);
 struct module *VAR_3;

 VAR_1->remove(VAR_2);

 VAR_3 = VAR_2->dev.parent->driver->owner;
 FUNC_0(VAR_3);

 FUNC_1(&VAR_2->dev);

 return 0;
}
