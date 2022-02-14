
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int block_offset; struct TYPE_4__* left; struct TYPE_4__* right; } ;
typedef TYPE_1__ filesys_tree_t ;



__attribute__((used)) static filesys_tree_t *FUNC_0 (filesys_tree_t *VAR_0, unsigned int VAR_1) {
  filesys_tree_t *VAR_2 = ((void*)0);
  while (VAR_0) {
    if (VAR_1 > VAR_0->block_offset) {
      VAR_2 = VAR_0;
      VAR_0 = VAR_0->right;
    } else if (VAR_1 < VAR_0->block_offset) {
      VAR_0 = VAR_0->left;
    } else {
      return VAR_0;
    }
  }
  return VAR_2;
}
