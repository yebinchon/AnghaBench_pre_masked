
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static acpi_status
FUNC_5(u32 VAR_5, acpi_physical_address VAR_6,
        u32 VAR_7, u64 *VAR_8,
        void *VAR_9, void *VAR_10)
{
 int VAR_11;
 u8 *VAR_12 = (u8 *)VAR_8;

 if (VAR_6 > 0xff || !VAR_8)
  return VAR_2;

 if (VAR_5 != VAR_1 && VAR_5 != VAR_0)
  return VAR_2;

 FUNC_3(&VAR_4);

 for (VAR_11 = 0; VAR_11 < FUNC_2(VAR_7, 8); ++VAR_11, ++VAR_6, ++VAR_12)
  if (VAR_5 == VAR_0)
   *VAR_12 = FUNC_0(VAR_6);
  else
   FUNC_1(*VAR_12, VAR_6);

 FUNC_4(&VAR_4);

 return VAR_3;
}
