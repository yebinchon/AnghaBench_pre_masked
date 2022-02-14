
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,char*,char*,char*) ;
 int VAR_2 ;

void
FUNC_3(int VAR_3, int VAR_4, struct test *VAR_5)
{

 if (FUNC_0(VAR_2, -1, VAR_3 ? VAR_1 : VAR_0) < 0)
  FUNC_2(-1, "priv_vfs_clearsugid_chgrp(%s, %s): chrgrp",
      VAR_3 ? "root" : "!root", VAR_4 ? "jail" : "!jail");
 FUNC_1("priv_vfs_clearsugid_chgrp", VAR_3, VAR_4);
}
