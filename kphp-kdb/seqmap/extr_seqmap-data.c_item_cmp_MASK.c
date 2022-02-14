
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int key; int key_len; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

int FUNC_1 (const struct item *VAR_0, const struct item *VAR_1) {
  if (VAR_0 == VAR_1) { return 0; }


  return FUNC_0 (VAR_0->key_len, VAR_0->key, VAR_1->key_len, VAR_1->key);
}
