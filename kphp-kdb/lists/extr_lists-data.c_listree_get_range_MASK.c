
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int delta; } ;
typedef TYPE_1__ tree_ext_small_t ;
struct TYPE_7__ {int N; TYPE_1__** root; } ;
typedef TYPE_2__ listree_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_1 (listree_t *VAR_0, int VAR_1, int VAR_2) {
  tree_ext_small_t *VAR_3 = *VAR_0->root;
  int VAR_4 = VAR_0->N;
  int VAR_5 = VAR_4 + VAR_3->delta;
  VAR_2 += VAR_1;
  if (VAR_1 < 0) {
    VAR_1 = 0;
  }
  if (VAR_2 > VAR_5) {
    VAR_2 = VAR_5;
  }
  if (VAR_2 <= VAR_1) {
    return 0;
  }
  if (FUNC_0 (VAR_3, VAR_0, VAR_1, VAR_2 - 1) < 0) {
    return -2;
  } else {
    return VAR_2 - VAR_1;
  }
}
