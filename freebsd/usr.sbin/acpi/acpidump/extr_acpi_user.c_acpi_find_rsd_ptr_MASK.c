
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int addr ;
typedef int ACPI_TABLE_RSDP ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,int *,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,size_t*,int *,int ) ;

ACPI_TABLE_RSDP *
FUNC_6(void)
{
 ACPI_TABLE_RSDP *VAR_3;
 char VAR_4[20];
 u_long VAR_5;
 size_t VAR_6;

 FUNC_2();

 VAR_5 = 0;


 if (FUNC_3(VAR_0, VAR_1, VAR_4, 20) > 0)
  VAR_5 = FUNC_4(VAR_4, ((void*)0), 0);
 if (VAR_5 == 0) {
  VAR_6 = sizeof(VAR_5);
  if (FUNC_5(VAR_2, &VAR_5, &VAR_6, ((void*)0), 0) != 0)
   VAR_5 = 0;
 }
 if (VAR_5 != 0 && (VAR_3 = FUNC_0(VAR_5)) != ((void*)0))
  return (VAR_3);

 return (FUNC_1());
}
