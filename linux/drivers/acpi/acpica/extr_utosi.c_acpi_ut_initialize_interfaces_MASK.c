
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
typedef size_t acpi_size ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

acpi_status FUNC_4(void)
{
 acpi_status VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (FUNC_1(VAR_5)) {
  return (VAR_5);
 }

 VAR_4 = VAR_2;



 for (VAR_6 = 0;
      VAR_6 < (FUNC_0(VAR_2) - 1);
      VAR_6++) {
  VAR_2[VAR_6].next =
      &VAR_2[(acpi_size)VAR_6 + 1];
 }

 FUNC_3(VAR_3);
 return (VAR_1);
}
