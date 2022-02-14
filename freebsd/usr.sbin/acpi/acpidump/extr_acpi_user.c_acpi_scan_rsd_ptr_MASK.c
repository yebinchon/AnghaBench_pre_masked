
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_long ;
typedef int ACPI_TABLE_RSDP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int*,int,int) ;

__attribute__((used)) static ACPI_TABLE_RSDP *
FUNC_2(void)
{

 ACPI_TABLE_RSDP *VAR_5;
 u_long VAR_6, VAR_7;
 VAR_6 = VAR_0;
 FUNC_1(VAR_4, &VAR_6, sizeof(uint16_t), VAR_6);
 VAR_6 <<= 4;
 VAR_7 = VAR_6 + VAR_1;
 for (; VAR_6 < VAR_7; VAR_6 += 16)
  if ((VAR_5 = FUNC_0(VAR_6)) != ((void*)0))
   return (VAR_5);
 VAR_6 = VAR_2;
 VAR_7 = VAR_6 + VAR_3;
 for (; VAR_6 < VAR_7; VAR_6 += 16)
  if ((VAR_5 = FUNC_0(VAR_6)) != ((void*)0))
   return (VAR_5);

 return (((void*)0));
}
