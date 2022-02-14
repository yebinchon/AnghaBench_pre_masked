
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_entry {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,struct property_entry const*) ;

int FUNC_1(struct platform_device *VAR_0,
       const struct property_entry *VAR_1)
{
 return FUNC_0(&VAR_0->dev, VAR_1);
}
