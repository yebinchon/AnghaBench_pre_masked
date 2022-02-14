
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {scalar_t__ uid; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct filesys_directory_node* FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2 (const char *VAR_3, int VAR_4) {
  struct filesys_directory_node *VAR_5 = FUNC_0 (VAR_3, VAR_2);
  if (VAR_5 == ((void*)0)) {
    return -VAR_1;
  }
  if (FUNC_1 () && FUNC_1 () != VAR_5->uid) {
    return -VAR_0;
  }
  VAR_5->mode &= ~0777;
  VAR_5->mode |= VAR_4;
  return 0;
}
