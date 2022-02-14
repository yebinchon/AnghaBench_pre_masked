
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int (*) ()) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

acpi_status FUNC_9(void)
{
 acpi_status VAR_9;
 int VAR_10;

 FUNC_3(FUNC_9);



 if (VAR_7 == VAR_1) {
  FUNC_8(VAR_4);
 }



 if (VAR_8) {
  FUNC_8(VAR_6);
 }



 if (FUNC_5() == VAR_2) {
  FUNC_0((VAR_0,
      "System is already in ACPI mode\n"));
  FUNC_8(VAR_6);
 }



 VAR_9 = FUNC_6(VAR_2);
 if (FUNC_2(VAR_9)) {
  FUNC_1((VAR_3,
       "Could not transition to ACPI mode"));
  FUNC_8(VAR_9);
 }



 for (VAR_10 = 0; VAR_10 < 30000; ++VAR_10) {
  if (FUNC_5() == VAR_2) {
   if (VAR_10 != 0)
    FUNC_4((VAR_3,
    "Platform took > %d00 usec to enter ACPI mode", VAR_10));
   FUNC_8(VAR_6);
  }
  FUNC_7(100);
 }

 FUNC_1((VAR_3, "Hardware did not enter ACPI mode"));
 FUNC_8(VAR_5);
}
