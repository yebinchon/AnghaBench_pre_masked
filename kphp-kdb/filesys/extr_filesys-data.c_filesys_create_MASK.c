
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {int reference_count; int index_offset; scalar_t__ index_filesize; scalar_t__ filesize; int modification_time; } ;
struct filesys_directory_node {int mode; unsigned short uid; unsigned short gid; int inode; } ;
typedef int inode_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct filesys_directory_node* FUNC_0 (char const*,int ) ;
 struct filesys_inode* FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char*,char const*,int,unsigned short,unsigned short,int) ;

__attribute__((used)) static inode_id_t FUNC_3 (const char *VAR_5, int VAR_6, unsigned short VAR_7, unsigned short VAR_8) {
  struct filesys_directory_node *VAR_9 = FUNC_0 (VAR_5, VAR_3);
  if (VAR_9 != ((void*)0)) {
    return -3;
  }
  VAR_9 = FUNC_0 (VAR_5, VAR_2);
  if (VAR_9 == ((void*)0)) {
    return -2;
  }
  VAR_9->mode = VAR_6 | VAR_0;
  VAR_9->uid = VAR_7;
  VAR_9->gid = VAR_8;
  VAR_9->inode = VAR_1++;

  FUNC_2 (2, "creat: %s, mode = %o, uid = %d, gid = %d, inode = %lld\n", VAR_5, VAR_6, VAR_7, VAR_8, VAR_9->inode);

  struct filesys_inode *VAR_10 = FUNC_1 (VAR_9->inode, 1);
  VAR_10->reference_count = 1;
  VAR_10->modification_time = VAR_4;
  VAR_10->filesize = VAR_10->index_filesize = 0;
  VAR_10->index_offset = -1;
  return VAR_9->inode;
}
