
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; scalar_t__ owner; scalar_t__ name; } ;
struct gio_driver {TYPE_1__ driver; scalar_t__ owner; scalar_t__ name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1(struct gio_driver *VAR_1)
{

 if (!VAR_1->driver.name)
  VAR_1->driver.name = VAR_1->name;
 if (!VAR_1->driver.owner)
  VAR_1->driver.owner = VAR_1->owner;
 VAR_1->driver.bus = &VAR_0;


 return FUNC_0(&VAR_1->driver);
}
