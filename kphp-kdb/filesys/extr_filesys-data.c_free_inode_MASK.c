
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {int * updates; scalar_t__ index_data; } ;


 int FUNC_0 (struct filesys_inode*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct filesys_inode*,int) ;

__attribute__((used)) static void FUNC_3 (struct filesys_inode *VAR_1) {
  if (VAR_1->index_data) {
    FUNC_0 (VAR_1);
  }
  FUNC_1 (VAR_1->updates);
  VAR_1->updates = ((void*)0);
  VAR_0--;
  FUNC_2 (VAR_1, sizeof (struct filesys_inode));
}
