
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct find_iter_args {scalar_t__ i; int * res; } ;
struct TYPE_3__ {scalar_t__ Type; } ;
typedef TYPE_1__ ACPI_DMAR_HEADER ;
typedef int ACPI_DMAR_HARDWARE_UNIT ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(ACPI_DMAR_HEADER *VAR_1, void *VAR_2)
{
 struct find_iter_args *VAR_3;

 if (VAR_1->Type != VAR_0)
  return (1);

 VAR_3 = VAR_2;
 if (VAR_3->i == 0) {
  VAR_3->res = (ACPI_DMAR_HARDWARE_UNIT *)VAR_1;
  return (0);
 }
 VAR_3->i--;
 return (1);
}
