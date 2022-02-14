
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {int dummy; } ;
typedef int inode_id_t ;


 int VAR_0 ;
 int FUNC_0 (struct filesys_inode*,unsigned int,unsigned int,char*) ;
 struct filesys_inode* FUNC_1 (int ,int ) ;

int FUNC_2 (unsigned int VAR_1, unsigned int VAR_2, inode_id_t VAR_3, char *VAR_4) {
  struct filesys_inode *VAR_5 = FUNC_1 (VAR_3, 0);
  if (VAR_5 == ((void*)0)) { return -VAR_0; }
  return FUNC_0 (VAR_5, VAR_1, VAR_2, VAR_4);
}
