
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int,int*,void*,int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static acpi_status FUNC_2(u32 VAR_5,
      acpi_physical_address VAR_6,
      u32 VAR_7, u64 *VAR_8,
      void *VAR_9,
      void *VAR_10)
{
 if (VAR_7 != 32)
  return VAR_1;


 if (VAR_5 == VAR_0 &&
     !(*VAR_8 == 0 || *VAR_8 == 1 || *VAR_8 == 3)) {
  return VAR_1;
 }

 return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_10,
    VAR_4,
    VAR_3,
    VAR_2,
    FUNC_0(VAR_2));
}
