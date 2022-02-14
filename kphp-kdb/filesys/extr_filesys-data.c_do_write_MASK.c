
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {scalar_t__ inode; } ;


 int FUNC_0 (unsigned int,unsigned int,scalar_t__,char*) ;
 struct filesys_directory_node* FUNC_1 (char const*,int ) ;
 int VAR_0 ;

int FUNC_2 (unsigned int VAR_1, unsigned int VAR_2, char *VAR_3, const char *VAR_4) {
  struct filesys_directory_node *VAR_5 = FUNC_1 (VAR_4, VAR_0);
  if (VAR_5 == ((void*)0)) { return -1; }
  if (VAR_5->inode < 0) { return -2; }
  return FUNC_0 (VAR_1, VAR_2, VAR_5->inode, VAR_3);
}
