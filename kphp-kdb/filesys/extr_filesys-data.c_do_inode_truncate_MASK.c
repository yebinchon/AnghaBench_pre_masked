
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_filesys_ftruncate {unsigned int size; int inode; } ;
struct filesys_inode {int dummy; } ;
typedef int inode_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct lev_filesys_ftruncate* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct filesys_inode*,unsigned int) ;
 struct filesys_inode* FUNC_2 (int ,int ) ;

int FUNC_3 (inode_id_t VAR_2, unsigned int VAR_3) {
  struct filesys_inode *VAR_4 = FUNC_2 (VAR_2, 0);
  if (VAR_4 == ((void*)0)) { return -VAR_0; }
  struct lev_filesys_ftruncate *VAR_5 = FUNC_0 (VAR_1, sizeof (struct lev_filesys_ftruncate), 0);
  VAR_5->inode = VAR_2;
  VAR_5->size = VAR_3;
  return FUNC_1 (VAR_4, VAR_3);
}
