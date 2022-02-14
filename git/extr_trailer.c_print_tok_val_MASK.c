
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,...) ;
 char FUNC_1 (char const*) ;
 char** VAR_0 ;
 scalar_t__ FUNC_2 (char**,char) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char VAR_4;

 if (!VAR_2) {
  FUNC_0(VAR_1, "%s\n", VAR_3);
  return;
 }

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return;
 if (FUNC_2(VAR_0, VAR_4))
  FUNC_0(VAR_1, "%s%s\n", VAR_2, VAR_3);
 else
  FUNC_0(VAR_1, "%s%c %s\n", VAR_2, VAR_0[0], VAR_3);
}
