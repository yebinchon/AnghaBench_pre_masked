
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (char const**,int ,int ,char*,int,char const**) ;

void FUNC_7(void)
{
 const char *VAR_1[4] = { "repoattr", "rootattr", "missingattr", "subattr" };
 const char *VAR_2[4];

 FUNC_5(FUNC_6(VAR_2, VAR_0, 0, "root_test1", 4, VAR_1));

 FUNC_3(FUNC_1(VAR_2[0]));
 FUNC_3(FUNC_1(VAR_2[1]));
 FUNC_3(FUNC_2(VAR_2[2]));
 FUNC_3(FUNC_2(VAR_2[3]));

 FUNC_5(FUNC_6(VAR_2, VAR_0, 0, "root_test2", 4, VAR_1));

 FUNC_3(FUNC_1(VAR_2[0]));
 FUNC_3(FUNC_0(VAR_2[1]));
 FUNC_3(FUNC_2(VAR_2[2]));
 FUNC_3(FUNC_2(VAR_2[3]));

 FUNC_5(FUNC_6(VAR_2, VAR_0, 0, "sub/subdir_test1", 4, VAR_1));

 FUNC_3(FUNC_1(VAR_2[0]));
 FUNC_3(FUNC_1(VAR_2[1]));
 FUNC_3(FUNC_2(VAR_2[2]));
 FUNC_4("yes", VAR_2[3]);
}
