
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_system_table_t ;
typedef int efi_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;

efi_status_t FUNC_3(efi_system_table_t *VAR_4)
{
 int VAR_5;


 if (!FUNC_0(VAR_0))
  return VAR_2;


 VAR_5 = FUNC_1(VAR_1, 0);
 if (VAR_5 < 5) {
  FUNC_2(VAR_4, "This LPAE kernel is not supported by your CPU\n");
  return VAR_3;
 }
 return VAR_2;
}
