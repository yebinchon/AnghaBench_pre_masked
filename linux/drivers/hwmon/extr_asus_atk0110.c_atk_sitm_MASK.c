
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; int * pointer; } ;
union acpi_object {TYPE_2__ buffer; int type; } ;
typedef int u8 ;
struct device {int dummy; } ;
struct atk_data {int write_handle; TYPE_1__* acpi_dev; } ;
struct atk_acpi_input_buf {int id; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {union acpi_object* pointer; int length; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (union acpi_object*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 union acpi_object* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,struct acpi_object_list*,struct acpi_buffer*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,char*,int,...) ;

__attribute__((used)) static union acpi_object *FUNC_5(struct atk_data *VAR_4,
  struct atk_acpi_input_buf *VAR_5)
{
 struct device *VAR_6 = &VAR_4->acpi_dev->dev;
 struct acpi_object_list VAR_7;
 union acpi_object VAR_8;
 struct acpi_buffer VAR_9;
 union acpi_object *VAR_10;
 acpi_status VAR_11;

 VAR_8.type = VAR_1;
 VAR_8.buffer.pointer = (u8 *)VAR_5;
 VAR_8.buffer.length = sizeof(*VAR_5);

 VAR_7.count = 1;
 VAR_7.pointer = &VAR_8;

 VAR_9.length = VAR_0;
 VAR_11 = FUNC_2(VAR_4->write_handle, ((void*)0), &VAR_7,
   &VAR_9, VAR_1);
 if (VAR_11 != VAR_2) {
  FUNC_4(VAR_6, "SITM[%#x] ACPI exception: %s\n", VAR_5->id,
    FUNC_3(VAR_11));
  return FUNC_1(-VAR_3);
 }
 VAR_10 = VAR_9.pointer;


 if (VAR_10->buffer.length < 8) {
  FUNC_4(VAR_6, "Unexpected ASBF length: %u\n",
    VAR_10->buffer.length);
  FUNC_0(VAR_10);
  return FUNC_1(-VAR_3);
 }
 return VAR_10;
}
