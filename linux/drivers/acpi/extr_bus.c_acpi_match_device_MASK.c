
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_device_id {int dummy; } ;


 int FUNC_0 (int ,struct acpi_device_id const*,int *,struct acpi_device_id const**,int *) ;
 int FUNC_1 (struct device const*) ;

const struct acpi_device_id *FUNC_2(const struct acpi_device_id *VAR_0,
            const struct device *VAR_1)
{
 const struct acpi_device_id *VAR_2 = ((void*)0);

 FUNC_0(FUNC_1(VAR_1), VAR_0, ((void*)0), &VAR_2, ((void*)0));
 return VAR_2;
}
