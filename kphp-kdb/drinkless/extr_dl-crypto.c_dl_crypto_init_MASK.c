
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val_n; int rand_n; int hash_st; int hash_mul; void* perm_last; void* perm_middle; void* perm_first; } ;
typedef TYPE_1__ dl_crypto ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;

void FUNC_3 (dl_crypto *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  FUNC_0 ((VAR_0 & 1) == 1);

  VAR_1->val_n = VAR_2;
  VAR_1->rand_n = VAR_3;
  VAR_1->hash_st = VAR_4;
  VAR_1->hash_mul = VAR_5;

  FUNC_2 ((unsigned int)VAR_6);
  int VAR_7 = VAR_2 + VAR_3;
  VAR_1->perm_first = FUNC_1 (VAR_2);
  VAR_1->perm_middle = FUNC_1 (VAR_7);
  VAR_1->perm_last = FUNC_1 (VAR_7);
}
