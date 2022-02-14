
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int ha; int ptr; int size; } ;
typedef TYPE_6__ xrecord_t ;
typedef int xpparam_t ;
struct hashmap {int alloc; int has_matches; int nr; TYPE_5__* entries; TYPE_5__* last; TYPE_5__* first; TYPE_4__* env; TYPE_2__* xpp; } ;
struct TYPE_11__ {int line1; int hash; int line2; struct TYPE_11__* previous; struct TYPE_11__* next; int anchor; } ;
struct TYPE_9__ {TYPE_6__** recs; } ;
struct TYPE_7__ {TYPE_6__** recs; } ;
struct TYPE_10__ {TYPE_3__ xdf1; TYPE_1__ xdf2; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(xpparam_t const *VAR_1, int VAR_2, struct hashmap *VAR_3,
     int VAR_4)
{
 xrecord_t **VAR_5 = VAR_4 == 1 ?
  VAR_3->env->xdf1.recs : VAR_3->env->xdf2.recs;
 xrecord_t *VAR_6 = VAR_5[VAR_2 - 1], *VAR_7;
 int VAR_8 = (int)((VAR_6->ha << 1) % VAR_3->alloc);

 while (VAR_3->entries[VAR_8].line1) {
  VAR_7 = VAR_3->env->xdf1.recs[VAR_3->entries[VAR_8].line1 - 1];
  if (VAR_3->entries[VAR_8].hash != VAR_6->ha ||
    !FUNC_1(VAR_6->ptr, VAR_6->size,
     VAR_7->ptr, VAR_7->size,
     VAR_3->xpp->flags)) {
   if (++VAR_8 >= VAR_3->alloc)
    VAR_8 = 0;
   continue;
  }
  if (VAR_4 == 2)
   VAR_3->has_matches = 1;
  if (VAR_4 == 1 || VAR_3->entries[VAR_8].line2)
   VAR_3->entries[VAR_8].line2 = VAR_0;
  else
   VAR_3->entries[VAR_8].line2 = VAR_2;
  return;
 }
 if (VAR_4 == 2)
  return;
 VAR_3->entries[VAR_8].line1 = VAR_2;
 VAR_3->entries[VAR_8].hash = VAR_6->ha;
 VAR_3->entries[VAR_8].anchor = FUNC_0(VAR_1, VAR_3->env->xdf1.recs[VAR_2 - 1]->ptr);
 if (!VAR_3->first)
  VAR_3->first = VAR_3->entries + VAR_8;
 if (VAR_3->last) {
  VAR_3->last->next = VAR_3->entries + VAR_8;
  VAR_3->entries[VAR_8].previous = VAR_3->last;
 }
 VAR_3->last = VAR_3->entries + VAR_8;
 VAR_3->nr++;
}
