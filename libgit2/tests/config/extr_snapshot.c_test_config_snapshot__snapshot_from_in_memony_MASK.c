
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config_backend ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int *,int ) ;
 int FUNC_3 (int **,char const*,int ) ;
 int FUNC_4 (int*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int FUNC_7 (char const*) ;

void FUNC_8(void)
{
 const char *VAR_2 = "[section]\nkey = 1\n";
 git_config_backend *VAR_3;
 int VAR_4;

 FUNC_1(FUNC_5(&VAR_0));
 FUNC_1(FUNC_3(&VAR_3, VAR_2, FUNC_7(VAR_2)));
 FUNC_1(FUNC_2(VAR_0, VAR_3, 0, ((void*)0), 0));

 FUNC_1(FUNC_6(&VAR_1, VAR_0));
 FUNC_1(FUNC_4(&VAR_4, VAR_1, "section.key"));
 FUNC_0(VAR_4, 1);
}
