
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct filesys_directory_node*) ;
 struct filesys_directory_node* FUNC_1 (char const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2 (const char *VAR_2) {
  struct filesys_directory_node *VAR_3 = FUNC_1 (VAR_2, VAR_1);
  if (VAR_3 == ((void*)0)) {
    return -VAR_0;
  }
  FUNC_0 (VAR_3);
  return 0;
}
