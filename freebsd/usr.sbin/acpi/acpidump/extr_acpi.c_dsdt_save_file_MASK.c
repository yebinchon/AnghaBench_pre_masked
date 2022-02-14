
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int ACPI_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *,int *) ;

void
FUNC_5(char *VAR_7, ACPI_TABLE_HEADER *VAR_8, ACPI_TABLE_HEADER *VAR_9)
{
 int VAR_10;
 mode_t VAR_11;

 FUNC_0(VAR_7 != ((void*)0));
 VAR_11 = VAR_5 | VAR_6 | VAR_3 | VAR_4;
 VAR_10 = FUNC_2(VAR_7, VAR_2 | VAR_0 | VAR_1, VAR_11);
 if (VAR_10 == -1) {
  FUNC_3("dsdt_save_file");
  return;
 }
 FUNC_4(VAR_10, VAR_8, VAR_9);
 FUNC_1(VAR_10);
}
