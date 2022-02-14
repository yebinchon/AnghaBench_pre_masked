
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int delta; } ;
typedef TYPE_1__ tree_ext_t ;
struct TYPE_6__ {int N; int A; TYPE_1__* root; } ;
typedef TYPE_2__ listree_t ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ,int,int) ;

int FUNC_1 (listree_t *VAR_0, int VAR_1, int VAR_2) {
  tree_ext_t *VAR_3 = VAR_0->root;
  int VAR_4 = VAR_0->N + VAR_3->delta;
  VAR_2 += VAR_1;
  if (VAR_1 < 0) {
    VAR_1 = 0;
  }
  if (VAR_2 > VAR_4) {
    VAR_2 = VAR_4;
  }
  if (VAR_2 <= VAR_1) {
    return 0;
  }
  if (FUNC_0 (VAR_0->A, VAR_3, VAR_0->N, VAR_1, VAR_2 - 1) < 0) {
    return -2;
  } else {
    return VAR_2 - VAR_1;
  }
}
