
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch ;
typedef int git_diff_hunk ;
typedef int git_diff ;


 char* VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int,int,int,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ) ;
 int FUNC_7 (int const**,size_t*,int *,int ) ;
 int FUNC_8 (char const*) ;

void FUNC_9(void)
{
 const char *VAR_1 = VAR_0;
 git_diff *VAR_2;
 git_patch *VAR_3;
 const git_diff_hunk *VAR_4;
 size_t VAR_5, VAR_6 = 0;

 FUNC_2(FUNC_4(&VAR_2, VAR_1, FUNC_8(VAR_1)));
 FUNC_2(FUNC_6(&VAR_3, VAR_2, 0));
 FUNC_2(FUNC_7(&VAR_4, &VAR_5, VAR_3, 0));

 FUNC_1(3, 3, 1, VAR_3, 0, VAR_6++);
 FUNC_1(4, 4, 1, VAR_3, 0, VAR_6++);
 FUNC_1(5, 5, 1, VAR_3, 0, VAR_6++);
 FUNC_1(6, -1, 1, VAR_3, 0, VAR_6++);
 FUNC_1(-1, 6, 1, VAR_3, 0, VAR_6++);
 FUNC_1(7, 7, 1, VAR_3, 0, VAR_6++);
 FUNC_1(8, 8, 1, VAR_3, 0, VAR_6++);
 FUNC_1(9, 9, 1, VAR_3, 0, VAR_6++);

 FUNC_0(VAR_5, VAR_6);

 FUNC_5(VAR_3);
 FUNC_3(VAR_2);
}
