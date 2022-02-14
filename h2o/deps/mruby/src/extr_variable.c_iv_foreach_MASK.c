
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* key; struct TYPE_4__* next; int * val; } ;
typedef TYPE_1__ segment ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;
typedef scalar_t__ (* mrb_iv_foreach_func ) (int *,scalar_t__,int ,void*) ;
struct TYPE_5__ {size_t last_len; TYPE_1__* rootseg; } ;
typedef TYPE_2__ iv_tbl ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ,void*) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_1, iv_tbl *VAR_2, mrb_iv_foreach_func *VAR_3, void *VAR_4)
{
  segment *VAR_5;
  size_t VAR_6;

  if (VAR_2 == ((void*)0)) return;
  VAR_5 = VAR_2->rootseg;
  while (VAR_5) {
    for (VAR_6=0; VAR_6<VAR_0; VAR_6++) {
      mrb_sym VAR_7 = VAR_5->key[VAR_6];


      if (!VAR_5->next && VAR_6 >= VAR_2->last_len) {
        return;
      }
      if (VAR_7 != 0) {
        if ((*VAR_3)(VAR_1, VAR_7, VAR_5->val[VAR_6], VAR_4) != 0) {
          return;
        }
      }
    }
    VAR_5 = VAR_5->next;
  }
  return;
}
