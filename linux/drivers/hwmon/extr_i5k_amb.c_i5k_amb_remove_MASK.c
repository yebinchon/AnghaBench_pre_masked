
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int dev_attr; } ;
struct i5k_amb_data {int num_attrs; int amb_len; int amb_base; int amb_mmio; struct i5k_amb_data* attrs; TYPE_1__ s_attr; int hwmon_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i5k_amb_data*) ;
 struct i5k_amb_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 int VAR_2;
 struct i5k_amb_data *VAR_3 = FUNC_4(VAR_1);

 FUNC_1(VAR_3->hwmon_dev);
 FUNC_0(&VAR_1->dev, &VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_3->num_attrs; VAR_2++)
  FUNC_0(&VAR_1->dev, &VAR_3->attrs[VAR_2].s_attr.dev_attr);
 FUNC_3(VAR_3->attrs);
 FUNC_2(VAR_3->amb_mmio);
 FUNC_5(VAR_3->amb_base, VAR_3->amb_len);
 FUNC_3(VAR_3);
 return 0;
}
