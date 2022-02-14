
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mlxreg_led_priv_data {struct mlxreg_core_platform_data* pdata; struct platform_device* pdev; int access_lock; } ;
struct mlxreg_core_platform_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct mlxreg_core_platform_data* FUNC_1 (int *) ;
 struct mlxreg_led_priv_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct mlxreg_led_priv_data*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct mlxreg_core_platform_data *VAR_4;
 struct mlxreg_led_priv_data *VAR_5;

 VAR_4 = FUNC_1(&VAR_3->dev);
 if (!VAR_4) {
  FUNC_0(&VAR_3->dev, "Failed to get platform data.\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(&VAR_3->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_4(&VAR_5->access_lock);
 VAR_5->pdev = VAR_3;
 VAR_5->pdata = VAR_4;

 return FUNC_3(VAR_5);
}
