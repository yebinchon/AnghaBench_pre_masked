
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
struct pcc_cpu {scalar_t__ output_offset; scalar_t__ input_offset; } ;
struct acpi_processor {int handle; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_2 (union acpi_object*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct acpi_processor* FUNC_4 (int ,int) ;
 struct pcc_cpu* FUNC_5 (int ,int) ;
 int FUNC_6 (char*,int,scalar_t__,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(int VAR_8)
{
 acpi_status VAR_9;
 struct acpi_buffer VAR_10 = {VAR_0, ((void*)0)};
 union acpi_object *VAR_11, *VAR_12;
 struct pcc_cpu *VAR_13;
 struct acpi_processor *VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_4(VAR_7, VAR_8);
 VAR_13 = FUNC_5(VAR_5, VAR_8);

 if (!VAR_14)
  return -VAR_4;

 VAR_9 = FUNC_1(VAR_14->handle, "PCCP", ((void*)0), &VAR_10);
 if (FUNC_0(VAR_9))
  return -VAR_4;

 VAR_11 = VAR_10.pointer;
 if (!VAR_11 || VAR_11->type != VAR_2) {
  VAR_15 = -VAR_4;
  goto out_free;
 }

 VAR_12 = &(VAR_11->package.elements[0]);
 if (!VAR_12 || VAR_12->type != VAR_1) {
  VAR_15 = -VAR_4;
  goto out_free;
 }

 VAR_13->input_offset = VAR_12->integer.value;

 VAR_12 = &(VAR_11->package.elements[1]);
 if (!VAR_12 || VAR_12->type != VAR_1) {
  VAR_15 = -VAR_4;
  goto out_free;
 }

 VAR_13->output_offset = VAR_12->integer.value;

 FUNC_3((VAR_6 + VAR_13->input_offset), 0, VAR_3);
 FUNC_3((VAR_6 + VAR_13->output_offset), 0, VAR_3);

 FUNC_6("pcc_get_offset: for CPU %d: pcc_cpu_data "
  "input_offset: 0x%x, pcc_cpu_data output_offset: 0x%x\n",
  VAR_8, VAR_13->input_offset, VAR_13->output_offset);
out_free:
 FUNC_2(VAR_10.pointer);
 return VAR_15;
}
