
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ devt; } ;
typedef scalar_t__ dev_t ;



int FUNC_0(struct device *VAR_0, const void *VAR_1)
{
 return VAR_0->devt == *(dev_t *)VAR_1;
}
