
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct filesys_inode {int updates; } ;
struct TYPE_5__ {unsigned int block_length; unsigned int block_offset; int * data; } ;
typedef TYPE_1__ filesys_tree_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,TYPE_1__*) ;
 int FUNC_3 (int *,int,unsigned int,int ) ;
 int FUNC_4 (char*,int *,unsigned int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (int ,unsigned int) ;
 TYPE_1__* FUNC_6 (int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_7 (int,char*,unsigned int,...) ;

__attribute__((used)) static unsigned int FUNC_8 (struct filesys_inode *VAR_2, unsigned int VAR_3, unsigned int VAR_4, char *VAR_5, unsigned int *VAR_6) {
  const unsigned int VAR_7 = VAR_3 + VAR_4;
  unsigned int VAR_8 = 0;
  *VAR_6 = 0;

  if (VAR_1 >= 3) {
    FUNC_1 (VAR_2->updates);
  }

  if (VAR_3 > 0) {
    filesys_tree_t *VAR_9 = FUNC_6 (VAR_2->updates, VAR_3 - 1);
    if (VAR_1 >= 3) {
      FUNC_2 (VAR_0, "copy_updates: T = %p\n", VAR_9);
      FUNC_3 (VAR_9->data, 1, VAR_9->block_length, VAR_0);
    }
    if (VAR_9 != ((void*)0)) {
      unsigned int VAR_10 = VAR_9->block_offset, VAR_11 = VAR_10 + VAR_9->block_length;

      FUNC_7 (3, "copy_updates: tr = %d, to = %d\n", VAR_10, VAR_11);

      *VAR_6 = VAR_11 - VAR_3;
      FUNC_0 (VAR_10 < VAR_3);
      if (VAR_11 > VAR_3) {
        unsigned int VAR_12 = VAR_11 - VAR_3;
        if (VAR_12 > VAR_4) {
          VAR_12 = VAR_4;
        }

        FUNC_7 (3, "copy_updates: moved_bytes = %d, start pos %d\n", VAR_12, VAR_3 - VAR_9->block_offset);

        FUNC_4 (VAR_5, &VAR_9->data[VAR_3 - VAR_9->block_offset], VAR_12);
        VAR_8 += VAR_12;
      }
    }
  }
  unsigned int VAR_13 = VAR_3;
  while (VAR_13 < VAR_7) {
    filesys_tree_t *VAR_14 = FUNC_5 (VAR_2->updates, VAR_13);
    if (VAR_14 == ((void*)0)) {
      break;
    }
    VAR_13 = VAR_14->block_offset;
    if (VAR_13 >= VAR_7) {
      break;
    }
    *VAR_6 = (VAR_13 + VAR_14->block_length) - VAR_3;
    unsigned int VAR_15 = VAR_4 - (VAR_13 - VAR_3);
    if (VAR_15 > VAR_14->block_length) {
      VAR_15 = VAR_14->block_length;
    }

    FUNC_7 (3, "copy_updates: moved_bytes = %d, dest pos %d\n", VAR_15, VAR_13 - VAR_3);

    VAR_8 += VAR_15;
    FUNC_4 (&VAR_5[VAR_13 - VAR_3], &VAR_14->data[0], VAR_15);
    VAR_13 += VAR_14->block_length;
  }
  FUNC_0 (VAR_8 <= VAR_4);

  FUNC_7 (3, "copy_updates: returns %d\n", VAR_8);

  return VAR_8;
}
