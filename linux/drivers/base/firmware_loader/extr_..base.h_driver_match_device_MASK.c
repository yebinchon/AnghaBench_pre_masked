
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {TYPE_1__* bus; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* match ) (struct device*,struct device_driver*) ;} ;


 int FUNC_0 (struct device*,struct device_driver*) ;

__attribute__((used)) static inline int FUNC_1(struct device_driver *VAR_0,
          struct device *VAR_1)
{
 return VAR_0->bus->match ? VAR_0->bus->match(VAR_1, VAR_0) : 1;
}
