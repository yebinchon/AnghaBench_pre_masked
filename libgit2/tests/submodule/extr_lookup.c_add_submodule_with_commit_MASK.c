
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int *,int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,char*,char const*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int *) ;

__attribute__((used)) static void FUNC_16(const char *VAR_2)
{
 git_submodule *VAR_3;
 git_repository *VAR_4;
 git_index *VAR_5;
 git_buf VAR_6 = VAR_0;

 FUNC_2(FUNC_13(&VAR_3, VAR_1,
  "https://github.com/libgit2/libgit2.git", VAR_2, 1));

 FUNC_0(VAR_1, VAR_2);

 FUNC_2(FUNC_15(&VAR_4, VAR_3));
 FUNC_2(FUNC_10(&VAR_5, VAR_4));

 FUNC_2(FUNC_5(&VAR_6, FUNC_11(VAR_4), "file"));
 FUNC_1(VAR_6.ptr, "new file");
 FUNC_4(&VAR_6);

 FUNC_2(FUNC_6(VAR_5, "file"));
 FUNC_2(FUNC_8(VAR_5));
 FUNC_7(VAR_5);

 FUNC_3(((void*)0), VAR_4, ((void*)0), 0, "initial commit");
 FUNC_9(VAR_4);

 FUNC_2(FUNC_12(VAR_3));

 FUNC_14(VAR_3);
}
