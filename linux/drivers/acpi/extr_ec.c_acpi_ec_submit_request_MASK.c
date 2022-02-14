
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int reference_count; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct acpi_ec *VAR_1)
{
 VAR_1->reference_count++;
 if (FUNC_1(VAR_0, &VAR_1->flags) &&
     VAR_1->reference_count == 1)
  FUNC_0(VAR_1, 1);
}
