
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_pmemcached_incr_tiny {scalar_t__ type; int key_len; int key; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char) ;

int FUNC_2 (struct lev_pmemcached_incr_tiny *VAR_0) {
  FUNC_0 (VAR_0->key, VAR_0->key_len, 0);
  return FUNC_1 ((signed char)VAR_0->type);
}
