
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;
typedef void* acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,int ) ;

__attribute__((used)) static acpi_status FUNC_1(acpi_handle VAR_3, u32 VAR_4,
           void *VAR_5, void **VAR_6)
{
 acpi_handle *VAR_7 = VAR_6;

 if (FUNC_0(VAR_3, VAR_2)) {
  *VAR_7 = VAR_3;
  return VAR_0;
 }

 return VAR_1;
}
