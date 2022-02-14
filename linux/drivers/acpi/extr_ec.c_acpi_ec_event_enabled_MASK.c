
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_ec*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct acpi_ec *VAR_3)
{





 if (!FUNC_1(VAR_0, &VAR_3->flags))
  return 0;
 if (VAR_2)
  return FUNC_0(VAR_3);
 else
  return FUNC_1(VAR_1, &VAR_3->flags);
}
