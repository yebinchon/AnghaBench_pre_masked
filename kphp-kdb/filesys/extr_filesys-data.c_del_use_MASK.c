
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {struct filesys_inode* next; struct filesys_inode* prev; } ;


 int FUNC_0 (int) ;
 struct filesys_inode* VAR_0 ;
 struct filesys_inode* VAR_1 ;

__attribute__((used)) static void FUNC_1 (struct filesys_inode *VAR_2) {
  if (VAR_2->prev == ((void*)0)) {
    FUNC_0 (VAR_0 == VAR_2);
    if (VAR_2->next == ((void*)0)) {
      VAR_0 = VAR_1 = ((void*)0);
    } else {
      VAR_0 = VAR_0->next;
      VAR_0->prev = ((void*)0);
    }
  } else if (VAR_2->next == ((void*)0)) {
    FUNC_0 (VAR_1 == VAR_2);
    VAR_1 = VAR_1->prev;
    VAR_1->next = ((void*)0);
  } else {
    VAR_2->prev->next = VAR_2->next;
    VAR_2->next->prev = VAR_2->prev;
  }
  VAR_2->prev = VAR_2->next = ((void*)0);
}
