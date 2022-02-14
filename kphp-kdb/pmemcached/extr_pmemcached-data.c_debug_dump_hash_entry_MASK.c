
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int exp_time; scalar_t__ flags; int timestamp; int accum_value; int data_len; int data; int key_len; int key; } ;
typedef TYPE_1__ hash_entry_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_2 (hash_entry_t *VAR_1) {
  FUNC_1 (VAR_0, "E->key = "); FUNC_0 (VAR_1->key, VAR_1->key_len);
  FUNC_1 (VAR_0, "E->data = "); FUNC_0 (VAR_1->data, VAR_1->data_len);
  FUNC_1 (VAR_0, "flags = %d, exp_time = %d, accum_value = %d, timestamp = %d\n", (int) VAR_1->flags, VAR_1->exp_time, VAR_1->accum_value, VAR_1->timestamp);

}
