
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ht_t ;
typedef TYPE_1__* ht_entry_t ;
struct TYPE_5__ {void* key; void* value; struct TYPE_5__* next; } ;


 int FUNC_0 (int ,void const*,int *,TYPE_1__***,TYPE_1__**,TYPE_1__**) ;

void *FUNC_1(ht_t VAR_0, const void *VAR_1, int VAR_2) {
  ht_entry_t *VAR_3;
  ht_entry_t VAR_4;
  ht_entry_t VAR_5;
  FUNC_0(VAR_0, VAR_1, ((void*)0), &VAR_3, &VAR_4, &VAR_5);
  if (!VAR_5) {
    return ((void*)0);
  }
  if (VAR_4) {

    VAR_4->next = VAR_5->next;
    VAR_5->next = *VAR_3;
    *VAR_3 = VAR_5;
  }
  return (VAR_2 ? VAR_5->key : VAR_5->value);
}
