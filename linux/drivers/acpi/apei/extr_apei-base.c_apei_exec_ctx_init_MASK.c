
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct apei_exec_ins_type {int dummy; } ;
struct apei_exec_context {void* entries; struct acpi_whea_header* action_table; void* instructions; struct apei_exec_ins_type* ins_table; } ;
struct acpi_whea_header {int dummy; } ;



void FUNC_0(struct apei_exec_context *VAR_0,
   struct apei_exec_ins_type *VAR_1,
   u32 VAR_2,
   struct acpi_whea_header *VAR_3,
   u32 VAR_4)
{
 VAR_0->ins_table = VAR_1;
 VAR_0->instructions = VAR_2;
 VAR_0->action_table = VAR_3;
 VAR_0->entries = VAR_4;
}
