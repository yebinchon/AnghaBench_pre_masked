
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct i2c_board_info {int addr; } ;
struct i2c_acpi_lookup {int device_handle; struct i2c_board_info* info; } ;
struct TYPE_2__ {int present; } ;
struct acpi_device {TYPE_1__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct acpi_device*,struct list_head*,int ,struct i2c_acpi_lookup*) ;
 int FUNC_4 (struct acpi_device*) ;
 scalar_t__ FUNC_5 (struct acpi_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct i2c_board_info*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_4,
         struct i2c_acpi_lookup *VAR_5)
{
 struct i2c_board_info *VAR_6 = VAR_5->info;
 struct list_head VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_4) || !VAR_4->status.present)
  return -VAR_0;

 if (FUNC_5(VAR_4, VAR_3) == 0)
  return -VAR_1;

 FUNC_6(VAR_6, 0, sizeof(*VAR_6));
 VAR_5->device_handle = FUNC_4(VAR_4);


 FUNC_0(&VAR_7);
 VAR_8 = FUNC_3(VAR_4, &VAR_7,
         VAR_2, VAR_5);
 FUNC_2(&VAR_7);

 if (VAR_8 < 0 || !VAR_6->addr)
  return -VAR_0;

 return 0;
}
