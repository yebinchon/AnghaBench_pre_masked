
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (char*,int,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,scalar_t__) ;
 int VAR_5 ;

void
FUNC_3(int VAR_6, int VAR_7, struct test *VAR_8)
{
 ssize_t VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_5, VAR_2, VAR_1, VAR_0,
     VAR_3);
 if (VAR_9 < 0)
  VAR_10 = -1;
 else if (VAR_9 == VAR_3)
  VAR_10 = 0;
 else
  FUNC_0(-1, "priv_vfs_extattr_system: set returned %zd", VAR_9);
 if (VAR_6 && VAR_7)
  FUNC_1("priv_vfs_extattr_system(asroot, injail)", VAR_10, -1,
      VAR_4);
 if (VAR_6 && !VAR_7)
  FUNC_1("priv_vfs_extattr_system(asroot, !injail)", VAR_10, 0,
      0);
 if (!VAR_6 && VAR_7)
  FUNC_1("priv_vfs_extattr_system(!asroot, injail)", VAR_10, -1,
      VAR_4);
 if (!VAR_6 && !VAR_7)
  FUNC_1("priv_vfs_extattr_system(!asroot, !injail)", VAR_10,
      -1, VAR_4);
}
