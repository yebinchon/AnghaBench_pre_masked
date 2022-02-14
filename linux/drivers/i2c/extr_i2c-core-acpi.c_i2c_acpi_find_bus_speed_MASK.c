
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i2c_board_info {int dummy; } ;
struct i2c_acpi_lookup {scalar_t__ min_speed; int index; struct i2c_board_info* info; int search_handle; } ;
struct device {int dummy; } ;
typedef int lookup ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ,int *,struct i2c_acpi_lookup*,int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int VAR_4 ;
 int FUNC_5 (struct i2c_acpi_lookup*,int ,int) ;

u32 FUNC_6(struct device *VAR_5)
{
 struct i2c_acpi_lookup VAR_6;
 struct i2c_board_info VAR_7;
 acpi_status VAR_8;

 if (!FUNC_4(VAR_5))
  return 0;

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.search_handle = FUNC_1(VAR_5);
 VAR_6.min_speed = VAR_3;
 VAR_6.info = &VAR_7;
 VAR_6.index = -1;

 VAR_8 = FUNC_2(VAR_1, VAR_0,
         VAR_2,
         VAR_4, ((void*)0),
         &VAR_6, ((void*)0));

 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_5, "unable to find I2C bus speed from ACPI\n");
  return 0;
 }

 return VAR_6.min_speed != VAR_3 ? VAR_6.min_speed : 0;
}
