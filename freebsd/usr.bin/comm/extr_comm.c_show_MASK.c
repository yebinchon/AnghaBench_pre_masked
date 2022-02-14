
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char**,size_t*,int *) ;
 int FUNC_3 (char*,char const*,char*) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, const char *VAR_1, const char *VAR_2, char **VAR_3, size_t *VAR_4)
{
 ssize_t VAR_5;

 do {
  (void)FUNC_3("%s%s\n", VAR_2, *VAR_3);
  if ((VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_0)) < 0)
   break;
  if (VAR_5 > 0 && (*VAR_3)[VAR_5 - 1] == '\n')
   (*VAR_3)[VAR_5 - 1] = '\0';
 } while (1);
 if (FUNC_1(VAR_0))
  FUNC_0(1, "%s", VAR_1);
}
