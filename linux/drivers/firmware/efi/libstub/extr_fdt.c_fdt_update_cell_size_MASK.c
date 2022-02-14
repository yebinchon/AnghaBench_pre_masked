
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_system_table_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,char*) ;
 int FUNC_1 (void*,int,char*,int ) ;

__attribute__((used)) static void FUNC_2(efi_system_table_t *VAR_2, void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, "/");


 FUNC_1(VAR_3, VAR_4, "#address-cells", VAR_0);
 FUNC_1(VAR_3, VAR_4, "#size-cells", VAR_1);
}
