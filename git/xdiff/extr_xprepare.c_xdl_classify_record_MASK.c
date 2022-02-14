
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* ptr; unsigned long ha; struct TYPE_9__* next; int size; } ;
typedef TYPE_1__ xrecord_t ;
struct TYPE_10__ {unsigned int hbits; int count; int alloc; TYPE_3__** rchash; TYPE_3__** rcrecs; int ncha; int flags; } ;
typedef TYPE_2__ xdlclassifier_t ;
struct TYPE_11__ {unsigned long ha; char const* line; size_t idx; scalar_t__ len2; scalar_t__ len1; struct TYPE_11__* next; int size; } ;
typedef TYPE_3__ xdlclass_t ;


 scalar_t__ FUNC_0 (unsigned long,unsigned int) ;
 TYPE_3__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__**,int) ;
 scalar_t__ FUNC_3 (char const*,int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_0, xdlclassifier_t *VAR_1, xrecord_t **VAR_2,
          unsigned int VAR_3, xrecord_t *VAR_4) {
 long VAR_5;
 char const *VAR_6;
 xdlclass_t *VAR_7;
 xdlclass_t **VAR_8;

 VAR_6 = VAR_4->ptr;
 VAR_5 = (long) FUNC_0(VAR_4->ha, VAR_1->hbits);
 for (VAR_7 = VAR_1->rchash[VAR_5]; VAR_7; VAR_7 = VAR_7->next)
  if (VAR_7->ha == VAR_4->ha &&
    FUNC_3(VAR_7->line, VAR_7->size,
     VAR_4->ptr, VAR_4->size, VAR_1->flags))
   break;

 if (!VAR_7) {
  if (!(VAR_7 = FUNC_1(&VAR_1->ncha))) {

   return -1;
  }
  VAR_7->idx = VAR_1->count++;
  if (VAR_1->count > VAR_1->alloc) {
   VAR_1->alloc *= 2;
   if (!(VAR_8 = (xdlclass_t **) FUNC_2(VAR_1->rcrecs, VAR_1->alloc * sizeof(xdlclass_t *)))) {

    return -1;
   }
   VAR_1->rcrecs = VAR_8;
  }
  VAR_1->rcrecs[VAR_7->idx] = VAR_7;
  VAR_7->line = VAR_6;
  VAR_7->size = VAR_4->size;
  VAR_7->ha = VAR_4->ha;
  VAR_7->len1 = VAR_7->len2 = 0;
  VAR_7->next = VAR_1->rchash[VAR_5];
  VAR_1->rchash[VAR_5] = VAR_7;
 }

 (VAR_0 == 1) ? VAR_7->len1++ : VAR_7->len2++;

 VAR_4->ha = (unsigned long) VAR_7->idx;

 VAR_5 = (long) FUNC_0(VAR_4->ha, VAR_3);
 VAR_4->next = VAR_2[VAR_5];
 VAR_2[VAR_5] = VAR_4;

 return 0;
}
