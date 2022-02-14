
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int efi_system_table_t ;
typedef int efi_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;

efi_status_t FUNC_3(efi_system_table_t *VAR_7)
{
 u64 VAR_8;


 if (FUNC_0(VAR_0))
  return VAR_2;

 VAR_8 = (FUNC_2(VAR_4) >> VAR_5) & 0xf;
 if (VAR_8 != VAR_6) {
  if (FUNC_0(VAR_1))
   FUNC_1(VAR_7, "This 64 KB granular kernel is not supported by your CPU\n");
  else
   FUNC_1(VAR_7, "This 16 KB granular kernel is not supported by your CPU\n");
  return VAR_3;
 }
 return VAR_2;
}
