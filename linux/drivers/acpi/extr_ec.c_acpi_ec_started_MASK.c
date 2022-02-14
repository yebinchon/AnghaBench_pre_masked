
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct acpi_ec *VAR_2)
{
 return FUNC_0(VAR_0, &VAR_2->flags) &&
        !FUNC_0(VAR_1, &VAR_2->flags);
}
