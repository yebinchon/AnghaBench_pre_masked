
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {int mode; int uid; int gid; int modification_time; int inode; int* name; struct filesys_directory_node* next; struct filesys_directory_node* head; struct filesys_directory_node* parent; } ;
typedef int l ;
typedef int inode_id_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,int*) ;
 int* FUNC_3 (int) ;
 struct filesys_directory_node* FUNC_4 (int) ;

__attribute__((used)) static struct filesys_directory_node *FUNC_5 (struct filesys_directory_node *VAR_1) {
  inode_id_t VAR_2;
  FUNC_1 (&VAR_2, sizeof (inode_id_t));
  FUNC_0 (VAR_2 >= -2);
  if (VAR_2 == -2LL) {
    return ((void*)0);
  }
  VAR_0++;
  struct filesys_directory_node *VAR_3 = FUNC_4 (sizeof (struct filesys_directory_node));
  FUNC_1 (&VAR_3->mode, sizeof (VAR_3->mode));
  FUNC_1 (&VAR_3->uid, sizeof (VAR_3->uid));
  FUNC_1 (&VAR_3->gid, sizeof (VAR_3->gid));
  FUNC_1 (&VAR_3->modification_time, sizeof (VAR_3->modification_time));
  int VAR_4;
  FUNC_1 (&VAR_4, sizeof (VAR_4));
  VAR_3->inode = VAR_2;
  VAR_3->parent = VAR_1;
  VAR_3->name = FUNC_3 (VAR_4 + 1);
  VAR_3->head = ((void*)0);
  struct filesys_directory_node *VAR_5 = ((void*)0);
  FUNC_1 (VAR_3->name, VAR_4);
  VAR_3->name[VAR_4] = 0;

  FUNC_2 (3, "load_index: %s\n", VAR_3->name);

  if (VAR_3->inode < 0) {
    struct filesys_directory_node *VAR_6;
    while ((VAR_6 = FUNC_5 (VAR_3)) != ((void*)0) ) {
      if (VAR_3->head == ((void*)0)) {
        VAR_3->head = VAR_5 = VAR_6;
      } else {
        VAR_5->next = VAR_6;
        VAR_5 = VAR_6;
      }
    }
  }
  return VAR_3;
}
