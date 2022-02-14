
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {struct filesys_inode* next; struct filesys_inode* prev; } ;


 struct filesys_inode* VAR_0 ;
 struct filesys_inode* VAR_1 ;

__attribute__((used)) static void FUNC_0 (struct filesys_inode *VAR_2) {
  if (VAR_1 == ((void*)0)) {
    VAR_0 = VAR_1 = VAR_2;
    VAR_2->prev = VAR_2->next = ((void*)0);
  } else {
    VAR_1->next = VAR_2;
    VAR_2->prev = VAR_1;
    VAR_2->next = ((void*)0);
    VAR_1 = VAR_2;
  }
}
