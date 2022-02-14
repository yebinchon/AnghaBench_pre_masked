
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int **,int *,int ) ;

void FUNC_9(void)
{
 git_config *VAR_2, *VAR_3, *VAR_4, *VAR_5;
 int32_t VAR_6;

 FUNC_2("home/.gitconfig", "[global]\n  test = 4567\n");

 FUNC_3(FUNC_6(&VAR_2));
 FUNC_3(FUNC_5(&VAR_6, VAR_2, "global.test"));
 FUNC_0(4567, VAR_6);

 FUNC_3(FUNC_8(&VAR_3, VAR_2, VAR_0));
 FUNC_3(FUNC_5(&VAR_6, VAR_3, "global.test"));
 FUNC_0(4567, VAR_6);

 FUNC_1(FUNC_8(&VAR_5, VAR_2, VAR_1));

 FUNC_3(FUNC_7(&VAR_4, VAR_2));
 FUNC_3(FUNC_5(&VAR_6, VAR_4, "global.test"));
 FUNC_0(4567, VAR_6);

 FUNC_4(VAR_4);
 FUNC_4(VAR_3);
 FUNC_4(VAR_2);
}
