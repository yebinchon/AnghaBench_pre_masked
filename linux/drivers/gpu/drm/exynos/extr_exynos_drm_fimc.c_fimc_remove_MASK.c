
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct fimc_context {int dummy; } ;


 int FUNC_0 (struct device*,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct fimc_context*) ;
 struct fimc_context* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct fimc_context *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_2, &VAR_0);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);

 FUNC_1(VAR_3);

 return 0;
}
