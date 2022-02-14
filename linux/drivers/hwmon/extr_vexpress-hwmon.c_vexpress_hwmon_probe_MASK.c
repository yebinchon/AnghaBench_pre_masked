
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vexpress_hwmon_type {int attr_groups; int name; } ;
struct vexpress_hwmon_data {int hwmon_dev; int reg; } ;
struct platform_device {int dev; } ;
struct of_device_id {struct vexpress_hwmon_type* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,struct vexpress_hwmon_data*,int ) ;
 struct vexpress_hwmon_data* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 struct of_device_id* FUNC_6 (int ,int *) ;
 int FUNC_7 (struct platform_device*,struct vexpress_hwmon_data*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 const struct of_device_id *VAR_5;
 struct vexpress_hwmon_data *VAR_6;
 const struct vexpress_hwmon_type *VAR_7;

 VAR_6 = FUNC_4(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 FUNC_7(VAR_4, VAR_6);

 VAR_5 = FUNC_6(VAR_3, &VAR_4->dev);
 if (!VAR_5)
  return -VAR_0;
 VAR_7 = VAR_5->data;

 VAR_6->reg = FUNC_5(&VAR_4->dev);
 if (FUNC_0(VAR_6->reg))
  return FUNC_1(VAR_6->reg);

 VAR_6->hwmon_dev = FUNC_3(&VAR_4->dev,
   VAR_7->name, VAR_6, VAR_7->attr_groups);

 return FUNC_2(VAR_6->hwmon_dev);
}
