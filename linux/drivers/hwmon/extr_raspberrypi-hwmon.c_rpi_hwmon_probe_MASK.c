
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_hwmon_data {int hwmon_dev; int get_values_poll_work; int fw; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,struct rpi_hwmon_data*,int *,int *) ;
 struct rpi_hwmon_data* FUNC_4 (struct device*,int,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct platform_device*,struct rpi_hwmon_data*) ;
 int VAR_4 ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct rpi_hwmon_data *VAR_7;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;


 VAR_7->fw = FUNC_2(VAR_6->parent);

 VAR_7->hwmon_dev = FUNC_3(VAR_6, "rpi_volt",
              VAR_7,
              &VAR_4,
              ((void*)0));

 FUNC_0(&VAR_7->get_values_poll_work, VAR_3);
 FUNC_5(VAR_5, VAR_7);

 if (!FUNC_1(VAR_7->hwmon_dev))
  FUNC_6(&VAR_7->get_values_poll_work, 2 * VAR_2);

 return FUNC_1(VAR_7->hwmon_dev);
}
