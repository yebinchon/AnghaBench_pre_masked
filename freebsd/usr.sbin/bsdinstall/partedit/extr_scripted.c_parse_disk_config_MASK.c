
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,char*,char*) ;
 int VAR_0 ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static
int FUNC_5(char *VAR_1)
{
 char *VAR_2;
 char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 while (VAR_1 != ((void*)0) && *VAR_1 != 0) {
  if (FUNC_1(*VAR_1)) {
   VAR_1++;
   continue;
  }

  switch(*VAR_1) {
  case '{':
   VAR_1++;
   VAR_5 = FUNC_3(VAR_1, '}');
   if (VAR_5 == ((void*)0)) {
    FUNC_0(VAR_0, "Malformed partition setup "
        "string: %s\n", VAR_1);
    return (1);
   }
   *VAR_5 = '\0';
   VAR_2 = VAR_5+1;
   VAR_5 = VAR_1;
   VAR_1 = VAR_2;
   break;
  default:
   if (VAR_3 == ((void*)0))
    VAR_3 = FUNC_4(&VAR_1, " \t\n");
   else if (VAR_4 == ((void*)0))
    VAR_4 = FUNC_4(&VAR_1, " \t\n");
   else {
    FUNC_0(VAR_0, "Unknown directive: %s\n",
        FUNC_4(&VAR_1, " \t\n"));
    return (1);
   }
  }
 } while (VAR_1 != ((void*)0) && *VAR_1 != 0);

 if (VAR_3 != ((void*)0))
  return (FUNC_2(VAR_3, VAR_4, VAR_5));

 return (0);
}
