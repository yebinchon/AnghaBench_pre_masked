
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long long x; int y; int z; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ ltree_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static inline ltree_t *FUNC_2 (long long VAR_1, int VAR_2, int VAR_3) {
  ltree_t *VAR_4;
  VAR_4 = FUNC_1 (sizeof (ltree_t));
  FUNC_0 (VAR_4);
  VAR_4->left = VAR_4->right = 0;
  VAR_4->x = VAR_1;
  VAR_4->y = VAR_2;
  VAR_4->z = VAR_3;
  ++VAR_0;
  return VAR_4;
}
