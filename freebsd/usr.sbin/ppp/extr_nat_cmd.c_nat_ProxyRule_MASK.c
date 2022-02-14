
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdargs {int argn; int argc; int * argv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 size_t FUNC_2 (int ) ;

int
FUNC_3(struct cmdargs const *VAR_2)
{
  char VAR_3[VAR_0];
  int VAR_4, VAR_5;
  size_t VAR_6;

  if (VAR_2->argn >= VAR_2->argc)
    return -1;

  for (VAR_4 = VAR_2->argn, VAR_5 = 0; VAR_4 < VAR_2->argc; VAR_4++) {
    VAR_6 = FUNC_2(VAR_2->argv[VAR_4]);
    if (sizeof VAR_3 - VAR_5 < VAR_6 + (VAR_6 ? 1 : 0))
      break;
    if (VAR_6)
      VAR_3[VAR_5++] = ' ';
    FUNC_1(VAR_3 + VAR_5, VAR_2->argv[VAR_4]);
    VAR_5 += VAR_6;
  }

  return FUNC_0(VAR_1, VAR_3);
}
