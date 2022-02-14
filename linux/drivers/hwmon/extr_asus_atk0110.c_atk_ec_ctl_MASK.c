
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
struct device {int dummy; } ;
struct atk_data {TYPE_2__* acpi_dev; } ;
struct atk_acpi_ret_buffer {scalar_t__ flags; } ;
struct atk_acpi_input_buf {int param1; scalar_t__ param2; int id; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (union acpi_object*) ;
 int FUNC_2 (union acpi_object*) ;
 union acpi_object* FUNC_3 (struct atk_data*,struct atk_acpi_input_buf*) ;
 int FUNC_4 (struct device*,char*,char*) ;
 int FUNC_5 (struct device*,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct atk_data *VAR_2, int VAR_3)
{
 struct device *VAR_4 = &VAR_2->acpi_dev->dev;
 union acpi_object *VAR_5;
 struct atk_acpi_input_buf VAR_6;
 struct atk_acpi_ret_buffer *VAR_7;
 int VAR_8 = 0;

 VAR_6.id = VAR_0;
 VAR_6.param1 = VAR_3;
 VAR_6.param2 = 0;

 VAR_5 = FUNC_3(VAR_2, &VAR_6);
 if (FUNC_1(VAR_5)) {
  FUNC_4(VAR_4, "Failed to %sable the EC\n",
    VAR_3 ? "en" : "dis");
  return FUNC_2(VAR_5);
 }
 VAR_7 = (struct atk_acpi_ret_buffer *)VAR_5->buffer.pointer;
 if (VAR_7->flags == 0) {
  FUNC_4(VAR_4, "Failed to %sable the EC\n",
    VAR_3 ? "en" : "dis");
  VAR_8 = -VAR_1;
 } else {
  FUNC_5(VAR_4, "EC %sabled\n",
    VAR_3 ? "en" : "dis");
 }

 FUNC_0(VAR_5);
 return VAR_8;
}
