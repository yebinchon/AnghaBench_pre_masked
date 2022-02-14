
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dummy; } ;
struct backend_info {struct xenbus_device* dev; } ;



struct xenbus_device *FUNC_0(struct backend_info *VAR_0)
{
 return VAR_0->dev;
}
