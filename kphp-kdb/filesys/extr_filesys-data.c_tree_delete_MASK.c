
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int block_offset; scalar_t__ y; struct TYPE_5__* left; struct TYPE_5__* right; } ;
typedef TYPE_1__ filesys_tree_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static filesys_tree_t *FUNC_1 (filesys_tree_t *VAR_0, unsigned int VAR_1) {
  filesys_tree_t *VAR_2 = VAR_0, **VAR_3 = &VAR_2, *VAR_4, *VAR_5;
  while (VAR_1 != VAR_0->block_offset) {
    VAR_3 = (VAR_1 < VAR_0->block_offset) ? &VAR_0->left : &VAR_0->right;
    VAR_0 = *VAR_3;
    if (!VAR_0) { return VAR_2; }
  }

  VAR_4 = VAR_0->left;
  VAR_5 = VAR_0->right;
  FUNC_0 (VAR_0);
  while (VAR_4 && VAR_5) {
    if (VAR_4->y > VAR_5->y) {
      *VAR_3 = VAR_4;
      VAR_3 = &VAR_4->right;
      VAR_4 = *VAR_3;
    } else {
      *VAR_3 = VAR_5;
      VAR_3 = &VAR_5->left;
      VAR_5 = *VAR_3;
    }
  }
  *VAR_3 = VAR_4 ? VAR_4 : VAR_5;
  return VAR_2;
}
