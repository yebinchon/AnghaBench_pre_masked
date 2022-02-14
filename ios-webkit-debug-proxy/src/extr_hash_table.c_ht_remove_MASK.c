
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ht_t ;
typedef TYPE_2__* ht_entry_t ;
struct TYPE_10__ {struct TYPE_10__* next; int * value; } ;
struct TYPE_9__ {int num_keys; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,void const*,int *,TYPE_2__***,TYPE_2__**,TYPE_2__**) ;

void *FUNC_2(ht_t VAR_0, const void *VAR_1) {
  ht_entry_t *VAR_2;
  ht_entry_t VAR_3;
  ht_entry_t VAR_4;
  FUNC_1(VAR_0, VAR_1, ((void*)0), &VAR_2, &VAR_3, &VAR_4);
  void *VAR_5 = (VAR_4 ? VAR_4->value : ((void*)0));
  if (VAR_4) {
    if (VAR_3) {
      VAR_3->next = VAR_4->next;
    } else {
      *VAR_2 = VAR_4->next;
    }
    FUNC_0(VAR_4);
    VAR_0->num_keys--;
  }
  return VAR_5;
}
