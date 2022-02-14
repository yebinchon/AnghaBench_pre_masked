
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* right; TYPE_1__* left; scalar_t__ N; } ;
typedef TYPE_3__ tree_num_t ;
struct TYPE_6__ {scalar_t__ N; } ;
struct TYPE_5__ {scalar_t__ N; } ;



__attribute__((used)) static inline void FUNC_0 (tree_num_t *VAR_0) {
  VAR_0->N = VAR_0->left->N + VAR_0->right->N + 1;
}
