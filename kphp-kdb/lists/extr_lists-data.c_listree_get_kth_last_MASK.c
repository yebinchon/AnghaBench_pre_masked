
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int delta; } ;
typedef TYPE_1__ tree_ext_small_t ;
struct TYPE_6__ {int N; TYPE_1__** root; } ;
typedef TYPE_2__ listree_t ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static inline void FUNC_1 (listree_t *VAR_0, int VAR_1) {
  tree_ext_small_t *VAR_2 = *VAR_0->root;
  FUNC_0 (VAR_0, VAR_0->N + VAR_2->delta - 1 - VAR_1);
}
