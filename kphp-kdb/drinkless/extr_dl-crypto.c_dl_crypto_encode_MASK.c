
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val_n; unsigned int hash_st; int rand_n; unsigned int hash_mul; int perm_last; int perm_middle; int perm_first; } ;
typedef TYPE_1__ dl_crypto ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4 (dl_crypto *VAR_1, char *VAR_2, char *VAR_3) {
  FUNC_2 (VAR_2, VAR_1->val_n);
  FUNC_0 (VAR_2, VAR_1->perm_first, VAR_1->val_n);

  int VAR_4;
  unsigned int VAR_5 = VAR_1->hash_st;
  for (VAR_4 = 0; VAR_4 < VAR_1->rand_n; VAR_4++) {
    VAR_3[VAR_4] = (char)((unsigned int)FUNC_3() % VAR_0);
    VAR_5 = VAR_5 * VAR_1->hash_mul + VAR_3[VAR_4];
  }

  for (VAR_4 = 0; VAR_4 < VAR_1->val_n; VAR_4++) {
    VAR_3[VAR_4 + VAR_1->rand_n] = (char)((VAR_2[VAR_4] + VAR_0 - VAR_5 % VAR_0) % VAR_0);
    VAR_5 = VAR_5 * VAR_1->hash_mul + VAR_2[VAR_4];
  }

  int VAR_6 = VAR_1->val_n + VAR_1->rand_n;

  FUNC_0 (VAR_3, VAR_1->perm_middle, VAR_6);

  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
    char VAR_7 = VAR_3[VAR_4];
    VAR_3[VAR_4] = (char)((VAR_3[VAR_4] + VAR_0 - VAR_5 % VAR_0) % VAR_0);
    VAR_5 += VAR_7;
  }

  FUNC_0 (VAR_3, VAR_1->perm_last, VAR_6);
  FUNC_1 (VAR_3, VAR_6);
}
