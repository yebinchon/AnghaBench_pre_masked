
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int next_entry; int key_hash; scalar_t__ data_len; int data; scalar_t__ key_len; int key; } ;
typedef TYPE_1__ hash_entry_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5 (int VAR_4) {
  hash_entry_t *VAR_5 = &VAR_2[VAR_4];

  FUNC_3 (VAR_4);
  FUNC_2 (VAR_4);

  FUNC_4 (VAR_5->key, VAR_5->key_len + 1);
  FUNC_4 (VAR_5->data, VAR_5->data_len + 1);

  int *VAR_6 = &VAR_3[FUNC_0 (VAR_5->key_hash)];

  while (*VAR_6 != VAR_4 && *VAR_6 != -1) {
    VAR_6 = &(VAR_2[*VAR_6].next_entry);
  }

  FUNC_1 (*VAR_6 == VAR_4);

  *VAR_6 = VAR_5->next_entry;

  VAR_0[VAR_1++] = VAR_4;
}
