
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int **,scalar_t__,char*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;

void FUNC_16(void)
{
 git_submodule *VAR_3;
 const char *VAR_4 = "480095882d281ed676fe5b863569520e54a7d5c0";

 FUNC_2(FUNC_9(&VAR_3, VAR_2, "sm_unchanged"));
 FUNC_0(FUNC_11(VAR_3) == VAR_2);
 FUNC_1("sm_unchanged", FUNC_10(VAR_3));
 FUNC_0(FUNC_3(FUNC_12(VAR_3), "sm_unchanged") == 0);
 FUNC_0(FUNC_3(FUNC_14(VAR_3), "/submod2_target") == 0);

 FUNC_0(FUNC_4(FUNC_8(VAR_3), VAR_4) == 0);
 FUNC_0(FUNC_4(FUNC_6(VAR_3), VAR_4) == 0);
 FUNC_0(FUNC_4(FUNC_15(VAR_3), VAR_4) == 0);

 FUNC_0(FUNC_7(VAR_3) == VAR_0);
 FUNC_0(FUNC_13(VAR_3) == VAR_1);

 FUNC_5(VAR_3);


 FUNC_2(FUNC_9(&VAR_3, VAR_2, "sm_changed_head"));
 FUNC_1("sm_changed_head", FUNC_10(VAR_3));

 FUNC_0(FUNC_4(FUNC_8(VAR_3), VAR_4) == 0);
 FUNC_0(FUNC_4(FUNC_6(VAR_3), VAR_4) == 0);
 FUNC_0(FUNC_4(FUNC_15(VAR_3),
  "3d9386c507f6b093471a3e324085657a3c2b4247") == 0);

 FUNC_5(VAR_3);


 FUNC_2(FUNC_9(&VAR_3, VAR_2, "sm_added_and_uncommited"));
 FUNC_1("sm_added_and_uncommited", FUNC_10(VAR_3));

 FUNC_0(FUNC_4(FUNC_8(VAR_3), VAR_4) == 0);
 FUNC_0(FUNC_6(VAR_3) == ((void*)0));
 FUNC_0(FUNC_4(FUNC_15(VAR_3), VAR_4) == 0);

 FUNC_5(VAR_3);


 FUNC_2(FUNC_9(&VAR_3, VAR_2, "sm_missing_commits"));
 FUNC_1("sm_missing_commits", FUNC_10(VAR_3));

 FUNC_0(FUNC_4(FUNC_8(VAR_3), VAR_4) == 0);
 FUNC_0(FUNC_4(FUNC_6(VAR_3), VAR_4) == 0);
 FUNC_0(FUNC_4(FUNC_15(VAR_3),
  "5e4963595a9774b90524d35a807169049de8ccad") == 0);

 FUNC_5(VAR_3);
}
