
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;

acpi_status FUNC_7(void)
{
 acpi_status VAR_6;
 u32 VAR_7;

 FUNC_1(VAR_5);

 VAR_6 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_6)) {
  FUNC_6(VAR_6);
 }



 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {





  if (FUNC_3(VAR_4,
      VAR_3
      [VAR_7])) {
   FUNC_2(VAR_4,
          VAR_3
          [VAR_7], VAR_2);
  }
 }

 (void)FUNC_5(VAR_0);
 FUNC_6(VAR_6);
}
