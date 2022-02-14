
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char const**,int ,int ,char*,char*) ;

void FUNC_8(void)
{
 const char *VAR_1;

 VAR_0 = FUNC_5("empty_standard_repo");
 FUNC_3(FUNC_6(VAR_0, "macro-pos", "positive"));
 FUNC_3(FUNC_6(VAR_0, "macro-neg", "-negative"));
 FUNC_4("empty_standard_repo/.gitattributes", "file.txt macro-pos macro-neg\n");

 FUNC_3(FUNC_7(&VAR_1, VAR_0, 0, "file.txt", "positive"));
 FUNC_2(FUNC_1(VAR_1));
 FUNC_3(FUNC_7(&VAR_1, VAR_0, 0, "file.txt", "negative"));
 FUNC_2(FUNC_0(VAR_1));
}
