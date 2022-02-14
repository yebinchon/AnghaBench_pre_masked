
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config_iterator ;
typedef int git_config_entry ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char const*) ;
 int FUNC_4 (int **,int *) ;

__attribute__((used)) static void FUNC_5(git_config *VAR_1, const char *VAR_2, int VAR_3)
{
 git_config_iterator *VAR_4;
 git_config_entry *VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(FUNC_3(&VAR_4, VAR_1, VAR_2));

 VAR_6 = 0;
 while ((VAR_7 = FUNC_4(&VAR_5, VAR_4)) == 0)
  VAR_6++;

 FUNC_0(VAR_0, VAR_7);
 FUNC_0(VAR_3, VAR_6);
 FUNC_2(VAR_4);
}
