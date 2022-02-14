
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {TYPE_1__* driver; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* coredump ) (struct device*) ;} ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 FUNC_0(VAR_0);
 VAR_0->driver->coredump(VAR_0);
 FUNC_1(VAR_0);

 return VAR_3;
}
