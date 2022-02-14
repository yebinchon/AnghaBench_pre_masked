
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct acpi_device {int * handle; } ;
typedef int * acpi_handle ;


 scalar_t__ FUNC_0 (int *,struct acpi_device**) ;
 struct acpi_device* FUNC_1 (struct acpi_device*,int ,int) ;

__attribute__((used)) static acpi_handle FUNC_2(acpi_handle VAR_0, u64 VAR_1)
{
 struct acpi_device *VAR_2;

 if (!VAR_0 || FUNC_0(VAR_0, &VAR_2))
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_2, VAR_1, 0);
 return VAR_2 ? VAR_2->handle : ((void*)0);
}
