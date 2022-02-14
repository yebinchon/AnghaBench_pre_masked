
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int git_config ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (char*,char*) ;

void FUNC_8(void)
{

 git_config *VAR_0;
 int32_t VAR_1;

 FUNC_1("home/.gitconfig.linked", "[global]\n  test = 4567\n");
 FUNC_3(FUNC_7(".gitconfig.linked", "home/.gitconfig"));

 FUNC_2(FUNC_6(&VAR_0));
 FUNC_2(FUNC_5(&VAR_1, VAR_0, "global.test"));
 FUNC_0(4567, VAR_1);

 FUNC_4(VAR_0);

}
