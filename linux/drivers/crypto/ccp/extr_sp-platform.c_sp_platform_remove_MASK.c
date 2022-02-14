
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_device {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 struct sp_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct sp_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct sp_device *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2);

 FUNC_1(VAR_1, "disabled\n");

 return 0;
}
