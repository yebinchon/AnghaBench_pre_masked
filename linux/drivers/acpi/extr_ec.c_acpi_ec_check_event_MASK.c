
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int lock; int curr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct acpi_ec*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct acpi_ec*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct acpi_ec *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1 == VAR_0) {
  if (FUNC_1(VAR_2)) {
   FUNC_2(&VAR_2->lock, VAR_3);




   if (!VAR_2->curr)
    FUNC_0(VAR_2);
   FUNC_3(&VAR_2->lock, VAR_3);
  }
 }
}
