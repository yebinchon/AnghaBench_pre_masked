
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_word {int sum; } ;
typedef int hash_t ;


 struct hash_word* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2 (hash_t VAR_0) {
  struct hash_word *VAR_1 = FUNC_0 (VAR_0, 0);
  return FUNC_1 (VAR_0) + (VAR_1 ? VAR_1->sum : 0);
}
