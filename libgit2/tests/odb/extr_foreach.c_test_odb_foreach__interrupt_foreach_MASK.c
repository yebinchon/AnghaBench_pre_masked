
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,char*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;

void FUNC_11(void)
{
 int VAR_6 = 0;
 git_oid VAR_7;

 FUNC_3(FUNC_10(&VAR_2, FUNC_2("testrepo.git")));
 FUNC_9(&VAR_1, VAR_2);

 FUNC_1(-321, FUNC_4(VAR_1, VAR_3, &VAR_6));
 FUNC_0(VAR_6 == 1000);

 VAR_6 = 0;

 FUNC_1(321, FUNC_4(VAR_1, VAR_4, &VAR_6));
 FUNC_0(VAR_6 == 1000);

 FUNC_5(VAR_1);
 FUNC_7(VAR_2);

 FUNC_3(FUNC_8(&VAR_2, "onlyloose.git", 1));
 FUNC_9(&VAR_1, VAR_2);

 FUNC_3(FUNC_6(&VAR_7, VAR_1, "", 0, VAR_0));
 FUNC_1(-123, FUNC_4(VAR_1, VAR_5, &VAR_6));
}
