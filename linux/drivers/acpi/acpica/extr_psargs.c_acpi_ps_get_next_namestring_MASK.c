
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_parse_state {int* aml; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_3 (char*) ;

char *FUNC_4(struct acpi_parse_state *VAR_2)
{
 u8 *VAR_3 = VAR_2->aml;
 u8 *VAR_4 = VAR_2->aml;

 FUNC_0(VAR_1);



 while (FUNC_2(*VAR_4) || FUNC_1(*VAR_4)) {
  VAR_4++;
 }



 switch (*VAR_4) {
 case 0:



  if (VAR_4 == VAR_3) {
   VAR_3 = ((void*)0);
  }
  VAR_4++;
  break;

 case 129:



  VAR_4 += 1 + (2 * VAR_0);
  break;

 case 128:



  VAR_4 += 2 + (*(VAR_4 + 1) * VAR_0);
  break;

 default:



  VAR_4 += VAR_0;
  break;
 }

 VAR_2->aml = VAR_4;
 FUNC_3((char *)VAR_3);
}
