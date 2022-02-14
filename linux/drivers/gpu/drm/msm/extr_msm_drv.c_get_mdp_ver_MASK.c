
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 scalar_t__ FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;

 return (int) (unsigned long) FUNC_0(VAR_1);
}
