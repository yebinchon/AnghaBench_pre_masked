
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int key_len; int data_len; int timestamp; scalar_t__ key; scalar_t__ data; } ;
typedef TYPE_1__ hash_entry_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__,int) ;

void FUNC_7 (hash_entry_t *VAR_4) {
  FUNC_0 (VAR_4);
  if (VAR_3 >= 4) {
    FUNC_3(VAR_1, "deleted %p\n", VAR_4);
    FUNC_1 (VAR_4);
  }

  FUNC_2 (VAR_4);

  VAR_2 = FUNC_5 (VAR_2, VAR_4);

  FUNC_6 (VAR_4->key, VAR_4->key_len + 1);
  FUNC_6 (VAR_4->data, VAR_4->data_len + 1);
  VAR_0 -= VAR_4->key_len + VAR_4->data_len + 2;

  VAR_4->key = 0;
  VAR_4->key_len = -1;
  VAR_4->timestamp = -1;

  FUNC_4 (VAR_4);
}
