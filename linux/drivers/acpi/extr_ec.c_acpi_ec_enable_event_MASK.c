
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct acpi_ec*) ;
 int FUNC_1 (struct acpi_ec*) ;
 scalar_t__ FUNC_2 (struct acpi_ec*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct acpi_ec *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_1->lock, VAR_2);
 if (FUNC_2(VAR_1))
  FUNC_0(VAR_1);
 FUNC_4(&VAR_1->lock, VAR_2);


 if (VAR_0)
  FUNC_1(VAR_1);
}
