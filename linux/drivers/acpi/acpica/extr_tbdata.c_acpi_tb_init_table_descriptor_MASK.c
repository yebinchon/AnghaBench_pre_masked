
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct acpi_table_header {int signature; int length; } ;
struct TYPE_2__ {int ascii; } ;
struct acpi_table_desc {TYPE_1__ signature; int flags; int length; int address; } ;
typedef int acpi_physical_address ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct acpi_table_desc*,int ,int) ;

void
FUNC_2(struct acpi_table_desc *VAR_0,
         acpi_physical_address VAR_1,
         u8 VAR_2, struct acpi_table_header *VAR_3)
{





 FUNC_1(VAR_0, 0, sizeof(struct acpi_table_desc));
 VAR_0->address = VAR_1;
 VAR_0->length = VAR_3->length;
 VAR_0->flags = VAR_2;
 FUNC_0(VAR_0->signature.ascii, VAR_3->signature);
}
