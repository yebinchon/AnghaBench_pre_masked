
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;

 FUNC_0(VAR_2, &VAR_0);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 return 0;
}
