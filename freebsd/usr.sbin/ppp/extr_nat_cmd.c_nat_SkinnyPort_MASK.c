
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdargs {int argc; int argn; int * argv; } ;


 int FUNC_0 (int ,long) ;
 int VAR_0 ;
 long FUNC_1 (int ,char**,int) ;

int
FUNC_2(struct cmdargs const *VAR_1)
{
  char *VAR_2;
  long VAR_3;

  if (VAR_1->argc == VAR_1->argn) {
    FUNC_0(VAR_0, 0);
    return 0;
  }

  if (VAR_1->argc != VAR_1->argn + 1)
    return -1;

  VAR_3 = FUNC_1(VAR_1->argv[VAR_1->argn], &VAR_2, 10);
  if (*VAR_2 != '\0' || VAR_3 < 0)
    return -1;

  FUNC_0(VAR_0, VAR_3);

  return 0;
}
