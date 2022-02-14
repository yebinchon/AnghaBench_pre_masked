
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,char*,char*,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;

void
FUNC_5(int VAR_4, int VAR_5, struct test *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_2);
 if (VAR_7 < 0)
  FUNC_2(-1, "priv_vfs_clearsugid_write(%s, %s): open",
      VAR_4 ? "root" : "!root", VAR_5 ? "jail" : "!jail");
 if (FUNC_4(VAR_7, VAR_0, VAR_1) < 0)
  FUNC_2(-1, "priv_vfs_clearsugid_write(%s, %s): write",
      VAR_4 ? "root" : "!root", VAR_5 ? "jail" : "!jail");
 (void)FUNC_0(VAR_7);
 FUNC_1("priv_vfs_clearsugid_write", VAR_4, VAR_5);
}
