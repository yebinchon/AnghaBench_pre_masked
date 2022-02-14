
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct acpi_ec *VAR_1)
{
 if (FUNC_3(VAR_0, &VAR_1->flags)) {
  FUNC_1(VAR_0, &VAR_1->flags);
  FUNC_0(VAR_1, 0);
  FUNC_2("Polling disabled");
 }
}
