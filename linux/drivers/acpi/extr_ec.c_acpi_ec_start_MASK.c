
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct acpi_ec*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct acpi_ec *VAR_1, bool VAR_2)
{
 unsigned long VAR_3;

 FUNC_4(&VAR_1->lock, VAR_3);
 if (!FUNC_6(VAR_0, &VAR_1->flags)) {
  FUNC_1("Starting EC");

  if (!VAR_2) {
   FUNC_0(VAR_1);
   FUNC_2(VAR_1, "Increase driver");
  }
  FUNC_3("EC started");
 }
 FUNC_5(&VAR_1->lock, VAR_3);
}
