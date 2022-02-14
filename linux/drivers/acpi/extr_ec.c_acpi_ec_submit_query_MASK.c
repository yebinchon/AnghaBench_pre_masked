
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int work; int nr_pending_queries; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_ec*) ;
 int FUNC_2 (struct acpi_ec*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct acpi_ec *VAR_2)
{
 FUNC_2(VAR_2);
 if (!FUNC_1(VAR_2))
  return;
 if (!FUNC_5(VAR_1, &VAR_2->flags)) {
  FUNC_3("Command(%s) submitted/blocked",
      FUNC_0(VAR_0));
  VAR_2->nr_pending_queries++;
  FUNC_4(&VAR_2->work);
 }
}
