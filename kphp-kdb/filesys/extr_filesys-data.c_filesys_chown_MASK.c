
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {unsigned short uid; unsigned short gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct filesys_directory_node* FUNC_0 (char const*,int ) ;
 unsigned short FUNC_1 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2 (const char *VAR_3, unsigned short VAR_4, unsigned short VAR_5) {
  struct filesys_directory_node *VAR_6 = FUNC_0 (VAR_3, VAR_2);
  if (VAR_6 == ((void*)0)) {
    return -VAR_1;
  }
  if (FUNC_1 () && FUNC_1 () != VAR_6->uid) {
    return -VAR_0;
  }
  VAR_6->uid = VAR_4;
  VAR_6->gid = VAR_5;
  return 0;
}
