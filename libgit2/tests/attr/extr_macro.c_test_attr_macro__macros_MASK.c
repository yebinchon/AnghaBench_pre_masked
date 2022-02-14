
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
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int FUNC_7 (char const**,int ,int ,char*,int,char const**) ;

void FUNC_8(void)
{
 const char *VAR_1[5] = { "rootattr", "binary", "diff", "crlf", "frotz" };
 const char *VAR_2[5] = { "mymacro", "positive", "negative", "rootattr", "another" };
 const char *VAR_3[3] = { "macro2", "multi2", "multi3" };
 const char *VAR_4[5];

 VAR_0 = FUNC_6("attr");

 FUNC_5(FUNC_7(VAR_4, VAR_0, 0, "binfile", 5, VAR_1));

 FUNC_3(FUNC_1(VAR_4[0]));
 FUNC_3(FUNC_1(VAR_4[1]));
 FUNC_3(FUNC_0(VAR_4[2]));
 FUNC_3(FUNC_0(VAR_4[3]));
 FUNC_3(FUNC_2(VAR_4[4]));

 FUNC_5(FUNC_7(VAR_4, VAR_0, 0, "macro_test", 5, VAR_2));

 FUNC_3(FUNC_1(VAR_4[0]));
 FUNC_3(FUNC_1(VAR_4[1]));
 FUNC_3(FUNC_0(VAR_4[2]));
 FUNC_3(FUNC_2(VAR_4[3]));
 FUNC_4("77", VAR_4[4]);

 FUNC_5(FUNC_7(VAR_4, VAR_0, 0, "macro_test", 3, VAR_3));

 FUNC_3(FUNC_1(VAR_4[0]));
 FUNC_3(FUNC_0(VAR_4[1]));
 FUNC_4("answer", VAR_4[2]);
}
