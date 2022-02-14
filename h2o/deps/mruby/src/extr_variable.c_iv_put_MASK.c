
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* key; struct TYPE_4__* next; void** val; } ;
typedef TYPE_1__ segment ;
typedef void* mrb_value ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;
struct TYPE_5__ {size_t last_len; TYPE_1__* rootseg; int size; } ;
typedef TYPE_2__ iv_tbl ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_1, iv_tbl *VAR_2, mrb_sym VAR_3, mrb_value VAR_4)
{
  segment *VAR_5;
  segment *VAR_6 = ((void*)0);
  segment *VAR_7 = ((void*)0);
  size_t VAR_8 = 0;
  size_t VAR_9;

  if (VAR_2 == ((void*)0)) return;
  VAR_5 = VAR_2->rootseg;
  while (VAR_5) {
    for (VAR_9=0; VAR_9<VAR_0; VAR_9++) {
      mrb_sym VAR_10 = VAR_5->key[VAR_9];

      if (!VAR_5->next && VAR_9 >= VAR_2->last_len) {
        VAR_5->key[VAR_9] = VAR_3;
        VAR_5->val[VAR_9] = VAR_4;
        VAR_2->last_len = VAR_9+1;
        VAR_2->size++;
        return;
      }
      if (!VAR_7 && VAR_10 == 0) {
        VAR_7 = VAR_5;
        VAR_8 = VAR_9;
      }
      else if (VAR_10 == VAR_3) {
        VAR_5->val[VAR_9] = VAR_4;
        return;
      }
    }
    VAR_6 = VAR_5;
    VAR_5 = VAR_5->next;
  }


  VAR_2->size++;
  if (VAR_7) {
    VAR_7->key[VAR_8] = VAR_3;
    VAR_7->val[VAR_8] = VAR_4;
    return;
  }

  VAR_5 = (segment*)FUNC_0(VAR_1, sizeof(segment));
  if (!VAR_5) return;
  VAR_5->next = ((void*)0);
  VAR_5->key[0] = VAR_3;
  VAR_5->val[0] = VAR_4;
  VAR_2->last_len = 1;
  if (VAR_6) {
    VAR_6->next = VAR_5;
  }
  else {
    VAR_2->rootseg = VAR_5;
  }
}
