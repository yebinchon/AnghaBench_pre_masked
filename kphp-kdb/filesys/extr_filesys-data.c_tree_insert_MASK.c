
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int y; unsigned int block_offset; struct TYPE_8__* right; struct TYPE_8__* left; } ;
typedef TYPE_1__ filesys_tree_t ;


 TYPE_1__* FUNC_0 (unsigned int,int,unsigned int,char*) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__**,TYPE_1__*,unsigned int) ;

__attribute__((used)) static filesys_tree_t *FUNC_2 (filesys_tree_t *VAR_0, unsigned int VAR_1, int VAR_2, unsigned int VAR_3, char *VAR_4) {
  filesys_tree_t *VAR_5;
  if (!VAR_0) {
    VAR_5 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);
    return VAR_5;
  }
  if (VAR_0->y >= VAR_2) {
    if (VAR_1 < VAR_0->block_offset) {
      VAR_0->left = FUNC_2 (VAR_0->left, VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
      VAR_0->right = FUNC_2 (VAR_0->right, VAR_1, VAR_2, VAR_3, VAR_4);
    }
    return VAR_0;
  }
  VAR_5 = FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_1 (&VAR_5->left, &VAR_5->right, VAR_0, VAR_1);
  return VAR_5;
}
