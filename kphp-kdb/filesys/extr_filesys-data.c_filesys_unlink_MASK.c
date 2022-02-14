
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {scalar_t__ reference_count; } ;
struct filesys_directory_node {int inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct filesys_directory_node*) ;
 struct filesys_directory_node* FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct filesys_inode*) ;
 struct filesys_inode* FUNC_3 (int ,int) ;
 int VAR_2 ;
 int FUNC_4 (int,char*,char const*) ;

__attribute__((used)) static int FUNC_5 (const char *VAR_3) {
  FUNC_4 (2, "filesys_unlink (%s)\n", VAR_3);
  struct filesys_directory_node *VAR_4 = FUNC_1 (VAR_3, VAR_2);
  if (VAR_4 == ((void*)0)) { return -VAR_1; }
  struct filesys_inode *VAR_5 = FUNC_3 (VAR_4->inode, -1);
  if (VAR_5 == ((void*)0)) { return -VAR_0; }
  if (VAR_5->reference_count <= 0) {
    FUNC_2 (VAR_5);
  }
  FUNC_0 (VAR_4);
  return 0;
}
