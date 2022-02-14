
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_pmemcached_get {int key_len; int key; } ;
struct data {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct data FUNC_1 () ;

struct data FUNC_2 (struct lev_pmemcached_get *VAR_0) {
  FUNC_0 (VAR_0->key, VAR_0->key_len, 0);
  return FUNC_1 ();
}
