
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct device {int parent; int driver; TYPE_1__* p; } ;
struct TYPE_2__ {int dead; } ;


 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device_driver*,struct device*) ;

int FUNC_3(struct device_driver *VAR_0, struct device *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_1, VAR_1->parent);





 if (!VAR_1->p->dead && !VAR_1->driver)
  VAR_2 = FUNC_2(VAR_0, VAR_1);

 FUNC_1(VAR_1, VAR_1->parent);

 return VAR_2;
}
