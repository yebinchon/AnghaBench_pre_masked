
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;

 FUNC_1(VAR_1, "Releasing ccree resources...\n");

 FUNC_0(VAR_0);

 FUNC_2(VAR_1, "ARM ccree device terminated\n");

 return 0;
}
