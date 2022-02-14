
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,unsigned int) ;
 int FUNC_4 (int ,char const*) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_2, const char *VAR_3)
{
 git_commit *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_5 = FUNC_3(&VAR_4, VAR_1, VAR_2);

 if (VAR_3 != ((void*)0)) {
  FUNC_0(0, VAR_5);
  FUNC_0(0, FUNC_4(FUNC_2(VAR_4), VAR_3));
 } else
  FUNC_0(VAR_0, VAR_5);

 FUNC_1(VAR_4);
}
