
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void)
{
 FUNC_0(VAR_0, "core.protectHFS", 1);
 FUNC_1("refs/heads/gitmodules-symlink", ".gitmodules");
 FUNC_0(VAR_0, "core.protectHFS", 0);

 FUNC_0(VAR_0, "core.protectNTFS", 1);
 FUNC_1("refs/heads/gitmodules-symlink", ".gitmodules");
 FUNC_0(VAR_0, "core.protectNTFS", 0);

 FUNC_1("refs/heads/gitmodules-symlink", ".gitmodules");
}
