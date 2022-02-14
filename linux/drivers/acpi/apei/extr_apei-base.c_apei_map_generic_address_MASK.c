
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct acpi_generic_address {int dummy; } ;


 int FUNC_0 (struct acpi_generic_address*) ;
 int FUNC_1 (struct acpi_generic_address*,int *,int *) ;

int FUNC_2(struct acpi_generic_address *VAR_0)
{
 int VAR_1;
 u32 VAR_2;
 u64 VAR_3;

 VAR_1 = FUNC_1(VAR_0, &VAR_3, &VAR_2);
 if (VAR_1)
  return VAR_1;
 return FUNC_0(VAR_0);
}
