
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {scalar_t__ inode; scalar_t__ reference_count; struct filesys_inode* hnext; } ;
typedef scalar_t__ inode_id_t ;


 void** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct filesys_inode* FUNC_0 (int) ;

struct filesys_inode *FUNC_1 (inode_id_t VAR_3, int VAR_4) {
  if (VAR_3 < 0) {
    return ((void*)0);
  }
  unsigned VAR_5 = ((unsigned) VAR_3) & (VAR_1 - 1);
  struct filesys_inode **VAR_6 = VAR_0 + VAR_5, *VAR_7;
  while (*VAR_6) {
    VAR_7 = *VAR_6;
    if (VAR_7->inode == VAR_3) {
      *VAR_6 = VAR_7->hnext;
      int VAR_8 = 1;
      if (VAR_4 < 0) {
        if (--(VAR_7->reference_count) <= 0) {
          VAR_8 = 0;
        }
      }
      if (VAR_8) {
        VAR_7->hnext = VAR_0[VAR_5];
        VAR_0[VAR_5] = VAR_7;
      }
      return VAR_7;
    }
    VAR_6 = &VAR_7->hnext;
  }
  if (VAR_4 <= 0) {
    return ((void*)0);
  }
  VAR_7 = FUNC_0 (sizeof (struct filesys_inode));
  VAR_7->inode = VAR_3;
  VAR_7->hnext = VAR_0[VAR_5];

  VAR_0[VAR_5] = VAR_7;
  VAR_2++;
  return VAR_7;
}
