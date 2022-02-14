
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* right; struct TYPE_6__* left; } ;
typedef TYPE_1__ ltree_t ;


 int FUNC_0 (TYPE_1__*,long long,int) ;
 scalar_t__ FUNC_1 (long long,int,TYPE_1__*) ;

__attribute__((used)) static ltree_t *FUNC_2 (ltree_t *VAR_0, long long VAR_1, int VAR_2) {
  while (VAR_0 && !FUNC_0 (VAR_0, VAR_1, VAR_2)) {
    VAR_0 = FUNC_1 (VAR_1, VAR_2, VAR_0) ? VAR_0->left : VAR_0->right;
  }
  return VAR_0;
}
