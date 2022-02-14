
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {unsigned int index_filesize; int * index_data; } ;


 unsigned int FUNC_0 (struct filesys_inode*,unsigned int,unsigned int,char*,unsigned int*) ;
 int FUNC_1 (struct filesys_inode*) ;
 int FUNC_2 (char*,int *,unsigned int) ;
 int FUNC_3 (char*,int ,unsigned int) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static int FUNC_5 (struct filesys_inode *VAR_0, unsigned int VAR_1, unsigned int VAR_2, char *VAR_3) {
  unsigned int VAR_4;
  FUNC_3 (VAR_3, 0, VAR_2);
  if (FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4) == VAR_2) {
    return VAR_2;
  }

  FUNC_4 (3, "filesys_read: before memset\n");

  if (VAR_1 >= VAR_0->index_filesize) {

    return VAR_4;
  }
  FUNC_1 (VAR_0);
  if (VAR_0->index_data) {
    unsigned int VAR_5 = VAR_0->index_filesize - VAR_1;
    if (VAR_5 > VAR_2) {
      VAR_5 = VAR_2;
    }
    FUNC_2 (VAR_3, &VAR_0->index_data[VAR_1], VAR_5);
    if (VAR_4 < VAR_5) {
      VAR_4 = VAR_5;
    }
  }
  unsigned int VAR_6;
  FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, &VAR_6);
  return VAR_4;
}
