
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_device {TYPE_1__* spec; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ pool_ns; } ;


 struct rbd_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct rbd_device *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%s\n", VAR_3->spec->pool_ns ?: "");
}
