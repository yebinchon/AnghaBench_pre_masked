
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int asl_compiler_id; int oem_table_id; int oem_id; int signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct acpi_table_header*,struct acpi_table_header*,int) ;

__attribute__((used)) static void
FUNC_2(struct acpi_table_header *VAR_3,
        struct acpi_table_header *VAR_4)
{

 FUNC_1(VAR_3, VAR_4, sizeof(struct acpi_table_header));

 FUNC_0(VAR_3->signature, VAR_0);
 FUNC_0(VAR_3->oem_id, VAR_1);
 FUNC_0(VAR_3->oem_table_id, VAR_2);
 FUNC_0(VAR_3->asl_compiler_id, VAR_0);
}
