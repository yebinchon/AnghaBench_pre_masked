
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int lock; int flags; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_ec*) ;
 int FUNC_1 (struct acpi_ec*) ;
 scalar_t__ FUNC_2 (struct acpi_ec*) ;
 int FUNC_3 (struct acpi_ec*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct acpi_ec*,char*) ;
 int VAR_2 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(struct acpi_ec *VAR_3, bool VAR_4)
{
 unsigned long VAR_5;

 FUNC_9(&VAR_3->lock, VAR_5);
 if (FUNC_2(VAR_3)) {
  FUNC_5("Stopping EC");
  FUNC_8(VAR_1, &VAR_3->flags);
  FUNC_10(&VAR_3->lock, VAR_5);
  FUNC_11(VAR_3->wait, FUNC_3(VAR_3));
  FUNC_9(&VAR_3->lock, VAR_5);

  if (!VAR_4) {
   FUNC_1(VAR_3);
   FUNC_6(VAR_3, "Decrease driver");
  } else if (!VAR_2)
   FUNC_0(VAR_3);
  FUNC_4(VAR_0, &VAR_3->flags);
  FUNC_4(VAR_1, &VAR_3->flags);
  FUNC_7("EC stopped");
 }
 FUNC_10(&VAR_3->lock, VAR_5);
}
