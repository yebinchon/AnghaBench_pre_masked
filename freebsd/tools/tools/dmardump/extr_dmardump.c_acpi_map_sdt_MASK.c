
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_4__ {int Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;


 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static ACPI_TABLE_HEADER *
FUNC_1(vm_offset_t VAR_0)
{
 ACPI_TABLE_HEADER *VAR_1;

 VAR_1 = FUNC_0(VAR_0, sizeof(ACPI_TABLE_HEADER));
 VAR_1 = FUNC_0(VAR_0, VAR_1->Length);
 return (VAR_1);
}
