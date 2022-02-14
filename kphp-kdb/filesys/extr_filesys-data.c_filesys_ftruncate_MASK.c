
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct filesys_inode {unsigned int index_filesize; unsigned int filesize; int updates; void* index_data; } ;
struct TYPE_4__ {unsigned int block_offset; unsigned int block_length; void* data; } ;
typedef TYPE_1__ filesys_tree_t ;


 void* FUNC_0 (void*,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 TYPE_1__* FUNC_2 (int ,unsigned int) ;
 TYPE_1__* FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_4 (struct filesys_inode *VAR_2, unsigned int VAR_3) {
  if (VAR_2->index_filesize > VAR_3) {
    if (VAR_2->index_data) {
      VAR_2->index_data = FUNC_0 (VAR_2->index_data, VAR_3);
      VAR_1 -= VAR_2->index_filesize - VAR_3;
    }
    VAR_2->index_filesize = VAR_3;
  }

  filesys_tree_t *VAR_4;
  while ((VAR_4 = FUNC_2 (VAR_2->updates, VAR_3))) {
    VAR_2->updates = FUNC_1 (VAR_2->updates, VAR_4->block_offset);
  }

  if (VAR_3 > 0) {
    VAR_4 = FUNC_3 (VAR_2->updates, VAR_3 - 1);
    if (VAR_4) {
      unsigned int VAR_5 = VAR_4->block_offset, VAR_6 = VAR_5 + VAR_4->block_length;
      if (VAR_6 > VAR_3) {
        VAR_4->block_length -= VAR_6 - VAR_3;
        VAR_4->data = FUNC_0 (VAR_4->data, VAR_4->block_length);
        VAR_0 -= VAR_6 - VAR_3;
      }
    }
  }
  VAR_2->filesize = VAR_3;
  return 0;
}
