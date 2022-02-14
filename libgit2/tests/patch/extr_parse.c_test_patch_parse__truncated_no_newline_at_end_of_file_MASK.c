
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_3__ {int content; } ;
typedef TYPE_1__ git_diff_line ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char*,size_t,int *) ;
 int FUNC_4 (TYPE_1__ const**,int *,int ,int) ;
 size_t FUNC_5 (char*) ;

void FUNC_6(void)
{
 size_t VAR_1 = FUNC_5(VAR_0) - FUNC_5("at end of file\n");
 const git_diff_line *VAR_2;
 git_patch *VAR_3;

 FUNC_1(FUNC_3(&VAR_3, VAR_0, VAR_1, ((void*)0)));
 FUNC_1(FUNC_4(&VAR_2, VAR_3, 0, 4));
 FUNC_0(VAR_2->content, "\\ No newline ");

 FUNC_2(VAR_3);
}
