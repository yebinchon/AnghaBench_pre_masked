
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_word {int num; } ;
typedef int hash_t ;


 struct hash_word* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2 (hash_t VAR_0, int *VAR_1) {
  struct hash_word *VAR_2 = FUNC_0 (VAR_0, 0);
  int VAR_3 = FUNC_1 (VAR_0);
  int VAR_4 = (VAR_2 ? VAR_2->num : 0);
  *VAR_1 = (!VAR_3 || !VAR_4);
  return VAR_3 + VAR_4;
}
