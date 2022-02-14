
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ht_entry_struct {int dummy; } ;
typedef TYPE_1__* ht_t ;
typedef TYPE_2__* ht_entry_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {size_t num_buckets; TYPE_2__** buckets; int num_keys; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2(ht_t VAR_0) {
  size_t VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->num_buckets; VAR_1++) {
    ht_entry_t VAR_2 = VAR_0->buckets[VAR_1];
    while (VAR_2) {
      ht_entry_t VAR_3 = VAR_2->next;
      FUNC_1(VAR_2, 0, sizeof(struct ht_entry_struct));
      FUNC_0(VAR_2);
      VAR_0->num_keys--;
      VAR_2 = VAR_3;
    }
    VAR_0->buckets[VAR_1] = ((void*)0);
  }
}
