
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_gpe_register_info {int enable_address; int enable_mask; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static acpi_status
FUNC_1(u8 VAR_0,
    struct acpi_gpe_register_info *VAR_1)
{
 acpi_status VAR_2;

 VAR_1->enable_mask = VAR_0;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->enable_address);
 return (VAR_2);
}
