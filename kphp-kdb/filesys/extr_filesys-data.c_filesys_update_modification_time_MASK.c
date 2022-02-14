
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {struct filesys_directory_node* parent; int modification_time; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (struct filesys_directory_node *VAR_1) {
  while (VAR_1 != ((void*)0)) {
    VAR_1->modification_time = VAR_0;
    VAR_1 = VAR_1->parent;
  }
}
