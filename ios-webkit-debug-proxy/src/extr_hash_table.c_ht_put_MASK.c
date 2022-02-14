
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ht_entry_struct {int dummy; } ;
typedef TYPE_1__* ht_t ;
typedef TYPE_2__* ht_entry_t ;
struct TYPE_11__ {intptr_t hc; struct TYPE_11__* next; int * value; void* key; } ;
struct TYPE_10__ {int num_keys; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,void*,intptr_t*,TYPE_2__***,TYPE_2__**,TYPE_2__**) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

void *FUNC_4(ht_t VAR_0, void *VAR_1, void *VAR_2) {
  ht_entry_t *VAR_3;
  ht_entry_t VAR_4;
  ht_entry_t VAR_5;
  intptr_t VAR_6;
  FUNC_1(VAR_0, VAR_1, &VAR_6, &VAR_3, &VAR_4, &VAR_5);
  void *VAR_7 = (VAR_5 ? VAR_5->value : ((void*)0));
  if (VAR_5) {
    if (VAR_2) {
      VAR_5->value = VAR_2;
    } else {
      if (VAR_4) {
        VAR_4->next = VAR_5->next;
      } else {
        *VAR_3 = VAR_5->next;
      }
      FUNC_0(VAR_5);
      VAR_0->num_keys--;
    }
  } else if (VAR_2) {
    VAR_5 = (ht_entry_t)FUNC_2(sizeof(struct ht_entry_struct));

    FUNC_3(VAR_5, 0, sizeof(struct ht_entry_struct));
    VAR_5->hc = VAR_6;
    VAR_5->key = VAR_1;
    VAR_5->value = VAR_2;
    VAR_5->next = *VAR_3;
    *VAR_3 = VAR_5;
    VAR_0->num_keys++;
  }
  return VAR_7;
}
