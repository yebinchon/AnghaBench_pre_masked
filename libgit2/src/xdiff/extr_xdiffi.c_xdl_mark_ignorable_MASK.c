
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int size; int ptr; } ;
typedef TYPE_3__ xrecord_t ;
struct TYPE_9__ {TYPE_3__** recs; } ;
struct TYPE_8__ {TYPE_3__** recs; } ;
struct TYPE_11__ {TYPE_2__ xdf2; TYPE_1__ xdf1; } ;
typedef TYPE_4__ xdfenv_t ;
struct TYPE_12__ {size_t i1; long chg1; size_t i2; long chg2; int ignore; struct TYPE_12__* next; } ;
typedef TYPE_5__ xdchange_t ;


 int FUNC_0 (int ,int ,long) ;

__attribute__((used)) static void FUNC_1(xdchange_t *VAR_0, xdfenv_t *VAR_1, long VAR_2)
{
 xdchange_t *VAR_3;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next) {
  int VAR_4 = 1;
  xrecord_t **VAR_5;
  long VAR_6;

  VAR_5 = &VAR_1->xdf1.recs[VAR_3->i1];
  for (VAR_6 = 0; VAR_6 < VAR_3->chg1 && VAR_4; VAR_6++)
   VAR_4 = FUNC_0(VAR_5[VAR_6]->ptr, VAR_5[VAR_6]->size, VAR_2);

  VAR_5 = &VAR_1->xdf2.recs[VAR_3->i2];
  for (VAR_6 = 0; VAR_6 < VAR_3->chg2 && VAR_4; VAR_6++)
   VAR_4 = FUNC_0(VAR_5[VAR_6]->ptr, VAR_5[VAR_6]->size, VAR_2);

  VAR_3->ignore = VAR_4;
 }
}
