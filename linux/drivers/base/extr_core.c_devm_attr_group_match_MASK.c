
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union device_attr_group_devres {void* group; } ;
struct device {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, void *VAR_1, void *VAR_2)
{
 return ((union device_attr_group_devres *)VAR_1)->group == VAR_2;
}
