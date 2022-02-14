
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ctxlen; int interhunkctxlen; } ;
typedef TYPE_1__ xdemitconf_t ;
struct TYPE_7__ {long i1; long chg1; scalar_t__ chg2; scalar_t__ ignore; struct TYPE_7__* next; } ;
typedef TYPE_2__ xdchange_t ;



xdchange_t *FUNC_0(xdchange_t **VAR_0, xdemitconf_t const *VAR_1)
{
 xdchange_t *VAR_2, *VAR_3, *VAR_4;
 long VAR_5 = 2 * VAR_1->ctxlen + VAR_1->interhunkctxlen;
 long VAR_6 = VAR_1->ctxlen;
 unsigned long VAR_7 = 0;


 for (VAR_3 = *VAR_0; VAR_3 && VAR_3->ignore; VAR_3 = VAR_3->next) {
  VAR_2 = VAR_3->next;

  if (VAR_2 == ((void*)0) ||
      VAR_2->i1 - (VAR_3->i1 + VAR_3->chg1) >= VAR_6)
   *VAR_0 = VAR_2;
 }

 if (*VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_4 = *VAR_0;

 for (VAR_3 = *VAR_0, VAR_2 = VAR_3->next; VAR_2; VAR_3 = VAR_2, VAR_2 = VAR_2->next) {
  long VAR_8 = VAR_2->i1 - (VAR_3->i1 + VAR_3->chg1);
  if (VAR_8 > VAR_5)
   break;

  if (VAR_8 < VAR_6 && (!VAR_2->ignore || VAR_4 == VAR_3)) {
   VAR_4 = VAR_2;
   VAR_7 = 0;
  } else if (VAR_8 < VAR_6 && VAR_2->ignore) {
   VAR_7 += VAR_2->chg2;
  } else if (VAR_4 != VAR_3 &&
      VAR_2->i1 + VAR_7 - (VAR_4->i1 + VAR_4->chg1) > VAR_5) {
   break;
  } else if (!VAR_2->ignore) {
   VAR_4 = VAR_2;
   VAR_7 = 0;
  } else {
   VAR_7 += VAR_2->chg2;
  }
 }

 return VAR_4;
}
