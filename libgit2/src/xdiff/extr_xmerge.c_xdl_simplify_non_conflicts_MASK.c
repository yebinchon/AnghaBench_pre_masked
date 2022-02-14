
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i1; int chg1; scalar_t__ mode; struct TYPE_4__* next; } ;
typedef TYPE_1__ xdmerge_t ;
typedef int xdfenv_t ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(xdfenv_t *VAR_0, xdmerge_t *VAR_1,
          int VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_1)
  return VAR_3;
 for (;;) {
  xdmerge_t *VAR_4 = VAR_1->next;
  int VAR_5, VAR_6;

  if (!VAR_4)
   return VAR_3;

  VAR_5 = VAR_1->i1 + VAR_1->chg1;
  VAR_6 = VAR_4->i1;

  if (VAR_1->mode != 0 || VAR_4->mode != 0 ||
      (VAR_6 - VAR_5 > 3 &&
       (!VAR_2 ||
        FUNC_0(VAR_0, VAR_5, VAR_6 - VAR_5)))) {
   VAR_1 = VAR_4;
  } else {
   VAR_3++;
   FUNC_1(VAR_1);
  }
 }
}
