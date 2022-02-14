
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {int modification_time; } ;


 int VAR_0 ;
 struct filesys_directory_node* FUNC_0 (char const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1 (const char *VAR_2, int VAR_3) {
  struct filesys_directory_node *VAR_4 = FUNC_0 (VAR_2, VAR_1);
  if (VAR_4 == ((void*)0)) {
    return -VAR_0;
  }
  VAR_4->modification_time = VAR_3;
  return 0;
}
