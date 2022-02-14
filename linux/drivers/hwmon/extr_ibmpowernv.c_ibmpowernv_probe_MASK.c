
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct platform_data {int attr_groups; scalar_t__ nr_sensor_groups; scalar_t__ sensors_count; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct platform_device*) ;
 struct device* FUNC_2 (int *,int ,struct platform_data*,int ) ;
 struct platform_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct platform_device*,struct platform_data*) ;
 int FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct platform_data *VAR_4;
 struct device *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(&VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 FUNC_4(VAR_3, VAR_4);
 VAR_4->sensors_count = 0;
 VAR_4->nr_sensor_groups = 0;
 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6)
  return VAR_6;


 VAR_5 = FUNC_2(&VAR_3->dev, VAR_0,
          VAR_4,
          VAR_4->attr_groups);

 return FUNC_0(VAR_5);
}
