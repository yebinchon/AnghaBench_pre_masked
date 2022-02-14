
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_table_header {int length; } ;
struct acpi_table_desc {int length; int pointer; } ;
struct TYPE_2__ {struct acpi_table_desc* tables; } ;


 struct acpi_table_header* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct acpi_table_header*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (struct acpi_table_desc*,int ,int ,struct acpi_table_header*) ;
 int FUNC_5 (struct acpi_table_desc*) ;
 int FUNC_6 (struct acpi_table_header*,int ,int ) ;

struct acpi_table_header *FUNC_7(u32 VAR_4)
{
 struct acpi_table_header *VAR_5;
 struct acpi_table_desc *VAR_6;

 VAR_6 = &VAR_3.tables[VAR_4];

 VAR_5 = FUNC_0(VAR_6->length);
 if (!VAR_5) {
  FUNC_1((VAR_1, "Could not copy DSDT of length 0x%X",
       VAR_6->length));
  return (((void*)0));
 }

 FUNC_6(VAR_5, VAR_6->pointer, VAR_6->length);
 FUNC_5(VAR_6);

 FUNC_4(&VAR_3.
          tables[VAR_2],
          FUNC_3(VAR_5),
          VAR_0,
          VAR_5);

 FUNC_2(("Forced DSDT copy: length 0x%05X copied locally, original unmapped", VAR_5->length));

 return (VAR_5);
}
