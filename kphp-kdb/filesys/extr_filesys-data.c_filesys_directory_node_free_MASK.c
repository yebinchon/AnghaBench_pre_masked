
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {struct filesys_directory_node* name; } ;


 int FUNC_0 (struct filesys_directory_node*) ;
 int VAR_0 ;
 int FUNC_1 (struct filesys_directory_node*,int) ;

__attribute__((used)) static void FUNC_2 (struct filesys_directory_node *VAR_1) {
  VAR_0--;
  if (VAR_1->name != ((void*)0)) {
    FUNC_1 (VAR_1->name, FUNC_0 (VAR_1->name) + 1);
  }
  FUNC_1 (VAR_1, sizeof (struct filesys_directory_node));
}
