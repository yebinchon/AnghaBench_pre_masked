
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rand_n; scalar_t__ val_n; int perm_last; int perm_middle; int perm_first; } ;
typedef TYPE_1__ dl_crypto ;


 int FUNC_0 (int ,int) ;

void FUNC_1 (dl_crypto *VAR_0) {
  FUNC_0 (VAR_0->perm_first, sizeof (int) * (size_t)VAR_0->val_n);
  FUNC_0 (VAR_0->perm_middle, sizeof (int) * (size_t)(VAR_0->val_n + VAR_0->rand_n));
  FUNC_0 (VAR_0->perm_last, sizeof (int) * (size_t)(VAR_0->val_n + VAR_0->rand_n));
}
