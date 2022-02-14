
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_offset_t ;
struct acpi_user_mapping {void* va; void* pa; } ;


 struct acpi_user_mapping* FUNC_0 (void*,size_t) ;

void *
FUNC_1(vm_offset_t VAR_0, size_t VAR_1)
{
 struct acpi_user_mapping *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return (VAR_2->va + (VAR_0 - VAR_2->pa));
}
