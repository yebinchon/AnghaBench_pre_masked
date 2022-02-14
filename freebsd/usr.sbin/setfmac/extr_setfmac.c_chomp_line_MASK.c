
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_5(char **VAR_0, size_t *VAR_1)
{
 char *VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = *VAR_0; (unsigned)(VAR_2 - *VAR_0) < *VAR_1; VAR_2++) {
  if (!FUNC_1(*VAR_2))
   break;
 }
 if (*VAR_2 == '#') {
  **VAR_0 = '\0';
  *VAR_1 = 0;
  return (VAR_3);
 }
 FUNC_3(*VAR_0, VAR_2, *VAR_1 - (VAR_2 - *VAR_0));
 *VAR_1 -= VAR_2 - *VAR_0;
 for (VAR_2 = &(*VAR_0)[*VAR_1 - 1]; VAR_2 >= *VAR_0; VAR_2--) {
  if (!FUNC_1(*VAR_2))
   break;
 }
 if (VAR_2 != &(*VAR_0)[*VAR_1 - 1]) {
  *VAR_1 = VAR_2 - *VAR_0 + 1;
 } else {
  VAR_2 = FUNC_2(*VAR_1 + 1);
  if (VAR_2 == ((void*)0))
   FUNC_0(1, "malloc");
  FUNC_4(VAR_2, *VAR_0, *VAR_1);
  *VAR_0 = VAR_2;
  VAR_3 = 1;
 }
 (*VAR_0)[*VAR_1] = '\0';
 return (VAR_3);
}
