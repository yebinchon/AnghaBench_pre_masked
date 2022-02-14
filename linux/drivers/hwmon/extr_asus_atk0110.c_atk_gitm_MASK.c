
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; int * pointer; } ;
union acpi_object {TYPE_2__ buffer; int type; } ;
typedef int u8 ;
typedef int u64 ;
struct device {int dummy; } ;
struct atk_data {int read_handle; TYPE_1__* acpi_dev; } ;
struct atk_acpi_input_buf {scalar_t__ param2; scalar_t__ param1; int id; } ;
struct acpi_object_list {int count; void* pointer; } ;
struct acpi_buffer {union acpi_object* pointer; int length; } ;
typedef int buf ;
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

__attribute__((used)) static union acpi_object *FUNC_5(struct atk_data *VAR_4, u64 VAR_5)
{
 struct device *VAR_6 = &VAR_4->acpi_dev->dev;
 struct atk_acpi_input_buf VAR_7;
 union acpi_object VAR_8;
 struct acpi_object_list VAR_9;
 struct acpi_buffer VAR_10;
 union acpi_object *VAR_11;
 acpi_status VAR_12;

 VAR_7.id = VAR_5;
 VAR_7.param1 = 0;
 VAR_7.param2 = 0;

 VAR_8.type = VAR_1;
 VAR_8.buffer.pointer = (u8 *)&VAR_7;
 VAR_8.buffer.length = sizeof(VAR_7);

 VAR_9.count = 1;
 VAR_9.pointer = (void *)&VAR_8;

 VAR_10.length = VAR_0;
 VAR_12 = FUNC_2(VAR_4->read_handle, ((void*)0), &VAR_9,
   &VAR_10, VAR_1);
 if (VAR_12 != VAR_2) {
  FUNC_4(VAR_6, "GITM[%#llx] ACPI exception: %s\n", VAR_5,
    FUNC_3(VAR_12));
  return FUNC_1(-VAR_3);
 }
 VAR_11 = VAR_10.pointer;


 if (VAR_11->buffer.length < 8) {
  FUNC_4(VAR_6, "Unexpected ASBF length: %u\n",
    VAR_11->buffer.length);
  FUNC_0(VAR_11);
  return FUNC_1(-VAR_3);
 }
 return VAR_11;
}
