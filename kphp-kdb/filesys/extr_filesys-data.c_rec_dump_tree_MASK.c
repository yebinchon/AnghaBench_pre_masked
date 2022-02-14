
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int block_offset; int block_length; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ filesys_tree_t ;


 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1 (filesys_tree_t *VAR_1, int VAR_2) {
  if (VAR_1 != ((void*)0)) {
    FUNC_0 (VAR_0, "[%d] [%u, %u)\n", VAR_2, VAR_1->block_offset, VAR_1->block_offset + VAR_1->block_length);
    FUNC_1 (VAR_1->left, VAR_2 + 1);
    FUNC_1 (VAR_1->right, VAR_2 + 1);
  }
}
