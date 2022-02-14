
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t count; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ,char*) ;
 int FUNC_3 (int **,int ,char*,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(void)
{
 git_remote *VAR_1;
 git_strarray VAR_2;
 size_t VAR_3 = FUNC_2(VAR_0, "remote\\.");

 FUNC_1(FUNC_3(&VAR_1, VAR_0, "test-new", "git://github.com/libgit2/libgit2", ((void*)0)));
 FUNC_1(FUNC_5(&VAR_2, VAR_1));
 FUNC_0(0, VAR_2.count);
 FUNC_0(VAR_3 + 1, FUNC_2(VAR_0, "remote\\."));

 FUNC_6(&VAR_2);
 FUNC_4(VAR_1);
}
