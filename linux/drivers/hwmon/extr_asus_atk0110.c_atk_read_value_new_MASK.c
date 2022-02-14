
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef int u64 ;
struct device {int dummy; } ;
struct atk_sensor_data {int id; struct atk_data* data; } ;
struct atk_data {TYPE_2__* acpi_dev; } ;
struct atk_acpi_ret_buffer {scalar_t__ flags; int value; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (union acpi_object*) ;
 int FUNC_2 (union acpi_object*) ;
 union acpi_object* FUNC_3 (struct atk_data*,int ) ;
 int FUNC_4 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct atk_sensor_data *VAR_1, u64 *VAR_2)
{
 struct atk_data *VAR_3 = VAR_1->data;
 struct device *VAR_4 = &VAR_3->acpi_dev->dev;
 union acpi_object *VAR_5;
 struct atk_acpi_ret_buffer *VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_3, VAR_1->id);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = (struct atk_acpi_ret_buffer *)VAR_5->buffer.pointer;
 if (VAR_6->flags == 0) {





  FUNC_4(VAR_4, "Read failed, sensor = %#llx\n", VAR_1->id);
  VAR_7 = -VAR_0;
  goto out;
 }

 *VAR_2 = VAR_6->value;
out:
 FUNC_0(VAR_5);
 return VAR_7;
}
