
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_inode {int dummy; } ;
typedef scalar_t__ inode_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,int ,int ) ;
 int FUNC_1 (struct filesys_inode*,int ,int ,char const*) ;
 struct filesys_inode* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6 (const char *VAR_2, const char *VAR_3) {
  inode_id_t VAR_4 = FUNC_0 (VAR_3, 0777 | VAR_1, FUNC_4 (), FUNC_3 ());
  if (VAR_4 < 0) {
    return -VAR_0;
  }
  struct filesys_inode *VAR_5 = FUNC_2 (VAR_4, 0);
  FUNC_1 (VAR_5, 0, FUNC_5 (VAR_2), VAR_2);
  return 0;
}
