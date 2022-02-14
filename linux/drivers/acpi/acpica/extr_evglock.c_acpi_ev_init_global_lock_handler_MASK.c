
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_11 ;
 int FUNC_5 (scalar_t__) ;

acpi_status FUNC_6(void)
{
 acpi_status VAR_12;

 FUNC_2(VAR_11);



 if (VAR_10) {
  FUNC_5(VAR_3);
 }



 VAR_12 = FUNC_3(VAR_0,
        VAR_6,
        ((void*)0));







 VAR_9 = VAR_4;
 if (VAR_12 == VAR_2) {
  FUNC_0((VAR_1,
       "No response from Global Lock hardware, disabling lock"));

  FUNC_5(VAR_3);
 }

 VAR_12 = FUNC_4(&VAR_8);
 if (FUNC_1(VAR_12)) {
  FUNC_5(VAR_12);
 }

 VAR_7 = VAR_4;
 VAR_9 = VAR_5;
 FUNC_5(VAR_12);
}
