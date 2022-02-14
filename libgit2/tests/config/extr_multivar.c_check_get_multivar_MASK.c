
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
 int FUNC_3 (int **,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int **,int *) ;

__attribute__((used)) static void FUNC_5(git_config *VAR_1, int VAR_2)
{
 git_config_iterator *VAR_3;
 git_config_entry *VAR_4;
 int VAR_5 = 0;

 FUNC_1(FUNC_3(&VAR_3, VAR_1, VAR_0, ((void*)0)));

 while (FUNC_4(&VAR_4, VAR_3) == 0)
  VAR_5++;

 FUNC_0(VAR_2, VAR_5);
 FUNC_2(VAR_3);

}
