
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ size; TYPE_1__* e; struct TYPE_13__* next; } ;
typedef TYPE_2__ segment ;
struct TYPE_14__ {scalar_t__ size; size_t capa; TYPE_1__** table; } ;
typedef TYPE_3__ segindex ;
typedef void* mrb_value ;
typedef int mrb_state ;
struct TYPE_15__ {scalar_t__ last_len; int size; TYPE_2__* lastseg; TYPE_3__* index; } ;
typedef TYPE_4__ htable ;
struct TYPE_12__ {void* val; void* key; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*,void*,void*) ;
 size_t FUNC_4 (int *,TYPE_4__*,void*) ;
 scalar_t__ FUNC_5 (void*) ;
 TYPE_2__* FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_0, htable *VAR_1, mrb_value VAR_2, mrb_value VAR_3)
{
  segindex *VAR_4 = VAR_1->index;
  size_t VAR_5, VAR_6, VAR_7 = 0, VAR_8;
  segment *VAR_9;

  if (VAR_4->size >= FUNC_1(VAR_4->capa)) {

    FUNC_2(VAR_0, VAR_1);
    VAR_4 = VAR_1->index;
  }
  VAR_8 = FUNC_0(VAR_4);
  VAR_6 = VAR_4->capa;
  VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2) & VAR_8;
  while (VAR_4->table[VAR_5]) {
    mrb_value VAR_10 = VAR_4->table[VAR_5]->key;
    if (FUNC_5(VAR_10)) {
      if (VAR_6 == VAR_4->capa) VAR_6 = VAR_5;
    }
    else if (FUNC_3(VAR_0, VAR_1, VAR_2, VAR_10)) {
      VAR_4->table[VAR_5]->val = VAR_3;
      return;
    }
    VAR_5 = (VAR_5+(++VAR_7)) & VAR_8;
  }
  if (VAR_6 < VAR_4->capa) {
    VAR_5 = VAR_6;
  }


  VAR_9 = VAR_1->lastseg;
  if (VAR_1->last_len < VAR_9->size) {
    VAR_4->table[VAR_5] = &VAR_9->e[VAR_1->last_len++];
  }
  else {
    VAR_9->next = FUNC_6(VAR_0, VAR_9);
    VAR_9 = VAR_9->next;
    VAR_9->next = ((void*)0);
    VAR_1->lastseg = VAR_9;
    VAR_1->last_len = 1;
    VAR_4->table[VAR_5] = &VAR_9->e[0];
  }
  VAR_4->table[VAR_5]->key = VAR_2;
  VAR_4->table[VAR_5]->val = VAR_3;
  VAR_4->size++;
  VAR_1->size++;
}
