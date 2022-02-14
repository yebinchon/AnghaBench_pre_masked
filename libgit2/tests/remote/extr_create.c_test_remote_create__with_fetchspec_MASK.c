
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** strings; size_t count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ,char*) ;
 int FUNC_5 (int **,int ,char*,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;

void FUNC_12(void)
{
 git_remote *VAR_1;
 git_strarray VAR_2;
 size_t VAR_3 = FUNC_4(VAR_0, "remote\\.");

 FUNC_3(FUNC_5(&VAR_1, VAR_0, "test-new", "git://github.com/libgit2/libgit2", "+refs/*:refs/*"));
 FUNC_2(FUNC_8(VAR_1), "test-new");
 FUNC_2(FUNC_10(VAR_1), "git://github.com/libgit2/libgit2");
 FUNC_1(FUNC_9(VAR_1), VAR_0);

 FUNC_3(FUNC_7(&VAR_2, VAR_1));
 FUNC_2("+refs/*:refs/*", VAR_2.strings[0]);
 FUNC_0(1, VAR_2.count);
 FUNC_0(VAR_3 + 2, FUNC_4(VAR_0, "remote\\."));

 FUNC_11(&VAR_2);
 FUNC_6(VAR_1);
}
