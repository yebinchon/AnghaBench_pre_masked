
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_table_rsdp {int revision; int signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static u8 *FUNC_2(u8 *VAR_3, u32 VAR_4)
{
 struct acpi_table_rsdp *VAR_5;
 u8 *VAR_6, *VAR_7;

 VAR_7 = VAR_3 + VAR_4;


 for (VAR_6 = VAR_3; VAR_6 < VAR_7; VAR_6 += VAR_1) {






  VAR_5 = (struct acpi_table_rsdp *)VAR_6;


  if (!FUNC_0(VAR_5->signature))
   continue;


  if (FUNC_1((u8 *)VAR_5, VAR_0))
   continue;


  if ((VAR_5->revision >= 2) &&
      (FUNC_1((u8 *)VAR_5, VAR_2)))
   continue;


  return VAR_6;
 }
 return ((void*)0);
}
