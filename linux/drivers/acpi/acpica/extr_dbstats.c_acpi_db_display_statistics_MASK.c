
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef union acpi_object {int dummy; } acpi_object ;
typedef union acpi_generic_state {int dummy; } acpi_generic_state ;
typedef int u32 ;
struct acpi_update_state {int dummy; } ;
struct acpi_thread_state {int dummy; } ;
struct acpi_scope_state {int dummy; } ;
struct acpi_result_values {int dummy; } ;
struct acpi_pscope_state {int dummy; } ;
struct acpi_pkg_state {int dummy; } ;
struct acpi_parse_obj_named {int dummy; } ;
struct acpi_parse_obj_common {int dummy; } ;
struct acpi_parse_obj_asl {int dummy; } ;
struct acpi_object_thermal_zone {int dummy; } ;
struct acpi_object_string {int dummy; } ;
struct acpi_object_region_field {int dummy; } ;
struct acpi_object_region {int dummy; } ;
struct acpi_object_reference {int dummy; } ;
struct acpi_object_processor {int dummy; } ;
struct acpi_object_power_resource {int dummy; } ;
struct acpi_object_package {int dummy; } ;
struct acpi_object_notify_handler {int dummy; } ;
struct acpi_object_mutex {int dummy; } ;
struct acpi_object_method {int dummy; } ;
struct acpi_object_integer {int dummy; } ;
struct acpi_object_index_field {int dummy; } ;
struct acpi_object_extra {int dummy; } ;
struct acpi_object_event {int dummy; } ;
struct acpi_object_device {int dummy; } ;
struct acpi_object_data {int dummy; } ;
struct acpi_object_common {int dummy; } ;
struct acpi_object_buffer_field {int dummy; } ;
struct acpi_object_buffer {int dummy; } ;
struct acpi_object_bank_field {int dummy; } ;
struct acpi_object_addr_handler {int dummy; } ;
struct acpi_notify_info {int dummy; } ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_control_state {int dummy; } ;
struct acpi_common_state {int dummy; } ;
typedef int acpi_status ;
struct TYPE_2__ {int use_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;

acpi_status FUNC_9(char *VAR_23)
{
 u32 VAR_24;
 u32 VAR_25;

 FUNC_8(VAR_23);
 VAR_25 = FUNC_3(VAR_23, VAR_4);
 if (VAR_25 == VAR_1) {
  FUNC_4("Invalid or unsupported argument\n");
  return (VAR_3);
 }

 switch (VAR_25) {
 case 134:




  break;

 case 128:

  FUNC_4("ACPI Table Information (not implemented):\n\n");
  break;

 case 131:

  FUNC_1();

  FUNC_4
      ("\nObjects defined in the current namespace:\n\n");

  FUNC_4("%16.16s %10.10s %10.10s\n",
          "ACPI_TYPE", "NODES", "OBJECTS");

  for (VAR_24 = 0; VAR_24 < VAR_2; VAR_24++) {
   FUNC_4("%16.16s %10u %10u\n",
           FUNC_7(VAR_24),
           VAR_10[VAR_24],
           VAR_16[VAR_24]);
  }

  FUNC_4("%16.16s %10u %10u\n", "Misc/Unknown",
          VAR_11,
          VAR_17);

  FUNC_4("%16.16s %10u %10u\n", "TOTALS:",
          VAR_14, VAR_15);
  break;

 case 133:
  break;

 case 132:

  FUNC_4("\nMiscellaneous Statistics:\n\n");
  FUNC_4("%-28s:     %7u\n", "Calls to AcpiPsFind",
          VAR_19);
  FUNC_4("%-28s:     %7u\n", "Calls to AcpiNsLookup",
          VAR_12);

  FUNC_4("\nMutex usage:\n\n");
  for (VAR_24 = 0; VAR_24 < VAR_0; VAR_24++) {
   FUNC_4("%-28s:     %7u\n",
           FUNC_6(VAR_24),
           VAR_9[VAR_24].use_count);
  }
  break;

 case 130:

  FUNC_4("\nInternal object sizes:\n\n");

  FUNC_4("Common         %3d\n",
          (u32)sizeof(struct acpi_object_common));
  FUNC_4("Number         %3d\n",
          (u32)sizeof(struct acpi_object_integer));
  FUNC_4("String         %3d\n",
          (u32)sizeof(struct acpi_object_string));
  FUNC_4("Buffer         %3d\n",
          (u32)sizeof(struct acpi_object_buffer));
  FUNC_4("Package        %3d\n",
          (u32)sizeof(struct acpi_object_package));
  FUNC_4("BufferField    %3d\n",
          (u32)sizeof(struct acpi_object_buffer_field));
  FUNC_4("Device         %3d\n",
          (u32)sizeof(struct acpi_object_device));
  FUNC_4("Event          %3d\n",
          (u32)sizeof(struct acpi_object_event));
  FUNC_4("Method         %3d\n",
          (u32)sizeof(struct acpi_object_method));
  FUNC_4("Mutex          %3d\n",
          (u32)sizeof(struct acpi_object_mutex));
  FUNC_4("Region         %3d\n",
          (u32)sizeof(struct acpi_object_region));
  FUNC_4("PowerResource  %3d\n",
          (u32)sizeof(struct acpi_object_power_resource));
  FUNC_4("Processor      %3d\n",
          (u32)sizeof(struct acpi_object_processor));
  FUNC_4("ThermalZone    %3d\n",
          (u32)sizeof(struct acpi_object_thermal_zone));
  FUNC_4("RegionField    %3d\n",
          (u32)sizeof(struct acpi_object_region_field));
  FUNC_4("BankField      %3d\n",
          (u32)sizeof(struct acpi_object_bank_field));
  FUNC_4("IndexField     %3d\n",
          (u32)sizeof(struct acpi_object_index_field));
  FUNC_4("Reference      %3d\n",
          (u32)sizeof(struct acpi_object_reference));
  FUNC_4("Notify         %3d\n",
          (u32)sizeof(struct acpi_object_notify_handler));
  FUNC_4("AddressSpace   %3d\n",
          (u32)sizeof(struct acpi_object_addr_handler));
  FUNC_4("Extra          %3d\n",
          (u32)sizeof(struct acpi_object_extra));
  FUNC_4("Data           %3d\n",
          (u32)sizeof(struct acpi_object_data));

  FUNC_4("\n");

  FUNC_4("ParseObject    %3d\n",
          (u32)sizeof(struct acpi_parse_obj_common));
  FUNC_4("ParseObjectNamed %3d\n",
          (u32)sizeof(struct acpi_parse_obj_named));
  FUNC_4("ParseObjectAsl %3d\n",
          (u32)sizeof(struct acpi_parse_obj_asl));
  FUNC_4("OperandObject  %3d\n",
          (u32)sizeof(union acpi_operand_object));
  FUNC_4("NamespaceNode  %3d\n",
          (u32)sizeof(struct acpi_namespace_node));
  FUNC_4("AcpiObject     %3d\n",
          (u32)sizeof(union acpi_object));

  FUNC_4("\n");

  FUNC_4("Generic State  %3d\n",
          (u32)sizeof(union acpi_generic_state));
  FUNC_4("Common State   %3d\n",
          (u32)sizeof(struct acpi_common_state));
  FUNC_4("Control State  %3d\n",
          (u32)sizeof(struct acpi_control_state));
  FUNC_4("Update State   %3d\n",
          (u32)sizeof(struct acpi_update_state));
  FUNC_4("Scope State    %3d\n",
          (u32)sizeof(struct acpi_scope_state));
  FUNC_4("Parse Scope    %3d\n",
          (u32)sizeof(struct acpi_pscope_state));
  FUNC_4("Package State  %3d\n",
          (u32)sizeof(struct acpi_pkg_state));
  FUNC_4("Thread State   %3d\n",
          (u32)sizeof(struct acpi_thread_state));
  FUNC_4("Result Values  %3d\n",
          (u32)sizeof(struct acpi_result_values));
  FUNC_4("Notify Info    %3d\n",
          (u32)sizeof(struct acpi_notify_info));
  break;

 case 129:
  break;

 default:

  break;
 }

 FUNC_4("\n");
 return (VAR_3);
}
