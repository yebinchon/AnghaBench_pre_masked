
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int VAR_0 ;

void
FUNC_2(int VAR_1, int VAR_2, struct test *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, 0640);
 if (VAR_1 && VAR_2)
  FUNC_1("priv_vfs_chmod_fowner(asroot, injail)", VAR_4, 0, 0);
 if (VAR_1 && !VAR_2)
  FUNC_1("priv_vfs_chmod_fowner(asroot, !injail)", VAR_4, 0,
      0);
 if (!VAR_1 && VAR_2)
  FUNC_1("priv_vfs_chmod_fowner(!asroot, injail)", VAR_4, 0,
      0);
 if (!VAR_1 && !VAR_2)
  FUNC_1("priv_vfs_chmod_fowner(!asroot, !injail)", VAR_4, 0,
      0);
}
