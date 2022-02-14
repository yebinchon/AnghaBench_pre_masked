
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int name; } ;
struct device {int dummy; } ;


 scalar_t__ strcmp (int ,char const*) ;
 struct platform_device* to_platform_device (struct device*) ;

__attribute__((used)) static int pdev_match_name(struct device *dev, const void *data)
{
 struct platform_device *pdev = to_platform_device(dev);
 const char *name = data;

 return strcmp(pdev->name, name) == 0;
}
