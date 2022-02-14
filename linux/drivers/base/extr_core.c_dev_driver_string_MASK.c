
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_driver {char const* name; } ;
struct device {TYPE_2__* class; TYPE_1__* bus; int driver; } ;
struct TYPE_4__ {char const* name; } ;
struct TYPE_3__ {char const* name; } ;


 struct device_driver* FUNC_0 (int ) ;

const char *FUNC_1(const struct device *VAR_0)
{
 struct device_driver *VAR_1;





 VAR_1 = FUNC_0(VAR_0->driver);
 return VAR_1 ? VAR_1->name :
   (VAR_0->bus ? VAR_0->bus->name :
   (VAR_0->class ? VAR_0->class->name : ""));
}
