
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


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ,int,int) ;

int FUNC_1 (listree_t *VAR_1, int VAR_2, int VAR_3) {
  tree_ext_t *VAR_4 = VAR_1->root;
  int VAR_5 = VAR_1->N + VAR_4->delta;
  VAR_3 += VAR_2;
  if (VAR_2 < 0) {
    VAR_2 = 0;
  }
  if (VAR_3 > VAR_5) {
    VAR_3 = VAR_5;
  }
  if (VAR_3 <= VAR_2) {
    return 0;
  }
  VAR_0 += VAR_3 - VAR_2;
  if (FUNC_0 (VAR_1->A, VAR_4, VAR_1->N, VAR_5 - VAR_3, VAR_5 - VAR_2 - 1) < 0) {
    return -2;
  } else {
    VAR_0 += VAR_3 - VAR_2;
    return VAR_3 - VAR_2;
  }
}
