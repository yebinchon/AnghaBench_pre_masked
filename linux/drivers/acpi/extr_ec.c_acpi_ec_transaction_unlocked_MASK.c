
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transaction {scalar_t__ irq_count; int command; } ;
struct acpi_ec {int lock; struct transaction* curr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_ec*) ;
 int FUNC_2 (struct acpi_ec*) ;
 int FUNC_3 (struct acpi_ec*) ;
 int FUNC_4 (struct acpi_ec*,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct acpi_ec*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct acpi_ec*) ;

__attribute__((used)) static int FUNC_10(struct acpi_ec *VAR_2,
     struct transaction *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;


 FUNC_7(&VAR_2->lock, VAR_4);

 if (!FUNC_2(VAR_2)) {
  VAR_5 = -VAR_0;
  goto unlock;
 }
 FUNC_4(VAR_2, "Increase command");

 VAR_2->curr = VAR_3;
 FUNC_5("Command(%s) started", FUNC_0(VAR_3->command));
 FUNC_9(VAR_2);
 FUNC_8(&VAR_2->lock, VAR_4);

 VAR_5 = FUNC_6(VAR_2);

 FUNC_7(&VAR_2->lock, VAR_4);
 if (VAR_3->irq_count == VAR_1)
  FUNC_3(VAR_2);
 FUNC_5("Command(%s) stopped", FUNC_0(VAR_3->command));
 VAR_2->curr = ((void*)0);

 FUNC_1(VAR_2);
 FUNC_4(VAR_2, "Decrease command");
unlock:
 FUNC_8(&VAR_2->lock, VAR_4);
 return VAR_5;
}
