
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int (*) ()) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

acpi_status FUNC_8(void)
{
 acpi_status VAR_6;
 u8 VAR_7 = VAR_1;

 FUNC_1(FUNC_8);

 VAR_6 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_7(VAR_6);
 }

 if (VAR_4) {
  goto unlock_and_exit;
 }

 VAR_6 = FUNC_4(VAR_3,
           &VAR_7);
 if (FUNC_2(VAR_6)) {
  VAR_4 = VAR_2;
 }

unlock_and_exit:
 (void)FUNC_6(VAR_0);

 if (VAR_7 && VAR_4) {



  FUNC_3(VAR_5);
 }
 FUNC_7(VAR_6);
}
