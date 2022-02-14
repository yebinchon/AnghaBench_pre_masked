
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,size_t) ;
 size_t FUNC_2 (char*) ;

acpi_status FUNC_3(char *VAR_3, u32 VAR_4, u32 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_0;
 if (VAR_5)
  *VAR_5 = VAR_6;


 return VAR_1;
}
