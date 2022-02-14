
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

char *FUNC_0(char *VAR_4,
        char **VAR_5, acpi_object_type *VAR_6)
{
 char *VAR_7;
 u32 VAR_8;
 acpi_object_type VAR_9 = VAR_1;



 if (!VAR_4 || !(*VAR_4)) {
  return (((void*)0));
 }



 if (*VAR_4 == ' ') {
  while (*VAR_4 && (*VAR_4 == ' ')) {
   VAR_4++;
  }

  if (!(*VAR_4)) {
   return (((void*)0));
  }
 }

 switch (*VAR_4) {
 case '"':



  VAR_4++;
  VAR_7 = VAR_4;
  VAR_9 = VAR_3;



  while (*VAR_4 && (*VAR_4 != '"')) {
   VAR_4++;
  }
  break;

 case '(':



  VAR_4++;
  VAR_7 = VAR_4;
  VAR_9 = VAR_0;



  while (*VAR_4 && (*VAR_4 != ')')) {
   VAR_4++;
  }
  break;

 case '[':



  VAR_4++;
  VAR_8 = 1;
  VAR_7 = VAR_4;
  VAR_9 = VAR_2;



  while (*VAR_4) {



   if (*VAR_4 == '"') {


    VAR_4++;
    while (*VAR_4 && (*VAR_4 != '"')) {
     VAR_4++;
    }
    if (!(*VAR_4)) {
     break;
    }
   } else if (*VAR_4 == '[') {
    VAR_8++;
   } else if (*VAR_4 == ']') {
    VAR_8--;
    if (VAR_8 == 0) {
     break;
    }
   }

   VAR_4++;
  }
  break;

 default:

  VAR_7 = VAR_4;



  while (*VAR_4 && (*VAR_4 != ' ')) {
   VAR_4++;
  }
  break;
 }

 if (!(*VAR_4)) {
  *VAR_5 = ((void*)0);
 } else {
  *VAR_4 = 0;
  *VAR_5 = VAR_4 + 1;
 }

 *VAR_6 = VAR_9;
 return (VAR_7);
}
