
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_2(acpi_handle VAR_0)
{
 acpi_handle VAR_1;

 if (FUNC_0(FUNC_1(((void*)0), "\\_SB", &VAR_1)) &&
     VAR_1 == VAR_0)
  return 1;
 if (FUNC_0(FUNC_1(((void*)0), "\\_TZ", &VAR_1)) &&
     VAR_1 == VAR_0)
  return 1;

 return 0;
}
