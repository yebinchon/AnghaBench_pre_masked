
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
typedef int fhandle_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(int VAR_2, int VAR_3, struct test *VAR_4)
{
 fhandle_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, &VAR_5);
 if (VAR_2 && VAR_3)
  FUNC_0("priv_vfs_getfh(asroot, injail)", VAR_6, -1, VAR_0);
 if (VAR_2 && !VAR_3)
  FUNC_0("priv_vfs_getfh(asroot, !injail)", VAR_6, 0, 0);
 if (!VAR_2 && VAR_3)
  FUNC_0("priv_vfs_getfh(!asroot, injail)", VAR_6, -1, VAR_0);
 if (!VAR_2 && !VAR_3)
  FUNC_0("priv_vfs_getfh(!asroot, !injail)", VAR_6, -1, VAR_0);
}
