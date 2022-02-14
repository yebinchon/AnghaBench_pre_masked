
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char**,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static vm_paddr_t
FUNC_4(char **VAR_0, char *VAR_1)
{
 vm_paddr_t VAR_2;
 char *VAR_3, *VAR_4;

 if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
  return (0);
 if (**VAR_0 =='\0') {
  *VAR_0 = ((void*)0);
  return (0);
 }





 if (VAR_1 == ((void*)0))
  VAR_1 = *VAR_0 + FUNC_1(*VAR_0);


 if (*VAR_1 != '\0') {
  if (*VAR_1 == '\n' || *VAR_1 == ' ' || *VAR_1 == ',')
   *VAR_1 = '\0';
  else {
   FUNC_0("Blacklist not terminated, skipping\n");
   *VAR_0 = ((void*)0);
   return (0);
  }
 }

 for (VAR_4 = *VAR_0; *VAR_4 != '\0'; VAR_4 = VAR_3) {
  VAR_2 = FUNC_2(VAR_4, &VAR_3, 0);
  if (*VAR_3 == '\0' || *VAR_3 == ' ' || *VAR_3 == ',' || *VAR_3 == '\n') {
   if (VAR_2 == 0) {
    if (++VAR_3 < VAR_1)
     continue;
    else
     break;
   }
  } else
   break;
  if (*VAR_3 == '\0' || ++VAR_3 >= VAR_1)
   *VAR_0 = ((void*)0);
  else
   *VAR_0 = VAR_3;
  return (FUNC_3(VAR_2));
 }
 FUNC_0("Garbage in RAM blacklist, skipping\n");
 *VAR_0 = ((void*)0);
 return (0);
}
