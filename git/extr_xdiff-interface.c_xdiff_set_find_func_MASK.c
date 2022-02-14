
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ff_regs* find_func_priv; int find_func; } ;
typedef TYPE_1__ xdemitconf_t ;
struct ff_regs {int nr; struct ff_reg* array; } ;
struct ff_reg {int negate; int re; } ;


 int FUNC_0 (struct ff_reg*,int) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char const*,int) ;
 char* FUNC_4 (char const*,char) ;
 struct ff_regs* FUNC_5 (int) ;
 char* FUNC_6 (char const*,int) ;

void FUNC_7(xdemitconf_t *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;
 struct ff_regs *VAR_5;

 VAR_1->find_func = VAR_0;
 VAR_5 = VAR_1->find_func_priv = FUNC_5(sizeof(struct ff_regs));
 for (VAR_4 = 0, VAR_5->nr = 1; VAR_2[VAR_4]; VAR_4++)
  if (VAR_2[VAR_4] == '\n')
   VAR_5->nr++;
 FUNC_0(VAR_5->array, VAR_5->nr);
 for (VAR_4 = 0; VAR_4 < VAR_5->nr; VAR_4++) {
  struct ff_reg *VAR_6 = VAR_5->array + VAR_4;
  const char *VAR_7 = FUNC_4(VAR_2, '\n'), *VAR_8;
  char *VAR_9 = ((void*)0);

  VAR_6->negate = (*VAR_2 == '!');
  if (VAR_6->negate && VAR_4 == VAR_5->nr - 1)
   FUNC_1("Last expression must not be negated: %s", VAR_2);
  if (*VAR_2 == '!')
   VAR_2++;
  if (VAR_7)
   VAR_8 = VAR_9 = FUNC_6(VAR_2, VAR_7 - VAR_2);
  else
   VAR_8 = VAR_2;
  if (FUNC_3(&VAR_6->re, VAR_8, VAR_3))
   FUNC_1("Invalid regexp to look for hunk header: %s", VAR_8);
  FUNC_2(VAR_9);
  VAR_2 = VAR_7 + 1;
 }
}
