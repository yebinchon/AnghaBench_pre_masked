
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (char const**,int ,int ,char*,int,char const**) ;

void FUNC_6(void)
{
 const char *VAR_1[4] = { "repoattr", "rootattr", "missingattr", "subattr" };





 FUNC_4(FUNC_5(VAR_1, VAR_0, 0, "sub/subdir_test1", 4, VAR_1));

 FUNC_2(FUNC_0(VAR_1[0]));
 FUNC_2(FUNC_0(VAR_1[1]));
 FUNC_2(FUNC_1(VAR_1[2]));
 FUNC_3("yes", VAR_1[3]);
}
