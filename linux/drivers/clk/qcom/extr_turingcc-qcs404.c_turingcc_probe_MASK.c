
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 int VAR_2;

 FUNC_5(&VAR_1->dev);
 VAR_2 = FUNC_2(&VAR_1->dev);
 if (VAR_2)
  goto disable_pm_runtime;

 VAR_2 = FUNC_1(&VAR_1->dev, ((void*)0));
 if (VAR_2 < 0) {
  FUNC_0(&VAR_1->dev, "failed to acquire iface clock\n");
  goto destroy_pm_clk;
 }

 VAR_2 = FUNC_6(VAR_1, &VAR_0);
 if (VAR_2 < 0)
  goto destroy_pm_clk;

 return 0;

destroy_pm_clk:
 FUNC_3(&VAR_1->dev);

disable_pm_runtime:
 FUNC_4(&VAR_1->dev);

 return VAR_2;
}
