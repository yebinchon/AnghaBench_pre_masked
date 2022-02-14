
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct i2c_client {int dev; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct acpi_device*,struct list_head*,int ,int*) ;
 int FUNC_4 (struct acpi_device*,int ) ;
 int VAR_1 ;

int FUNC_5(struct i2c_client *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_0(&VAR_2->dev);
 struct list_head VAR_4;
 int VAR_5 = -VAR_0;
 int VAR_6;

 FUNC_1(&VAR_4);

 VAR_6 = FUNC_3(VAR_3, &VAR_4,
         VAR_1, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_2(&VAR_4);

 if (VAR_5 == -VAR_0)
  VAR_5 = FUNC_4(VAR_3, 0);

 return VAR_5;
}
