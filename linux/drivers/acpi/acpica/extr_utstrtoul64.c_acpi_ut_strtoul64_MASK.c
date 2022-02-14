
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__*) ;
 int FUNC_2 (char*,scalar_t__*) ;
 int FUNC_3 (char*,scalar_t__*) ;
 scalar_t__ FUNC_4 (char**) ;
 scalar_t__ FUNC_5 (char**) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (char**) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;

acpi_status FUNC_9(char *VAR_3, u64 *VAR_4)
{
 acpi_status VAR_5 = VAR_0;
 u8 VAR_6;
 u32 VAR_7 = 10;

 FUNC_0(VAR_2, VAR_3);

 *VAR_4 = 0;



 if (*VAR_3 == 0) {
  FUNC_8(VAR_0);
 }

 if (!FUNC_7(&VAR_3)) {
  FUNC_8(VAR_0);
 }




 if (FUNC_4(&VAR_3)) {
  VAR_7 = 16;
 }





 else if (FUNC_5(&VAR_3)) {
  VAR_7 = 8;
 }

 if (!FUNC_6(&VAR_3)) {
  FUNC_8(VAR_0);
 }






 VAR_6 = VAR_1;
 VAR_1 = 64;





 switch (VAR_7) {
 case 8:
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  break;

 case 10:
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  break;

 case 16:
 default:
  VAR_5 = FUNC_2(VAR_3, VAR_4);
  break;
 }



 VAR_1 = VAR_6;
 FUNC_8(VAR_5);
}
