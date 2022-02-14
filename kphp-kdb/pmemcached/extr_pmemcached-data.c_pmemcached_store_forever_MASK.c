
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_pmemcached_store_forever {int type; int data_len; scalar_t__ key_len; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int,scalar_t__,int ,int ,int ) ;

int FUNC_2 (struct lev_pmemcached_store_forever *VAR_1) {
  FUNC_0 (VAR_1->data, VAR_1->key_len, 0);

  return FUNC_1 (VAR_1->type & 3, VAR_1->data+VAR_1->key_len, VAR_1->data_len, 0, VAR_0);
}
