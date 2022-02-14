
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {int reference_count; } ;
struct filesys_directory_node {scalar_t__ inode; int gid; int uid; int mode; } ;
typedef scalar_t__ inode_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct filesys_directory_node*) ;
 struct filesys_directory_node* FUNC_2 (char const*,int ) ;
 struct filesys_inode* FUNC_3 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_5 (const char *VAR_5, const char *VAR_6) {
  FUNC_4 (2, "filesys_rename (%s, %s)\n", VAR_5, VAR_6);

  struct filesys_directory_node *VAR_7 = FUNC_2 (VAR_5, VAR_3);
  if (VAR_7 == ((void*)0)) { return -VAR_1; }
  if (VAR_7->inode < 0) { return -VAR_1; }
  struct filesys_directory_node *VAR_8 = FUNC_2 (VAR_6, VAR_3);
  if (VAR_8 != ((void*)0) && VAR_8->inode == VAR_7->inode) {


    return 0;
  }

  inode_id_t VAR_9 = VAR_7->inode;
  struct filesys_inode *VAR_10 = FUNC_3 (VAR_9, 0);
  if (VAR_10 == ((void*)0)) { return -VAR_0; }
  if (VAR_8 != ((void*)0)) {
    VAR_8 = FUNC_2 (VAR_6, VAR_4);
    FUNC_0 (VAR_8 != ((void*)0));
    FUNC_1 (VAR_8);
  }

  VAR_8 = FUNC_2 (VAR_6, VAR_2);
  if (VAR_8 == ((void*)0)) { return -VAR_1; }
  VAR_10->reference_count++;
  VAR_8->inode = VAR_9;
  VAR_8->mode = VAR_7->mode;
  VAR_8->uid = VAR_7->uid;
  VAR_8->gid = VAR_7->gid;
  VAR_7 = FUNC_2 (VAR_5, VAR_4);
  FUNC_0 (VAR_7 != ((void*)0));
  FUNC_1 (VAR_7);
  return 0;
}
