
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int *,char const*) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *,char const*,int) ;

__attribute__((used)) static void FUNC_7(
 const char *VAR_2, int VAR_3, bool VAR_4)
{
 git_config *VAR_5;
 int VAR_6, VAR_7;
 const char *VAR_8 = VAR_4 ?
  "config_entry/test.bare.git" : "config_entry/test.non.bare.git";

 FUNC_2(&VAR_1, "config_entry");

 FUNC_1(FUNC_6(&VAR_0, VAR_8, VAR_4));

 FUNC_1(FUNC_5(&VAR_5, VAR_0));
 VAR_6 = FUNC_4(&VAR_7, VAR_5, VAR_2);
 FUNC_3(VAR_5);

 if (VAR_3 >= 0) {
  FUNC_0(0, VAR_6);
  FUNC_0(VAR_3, VAR_7);
 } else {
  FUNC_0(VAR_3, VAR_6);
 }
}
