
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val_n; int rand_n; unsigned int hash_st; unsigned int hash_mul; int perm_first; int perm_middle; int perm_last; } ;
typedef TYPE_1__ dl_crypto ;


 char VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;

void FUNC_3 (dl_crypto *VAR_1, char *VAR_2, char *VAR_3) {
  int VAR_4 = VAR_1->val_n + VAR_1->rand_n;
  FUNC_2 (VAR_2, VAR_4);
  FUNC_0 (VAR_2, VAR_1->perm_last, VAR_4);

  int VAR_5;
  unsigned int VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    VAR_2[VAR_5] = (char)((VAR_2[VAR_5] + VAR_6) % VAR_0);
    VAR_6 += VAR_2[VAR_5];
  }

  FUNC_0 (VAR_2, VAR_1->perm_middle, VAR_4);

  VAR_6 = VAR_1->hash_st;
  for (VAR_5 = 0; VAR_5 < VAR_1->rand_n; VAR_5++) {
    VAR_6 = VAR_6 * VAR_1->hash_mul + VAR_2[VAR_5];
  }

  for (VAR_5 = 0; VAR_5 < VAR_1->val_n; VAR_5++) {
    VAR_3[VAR_5] = (char)((VAR_2[VAR_5 + VAR_1->rand_n] + VAR_0 + VAR_6 % VAR_0) % VAR_0);
    VAR_6 = VAR_6 * VAR_1->hash_mul + VAR_3[VAR_5];
  }

  FUNC_0 (VAR_3, VAR_1->perm_first, VAR_1->val_n);
  FUNC_1 (VAR_3, VAR_1->val_n);
}
