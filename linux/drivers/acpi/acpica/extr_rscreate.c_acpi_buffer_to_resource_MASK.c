
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct acpi_resource {int dummy; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_size ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (scalar_t__ (*) (int *,int ,struct acpi_resource**)) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ,void**) ;
 int FUNC_6 (scalar_t__) ;

acpi_status
FUNC_7(u8 *VAR_4,
   u16 VAR_5,
   struct acpi_resource **VAR_6)
{
 acpi_status VAR_7;
 acpi_size VAR_8;
 void *VAR_9;
 void *VAR_10;

 FUNC_3(FUNC_7);
 VAR_7 =
     FUNC_4(VAR_4, VAR_5,
        &VAR_8);
 if (VAR_7 == VAR_0) {
  VAR_7 = VAR_2;
 }
 if (FUNC_1(VAR_7)) {
  FUNC_6(VAR_7);
 }



 VAR_9 = FUNC_0(VAR_8);
 VAR_10 = VAR_9;
 if (!VAR_9) {
  FUNC_6(VAR_1);
 }



 VAR_7 = FUNC_5(((void*)0), VAR_4, VAR_5,
         VAR_3,
         &VAR_10);
 if (VAR_7 == VAR_0) {
  VAR_7 = VAR_2;
 }
 if (FUNC_1(VAR_7)) {
  FUNC_2(VAR_9);
 } else {
  *VAR_6 = VAR_9;
 }

 FUNC_6(VAR_7);
}
