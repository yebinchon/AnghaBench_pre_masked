
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ length; } ;
struct acpi_table_lpit {TYPE_1__ header; } ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct acpi_table_header**) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3(void)
{
 acpi_status VAR_1;
 struct acpi_table_lpit *VAR_2;

 VAR_1 = FUNC_1(VAR_0, 0, (struct acpi_table_header **)&VAR_2);

 if (FUNC_0(VAR_1))
  return;

 FUNC_2((u64)VAR_2 + sizeof(*VAR_2),
       (u64)VAR_2 + VAR_2->header.length);
}
