
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char** strings; scalar_t__ count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;


 int * VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 char* FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;

void FUNC_11(void)
{
 git_strarray VAR_1;
 git_remote *VAR_2;

 FUNC_2(FUNC_3(&VAR_2, VAR_0));

 FUNC_1(FUNC_7(VAR_2), FUNC_7(VAR_0));
 FUNC_1(FUNC_9(VAR_2), FUNC_9(VAR_0));
 FUNC_1(FUNC_8(VAR_2), FUNC_8(VAR_0));

 FUNC_2(FUNC_5(&VAR_1, VAR_0));
 FUNC_0(1, (int)VAR_1.count);
 FUNC_1("+refs/heads/*:refs/remotes/test/*", VAR_1.strings[0]);
 FUNC_10(&VAR_1);

 FUNC_2(FUNC_6(&VAR_1, VAR_0));
 FUNC_0(0, (int)VAR_1.count);
 FUNC_10(&VAR_1);

 FUNC_4(VAR_2);
}
