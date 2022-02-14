
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const**,int *,char const*) ;
 int FUNC_5 (int **,char const*) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (int **,int *) ;

void FUNC_8(void)
{
 const char *VAR_0 = "config-duplicate-insert";
 const char *VAR_1 = "foo.c";
 const char *VAR_2 = "old";
 const char *VAR_3 = "new";
 const char *VAR_4;
 git_config *VAR_5, *VAR_6;




 const char *VAR_7 =
  "[foo]\n" "  a = b\n" "[other]\n" "  a = b\n" "[foo]\n" "  c = old\n";







 FUNC_1(VAR_0, VAR_7);
 FUNC_2(FUNC_5(&VAR_5, VAR_0));


 FUNC_2(FUNC_7(&VAR_6, VAR_5));
 FUNC_2(FUNC_4(&VAR_4, VAR_6, VAR_1));
 FUNC_0(VAR_2, VAR_4);
 FUNC_3(VAR_6);


 FUNC_2(FUNC_6(VAR_5, VAR_1, VAR_3));
 FUNC_3(VAR_5);


 FUNC_2(FUNC_5(&VAR_5, VAR_0));
 FUNC_2(FUNC_7(&VAR_6, VAR_5));
 FUNC_2(FUNC_4(&VAR_4, VAR_6, VAR_1));
 FUNC_0(VAR_3, VAR_4);


 FUNC_3(VAR_6);
 FUNC_3(VAR_5);
}
