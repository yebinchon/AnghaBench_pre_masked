
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {int dummy; } ;
struct filesys_directory_node {scalar_t__ inode; } ;


 struct filesys_directory_node* FUNC_0 (char const*,int ) ;
 int FUNC_1 (struct filesys_inode*,unsigned int,unsigned int,char*) ;
 struct filesys_inode* FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,scalar_t__) ;

int FUNC_4 (unsigned int VAR_1, unsigned int VAR_2, const char *VAR_3, char *VAR_4) {
  struct filesys_directory_node *VAR_5 = FUNC_0 (VAR_3, VAR_0);
  if (VAR_5 == ((void*)0)) { return -1; }
  if (VAR_5->inode < 0) { return -2; }
  struct filesys_inode *VAR_6 = FUNC_2 (VAR_5->inode, 0);
  if (VAR_6 == ((void*)0)) { return -3; }

  FUNC_3 (3, "do_read: inode = %lld\n", VAR_5->inode);

  return FUNC_1 (VAR_6, VAR_1, VAR_2, VAR_4);
}
