
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int block_offset; int y; char* data; unsigned int block_length; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ filesys_tree_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static filesys_tree_t *FUNC_2 (unsigned int VAR_1, int VAR_2, unsigned int VAR_3, char *VAR_4) {
  filesys_tree_t *VAR_5;
  VAR_5 = FUNC_1 (sizeof (filesys_tree_t));
  FUNC_0 (VAR_5);
  VAR_0++;
  VAR_5->left = VAR_5->right = 0;
  VAR_5->block_offset = VAR_1;
  VAR_5->y = VAR_2;
  VAR_5->data = VAR_4;
  VAR_5->block_length = VAR_3;
  return VAR_5;
}
