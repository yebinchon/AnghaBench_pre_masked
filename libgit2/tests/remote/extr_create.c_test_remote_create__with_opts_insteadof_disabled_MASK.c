
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int repository; } ;
typedef TYPE_1__ git_remote_create_options ;
typedef int git_remote ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **,char*,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_remote *VAR_3;
 git_remote_create_options VAR_4 = VAR_0;

 VAR_4.repository = VAR_2;
 VAR_4.flags = VAR_1;

 FUNC_2(FUNC_3(&VAR_3, "http://example.com/libgit2/libgit2", &VAR_4));

 FUNC_1(FUNC_6(VAR_3), "http://example.com/libgit2/libgit2");
 FUNC_0(FUNC_5(VAR_3), ((void*)0));

 FUNC_4(VAR_3);
}
