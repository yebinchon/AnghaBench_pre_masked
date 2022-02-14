
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct item {int key_len; int value_len; struct item* value; struct item* key; } ;
struct TYPE_4__ {scalar_t__ size; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int,struct item*) ;
 int FUNC_2 (struct item*,int) ;

void FUNC_3 (struct item *VAR_3) {
  VAR_0 = FUNC_1 (VAR_0, VAR_3->key_len, VAR_3->key);
  VAR_1 --;
  FUNC_0 (VAR_0 ? (VAR_0->size == VAR_1) : (!VAR_1));
  if (VAR_3->key_len) {
    FUNC_2 (VAR_3->key, 4 * VAR_3->key_len);
    VAR_2 -= 4 * VAR_3->key_len;
  }
  if (VAR_3->value_len) {
    FUNC_2 (VAR_3->value, 4 * VAR_3->value_len);
    VAR_2 -= 4 * VAR_3->value_len;
  }
  FUNC_2 (VAR_3, sizeof (*VAR_3));
  VAR_2 -= sizeof (*VAR_3);
}
