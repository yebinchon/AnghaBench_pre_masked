
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(void)
{
 FUNC_0(VAR_0, "branch.mergeless.remote", 1);
 FUNC_0(VAR_0, "branch.master.remote", 1);

 FUNC_1(FUNC_2(VAR_0, "test"));

 FUNC_0(VAR_0, "branch.mergeless.remote", 0);
 FUNC_0(VAR_0, "branch.mergeless.merge", 0);
 FUNC_0(VAR_0, "branch.master.remote", 0);
 FUNC_0(VAR_0, "branch.master.merge", 0);
}
