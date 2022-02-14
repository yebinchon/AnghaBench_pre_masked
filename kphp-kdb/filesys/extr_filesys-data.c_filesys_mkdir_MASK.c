
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {int mode; unsigned short uid; unsigned short gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct filesys_directory_node* FUNC_0 (char const*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1 (const char *VAR_3, int VAR_4, unsigned short VAR_5, unsigned short VAR_6) {
  struct filesys_directory_node *VAR_7 = FUNC_0 (VAR_3, VAR_2);
  if (VAR_7 == ((void*)0)) {
    return -VAR_0;
  }
  VAR_7->mode = VAR_4 | VAR_1;
  VAR_7->uid = VAR_5;
  VAR_7->gid = VAR_6;
  return (VAR_7 != ((void*)0)) ? 0 : -VAR_0;
}
