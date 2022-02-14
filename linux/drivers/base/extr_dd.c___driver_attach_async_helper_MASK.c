
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {int name; } ;
struct device {int parent; int driver; TYPE_1__* p; } ;
typedef int async_cookie_t ;
struct TYPE_2__ {int dead; struct device_driver* async_driver; } ;


 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (struct device_driver*,struct device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, async_cookie_t VAR_1)
{
 struct device *VAR_2 = VAR_0;
 struct device_driver *VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_2, VAR_2->parent);

 VAR_3 = VAR_2->p->async_driver;





 if (!VAR_2->p->dead && !VAR_2->driver)
  VAR_4 = FUNC_3(VAR_3, VAR_2);

 FUNC_1(VAR_2, VAR_2->parent);

 FUNC_2(VAR_2, "driver %s async attach completed: %d\n", VAR_3->name, VAR_4);

 FUNC_4(VAR_2);
}
