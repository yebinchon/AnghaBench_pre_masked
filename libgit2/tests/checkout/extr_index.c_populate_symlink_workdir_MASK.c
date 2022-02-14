
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_remote ;
typedef int git_object ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ,char const*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int *,char*,int) ;
 int FUNC_13 (int *,int *,int ,int *) ;
 int FUNC_14 (int **,int *,char*) ;

__attribute__((used)) static void FUNC_15(void)
{
 git_buf VAR_4 = VAR_0;
 git_repository *VAR_5;
 git_remote *VAR_6;
 git_object *VAR_7;

 const char *VAR_8 = FUNC_11(VAR_3);

 FUNC_0(FUNC_3(&VAR_4, FUNC_1(), "symlink.git"));
 FUNC_0(FUNC_10(&VAR_5, VAR_4.ptr, 1));
 FUNC_0(FUNC_12(VAR_5, "symlink", 1));


 FUNC_6(VAR_5, VAR_1);

 FUNC_0(FUNC_5(&VAR_6, VAR_5, VAR_1, VAR_8));
 FUNC_0(FUNC_7(VAR_6, ((void*)0), ((void*)0), ((void*)0)));
 FUNC_8(VAR_6);

 FUNC_0(FUNC_14(&VAR_7, VAR_5, "remotes/origin/master"));
 FUNC_0(FUNC_13(VAR_5, VAR_7, VAR_2, ((void*)0)));

 FUNC_4(VAR_7);
 FUNC_9(VAR_5);
 FUNC_2(&VAR_4);
}
