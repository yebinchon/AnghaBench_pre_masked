
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_remote ;
struct TYPE_5__ {int * ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,char*) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

void FUNC_10(void)
{
 git_buf VAR_5 = VAR_0;
 git_remote *VAR_6 = ((void*)0);

 FUNC_1(FUNC_7(VAR_3), "test");
 FUNC_1(FUNC_9(VAR_3), "git://github.com/libgit2/libgit2");
 FUNC_0(FUNC_8(VAR_3) == ((void*)0));

 FUNC_2(FUNC_4(&VAR_5, VAR_3, VAR_1, ((void*)0)));
 FUNC_1(VAR_5.ptr, "git://github.com/libgit2/libgit2");

 FUNC_2(FUNC_4(&VAR_5, VAR_3, VAR_2, ((void*)0)));
 FUNC_1(VAR_5.ptr, "git://github.com/libgit2/libgit2");

 FUNC_2(FUNC_6(&VAR_6, VAR_4, "test_with_pushurl"));
 FUNC_1(FUNC_7(VAR_6), "test_with_pushurl");
 FUNC_1(FUNC_9(VAR_6), "git://github.com/libgit2/fetchlibgit2");
 FUNC_1(FUNC_8(VAR_6), "git://github.com/libgit2/pushlibgit2");

 FUNC_2(FUNC_4(&VAR_5, VAR_6, VAR_1, ((void*)0)));
 FUNC_1(VAR_5.ptr, "git://github.com/libgit2/fetchlibgit2");

 FUNC_2(FUNC_4(&VAR_5, VAR_6, VAR_2, ((void*)0)));
 FUNC_1(VAR_5.ptr, "git://github.com/libgit2/pushlibgit2");

 FUNC_5(VAR_6);
 FUNC_3(&VAR_5);
}
