
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {int mode; unsigned short uid; scalar_t__ gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 unsigned short FUNC_1 () ;

int FUNC_2 (struct filesys_directory_node *VAR_2, int VAR_3) {
  unsigned short VAR_4 = FUNC_1 ();
  if (!VAR_4) {
    return 0;
  }
  int VAR_5 = (VAR_2->mode >> ((VAR_2->uid == VAR_4) ? 6 : (VAR_2->gid == FUNC_0 ()) ? 3 : 0)) & 7;
  if ((VAR_5 & VAR_3) != VAR_3) {
    VAR_1 = VAR_0;
    return -VAR_0;
  }
  return 0;
}
