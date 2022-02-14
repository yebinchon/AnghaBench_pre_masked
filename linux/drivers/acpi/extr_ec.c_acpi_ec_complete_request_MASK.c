
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {scalar_t__ reference_count; int wait; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*,int) ;
 int FUNC_1 (struct acpi_ec*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct acpi_ec *VAR_1)
{
 bool VAR_2 = 0;

 VAR_1->reference_count--;
 if (FUNC_2(VAR_0, &VAR_1->flags) &&
     VAR_1->reference_count == 0)
  FUNC_0(VAR_1, 1);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_3(&VAR_1->wait);
}
