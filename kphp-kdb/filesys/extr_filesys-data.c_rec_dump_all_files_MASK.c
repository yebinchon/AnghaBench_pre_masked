
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {char* name; scalar_t__ inode; struct filesys_directory_node* next; struct filesys_directory_node* head; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1 (struct filesys_directory_node *VAR_1, int VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 2 * VAR_2; VAR_3++) {
    FUNC_0 (VAR_0, " ");
  }
  FUNC_0 (VAR_0, "%s\n", VAR_1->name);
  if (VAR_1->inode >= 0) { return; }
  struct filesys_directory_node *VAR_4 = VAR_1->head;
  while (VAR_4 != ((void*)0)) {
    FUNC_1 (VAR_4, VAR_2 + 1);
    VAR_4 = VAR_4->next;
  }
}
