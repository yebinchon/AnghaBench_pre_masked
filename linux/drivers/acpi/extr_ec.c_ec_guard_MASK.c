
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {unsigned long timestamp; int wait; scalar_t__ busy_polling; int polling_guard; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*) ;
 scalar_t__ FUNC_1 (struct acpi_ec*) ;
 int FUNC_2 (struct acpi_ec*) ;
 int VAR_1 ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct acpi_ec *VAR_2)
{
 unsigned long VAR_3 = FUNC_6(VAR_2->polling_guard);
 unsigned long VAR_4 = VAR_2->timestamp + VAR_3;


 do {
  if (VAR_2->busy_polling) {

   if (FUNC_1(VAR_2))
    return 0;
   FUNC_5(FUNC_3(VAR_3));
  } else {
   if (!FUNC_2(VAR_2) &&
       !FUNC_0(VAR_2))
    break;
   if (FUNC_7(VAR_2->wait,
            FUNC_1(VAR_2),
            VAR_3))
    return 0;
  }
 } while (FUNC_4(VAR_1, VAR_4));
 return -VAR_0;
}
