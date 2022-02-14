
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ acpi_owner_id ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int *,int ) ;

void FUNC_4(char *VAR_7, char *VAR_8)
{
 acpi_handle VAR_9 = VAR_6;
 u32 VAR_10 = VAR_5;
 acpi_owner_id VAR_11;

 VAR_11 = (acpi_owner_id)FUNC_3(VAR_7, ((void*)0), 0);



 if (VAR_8) {
  VAR_10 = FUNC_3(VAR_8, ((void*)0), 0);
 }

 FUNC_0(VAR_1);
 FUNC_2("ACPI Namespace by owner %X:\n", VAR_11);



 FUNC_0(VAR_2);
 FUNC_1(VAR_4, VAR_3, VAR_10,
        VAR_11, VAR_9);
 FUNC_0(VAR_0);
}
