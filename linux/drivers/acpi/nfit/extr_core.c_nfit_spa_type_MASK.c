
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_nfit_system_address {int range_guid; } ;
typedef int guid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;

int FUNC_2(struct acpi_nfit_system_address *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (FUNC_0(FUNC_1(VAR_2), (guid_t *)&VAR_1->range_guid))
   return VAR_2;
 return -1;
}
