
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int y; TYPE_2__* right; TYPE_1__* left; scalar_t__ delta; } ;
typedef TYPE_3__ tree_ext_t ;
struct TYPE_6__ {scalar_t__ delta; } ;
struct TYPE_5__ {scalar_t__ delta; } ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static inline void FUNC_0 (tree_ext_t *VAR_1) {
  VAR_1->delta = VAR_1->left->delta + VAR_1->right->delta + VAR_0[VAR_1->y & 3];
}
