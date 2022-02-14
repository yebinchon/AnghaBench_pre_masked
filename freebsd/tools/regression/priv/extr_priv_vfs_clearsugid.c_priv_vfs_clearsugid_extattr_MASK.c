
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int,char*,char*,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;

void
FUNC_3(int VAR_5, int VAR_6, struct test *VAR_7)
{

 if (FUNC_2(VAR_4, VAR_2, VAR_1, VAR_0, VAR_3)
     < 0)
  FUNC_1(-1,
      "priv_vfs_clearsugid_extattr(%s, %s): extattr_set_file",
      VAR_5 ? "root" : "!root", VAR_6 ? "jail" : "!jail");
 FUNC_0("priv_vfs_clearsugid_extattr", VAR_5, VAR_6);
}
