
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdargs {int argc; int argn; int * argv; } ;


 int FUNC_0 (int ,long,long) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_2 (int ,char**,int) ;

int
FUNC_3(struct cmdargs const *VAR_2)
{
  char *VAR_3;
  long VAR_4, VAR_5;

  if (VAR_2->argc == VAR_2->argn) {
    FUNC_1(VAR_1, 0, VAR_0);
    return 0;
  }

  if (VAR_2->argc != VAR_2->argn + 2)
    return -1;

  VAR_4 = FUNC_2(VAR_2->argv[VAR_2->argn], &VAR_3, 10);
  if (*VAR_3 != '\0' || VAR_4 < 0)
    return -1;

  VAR_5 = FUNC_2(VAR_2->argv[VAR_2->argn + 1], &VAR_3, 10);
  if (*VAR_3 != '\0' || VAR_5 < 0)
    return -1;

  FUNC_0(VAR_1, VAR_4, VAR_5);
  FUNC_1(VAR_1, VAR_0, VAR_0);

  return 0;
}
