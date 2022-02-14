
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct transaction {int flags; scalar_t__ wlen; scalar_t__ wi; scalar_t__ rlen; scalar_t__ ri; int* rdata; scalar_t__ command; scalar_t__ irq_count; int * wdata; } ;
struct acpi_ec {int wait; int flags; int nr_pending_queries; struct transaction* curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct acpi_ec*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct acpi_ec*) ;
 int FUNC_3 (struct acpi_ec*) ;
 int FUNC_4 (struct acpi_ec*) ;
 int FUNC_5 (struct acpi_ec*) ;
 int FUNC_6 (struct acpi_ec*) ;
 int FUNC_7 (struct acpi_ec*,scalar_t__) ;
 int FUNC_8 (struct acpi_ec*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,char*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_12 (struct acpi_ec*,int) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct acpi_ec *VAR_11)
{
 struct transaction *VAR_12;
 u8 VAR_13;
 bool VAR_14 = 0;

 FUNC_11("%s (%d)", FUNC_13() ? "IRQ" : "TASK",
     FUNC_14());





 FUNC_0(VAR_11);
 VAR_13 = FUNC_5(VAR_11);
 VAR_12 = VAR_11->curr;




 if (!VAR_12 || !(VAR_12->flags & VAR_1)) {
  if (VAR_9 == VAR_3 &&
      (!VAR_11->nr_pending_queries ||
       FUNC_15(VAR_7, &VAR_11->flags))) {
   FUNC_9(VAR_7, &VAR_11->flags);
   FUNC_2(VAR_11);
  }
 }
 if (!VAR_12)
  goto err;
 if (VAR_12->flags & VAR_1) {
  if (VAR_12->wlen > VAR_12->wi) {
   if ((VAR_13 & VAR_4) == 0)
    FUNC_8(VAR_11, VAR_12->wdata[VAR_12->wi++]);
   else
    goto err;
  } else if (VAR_12->rlen > VAR_12->ri) {
   if ((VAR_13 & VAR_5) == 1) {
    VAR_12->rdata[VAR_12->ri++] = FUNC_4(VAR_11);
    if (VAR_12->rlen == VAR_12->ri) {
     FUNC_12(VAR_11, VAR_0);
     if (VAR_12->command == VAR_2)
      FUNC_10("Command(%s) completed by hardware",
          FUNC_1(VAR_2));
     VAR_14 = 1;
    }
   } else
    goto err;
  } else if (VAR_12->wlen == VAR_12->wi &&
      (VAR_13 & VAR_4) == 0) {
   FUNC_12(VAR_11, VAR_0);
   VAR_14 = 1;
  }
  goto out;
 } else {
  if (VAR_8 &&
      !(VAR_13 & VAR_6) &&
      (VAR_12->command == VAR_2)) {
   FUNC_12(VAR_11, VAR_1);
   VAR_12->rdata[VAR_12->ri++] = 0x00;
   FUNC_12(VAR_11, VAR_0);
   FUNC_10("Command(%s) completed by software",
       FUNC_1(VAR_2));
   VAR_14 = 1;
  } else if ((VAR_13 & VAR_4) == 0) {
   FUNC_7(VAR_11, VAR_12->command);
   FUNC_12(VAR_11, VAR_1);
  } else
   goto err;
  goto out;
 }
err:




 if (!(VAR_13 & VAR_6)) {
  if (FUNC_13() && VAR_12) {
   if (VAR_12->irq_count < VAR_10)
    ++VAR_12->irq_count;

   if (VAR_12->irq_count == VAR_10)
    FUNC_3(VAR_11);
  }
 }
out:
 if (VAR_13 & VAR_6)
  FUNC_6(VAR_11);
 if (VAR_14 && FUNC_13())
  FUNC_16(&VAR_11->wait);
}
