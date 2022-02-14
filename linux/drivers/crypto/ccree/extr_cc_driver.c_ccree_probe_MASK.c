
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = &VAR_0->dev;


 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_2, "ARM ccree device initialized\n");

 return 0;
}
