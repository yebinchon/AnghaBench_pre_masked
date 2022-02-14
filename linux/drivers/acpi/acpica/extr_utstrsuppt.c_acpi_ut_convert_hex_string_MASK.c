
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,char) ;
 int FUNC_2 (char) ;

acpi_status FUNC_3(char *VAR_2, u64 *VAR_3)
{
 u64 VAR_4 = 0;
 acpi_status VAR_5 = VAR_1;



 while (*VAR_2) {



  if (!FUNC_2(*VAR_2)) {
   break;
  }



  VAR_5 = FUNC_1(&VAR_4, 16, *VAR_2);
  if (FUNC_0(VAR_5)) {
   VAR_5 = VAR_0;
   break;
  }

  VAR_2++;
 }



 *VAR_3 = VAR_4;
 return (VAR_5);
}
