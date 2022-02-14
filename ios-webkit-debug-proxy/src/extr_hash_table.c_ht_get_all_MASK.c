
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ht_t ;
typedef TYPE_2__* ht_entry_t ;
struct TYPE_5__ {int value; int key; struct TYPE_5__* next; } ;
struct TYPE_4__ {size_t num_buckets; TYPE_2__** buckets; scalar_t__ num_keys; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;

void **FUNC_1(ht_t VAR_0, int VAR_1) {
  void **VAR_2 = (void **)FUNC_0(VAR_0->num_keys+1, sizeof(void *));
  if (VAR_2) {
    void **VAR_3 = VAR_2;
    size_t VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0->num_buckets; VAR_4++) {
      ht_entry_t VAR_5;
      for (VAR_5 = VAR_0->buckets[VAR_4]; VAR_5; VAR_5 = VAR_5->next) {
        *VAR_3++ = (VAR_1 ? VAR_5->key : VAR_5->value);
      }
    }
  }
  return VAR_2;
}
