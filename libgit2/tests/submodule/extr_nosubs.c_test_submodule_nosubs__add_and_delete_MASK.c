
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_submodule ;
typedef int git_repository ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (int **,int *,char*,char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int * FUNC_15 (int ,char*) ;

void FUNC_16(void)
{
 git_repository *VAR_1 = FUNC_5("status");
 git_submodule *VAR_2;
 git_buf VAR_3 = VAR_0;

 FUNC_2(FUNC_11(((void*)0), VAR_1, "libgit2"));
 FUNC_2(FUNC_11(((void*)0), VAR_1, "submodules/libgit2"));



 FUNC_3(FUNC_9(
  &VAR_2, VAR_1, "https://github.com/libgit2/libgit2.git", "submodules/libgit2", 1));
 FUNC_1("submodules/libgit2", FUNC_12(VAR_2));
 FUNC_1("submodules/libgit2", FUNC_13(VAR_2));
 FUNC_10(VAR_2);

 FUNC_3(FUNC_8(&VAR_3, "status/.gitmodules"));
 FUNC_0(FUNC_15(VAR_3.ptr, "[submodule \"submodules/libgit2\"]") != ((void*)0));
 FUNC_0(FUNC_15(VAR_3.ptr, "path = submodules/libgit2") != ((void*)0));
 FUNC_7(&VAR_3);



 FUNC_2(FUNC_11(&VAR_2, VAR_1, "libgit2"));
 FUNC_3(FUNC_11(&VAR_2, VAR_1, "submodules/libgit2"));
 FUNC_1("submodules/libgit2", FUNC_12(VAR_2));
 FUNC_1("submodules/libgit2", FUNC_13(VAR_2));
 FUNC_10(VAR_2);



 FUNC_4(
  "status/.gitmodules",
  "[submodule \"libgit2\"]\n"
  "  path = submodules/libgit2\n"
  "  url = https://github.com/libgit2/libgit2.git\n");

 FUNC_3(FUNC_11(&VAR_2, VAR_1, "libgit2"));
 FUNC_1("libgit2", FUNC_12(VAR_2));
 FUNC_1("submodules/libgit2", FUNC_13(VAR_2));
 FUNC_10(VAR_2);
 FUNC_3(FUNC_11(&VAR_2, VAR_1, "submodules/libgit2"));
 FUNC_10(VAR_2);



 FUNC_4(
  "status/.gitmodules",
  "[submodule \"submodules/libgit2\"]\n"
  "  path = submodules/libgit2\n"
  "  url = https://github.com/libgit2/libgit2.git\n");

 FUNC_2(FUNC_11(&VAR_2, VAR_1, "libgit2"));
 FUNC_3(FUNC_11(&VAR_2, VAR_1, "submodules/libgit2"));
 FUNC_10(VAR_2);



 FUNC_6(FUNC_14("status/.gitmodules"));
 FUNC_2(FUNC_11(&VAR_2, VAR_1, "libgit2"));
 FUNC_2(FUNC_11(&VAR_2, VAR_1, "submodules/libgit2"));
}
