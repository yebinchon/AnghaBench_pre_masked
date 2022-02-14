
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int y; struct TYPE_8__* right; struct TYPE_8__* left; int * x; } ;
typedef TYPE_1__ md5_tree_t ;


 TYPE_1__* FUNC_0 (unsigned char*,int,long long) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__**,TYPE_1__*,unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*,int *,int) ;

__attribute__((used)) static md5_tree_t *FUNC_3 (md5_tree_t *VAR_0, unsigned char VAR_1[16], int VAR_2, long long VAR_3) {
  md5_tree_t *VAR_4;
  if (!VAR_0) {
    VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_3);
    return VAR_4;
  }
  if (VAR_0->y >= VAR_2) {
    if (FUNC_2 (&VAR_1[0], &VAR_0->x[0], 16) < 0) {
      VAR_0->left = FUNC_3 (VAR_0->left, VAR_1, VAR_2, VAR_3);
    } else {
      VAR_0->right = FUNC_3 (VAR_0->right, VAR_1, VAR_2, VAR_3);
    }
    return VAR_0;
  }
  VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_3);
  FUNC_1 (&VAR_4->left, &VAR_4->right, VAR_0, VAR_1);
  return VAR_4;
}
