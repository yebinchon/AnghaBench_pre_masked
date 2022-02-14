
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(char **VAR_0, const char **VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 int VAR_4;

 VAR_2 = *VAR_0;
 if (*VAR_2 == '0' && *(VAR_2 + 1) == 'x') {
  VAR_2++;
  do {
   VAR_2++;
  } while (FUNC_1(*VAR_2));
 } else {
  do {
   VAR_2++;
  } while (FUNC_0(*VAR_2));
 }
 VAR_4 = VAR_2 - *VAR_0 + 1;
 VAR_3 = FUNC_3(VAR_4);
 (void) FUNC_2(VAR_3, *VAR_0, VAR_4);
 *VAR_1 = VAR_3;
 *VAR_0 = VAR_2;
}
