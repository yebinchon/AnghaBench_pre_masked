
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdargs {int argc; int argn; int cx; int bundle; int * argv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,int ,int) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct cmdargs const *VAR_1)
{
  char VAR_2[VAR_0];
  char *VAR_3;
  int VAR_4;

  if (VAR_1->argc == VAR_1->argn)
    return -1;

  VAR_2[sizeof VAR_2 - 1] = '\0';
  for (VAR_4 = VAR_1->argn; VAR_4 < VAR_1->argc; VAR_4++) {
    FUNC_1(VAR_2, VAR_1->argv[VAR_4], sizeof VAR_2 - 1);
    for(VAR_3 = FUNC_2(VAR_2, ", "); VAR_3; VAR_3 = FUNC_2(((void*)0),", "))
      FUNC_0(VAR_1->bundle, VAR_1->cx, VAR_3);
  }

  return 0;
}
