
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {scalar_t__ index_filesize; int * index_data; } ;


 int FUNC_0 (struct filesys_inode*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2 (struct filesys_inode *VAR_2) {
  if (VAR_2->index_data == ((void*)0)) { return; }
  FUNC_1 (VAR_2->index_data);
  VAR_2->index_data = ((void*)0);
  VAR_0 -= VAR_2->index_filesize;
  VAR_1--;
  FUNC_0 (VAR_2);
}
