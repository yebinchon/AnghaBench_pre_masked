
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_pmemcached_store {int type; int delay; int flags; int data_len; scalar_t__ key_len; scalar_t__ data; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int,scalar_t__,int ,int ,int ) ;

int FUNC_2 (struct lev_pmemcached_store *VAR_0) {
  FUNC_0 (VAR_0->data, VAR_0->key_len, 0);
  return FUNC_1 (VAR_0->type & 3, VAR_0->data+VAR_0->key_len, VAR_0->data_len, VAR_0->flags, VAR_0->delay);
}
