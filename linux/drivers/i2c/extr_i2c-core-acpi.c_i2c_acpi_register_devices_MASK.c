
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int *,struct i2c_adapter*,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

void FUNC_4(struct i2c_adapter *VAR_4)
{
 acpi_status VAR_5;

 if (!FUNC_3(&VAR_4->dev))
  return;

 VAR_5 = FUNC_1(VAR_1, VAR_0,
         VAR_2,
         VAR_3, ((void*)0),
         VAR_4, ((void*)0));
 if (FUNC_0(VAR_5))
  FUNC_2(&VAR_4->dev, "failed to enumerate I2C slaves\n");
}
