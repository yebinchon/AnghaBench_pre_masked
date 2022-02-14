
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 int VAR_1;
 git_oid VAR_2;

 FUNC_5("testrepo");

 FUNC_1("testrepo/.git/refs/heads/garbage", "not-a-ref");
 FUNC_2(FUNC_4(VAR_0, "heads"));

 for (VAR_1 = 0; !FUNC_3(&VAR_2, VAR_0); ++VAR_1)
               ;


 FUNC_0(20, VAR_1);
}
