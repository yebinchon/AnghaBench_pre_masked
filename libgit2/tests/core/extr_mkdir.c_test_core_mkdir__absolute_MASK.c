
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 git_buf VAR_2 = VAR_0;

 FUNC_3(VAR_1, ((void*)0));

 FUNC_6(&VAR_2, FUNC_4(), "d0");


 FUNC_0(!FUNC_9(VAR_2.ptr));
 FUNC_2(FUNC_7(VAR_2.ptr, 0755, 0));
 FUNC_0(FUNC_9(VAR_2.ptr));

 FUNC_6(&VAR_2, VAR_2.ptr, "subdir");
 FUNC_0(!FUNC_9(VAR_2.ptr));
 FUNC_2(FUNC_7(VAR_2.ptr, 0755, 0));
 FUNC_0(FUNC_9(VAR_2.ptr));


 FUNC_6(&VAR_2, VAR_2.ptr, "another");
 FUNC_0(!FUNC_9(VAR_2.ptr));
 FUNC_2(FUNC_8(VAR_2.ptr, 0755));
 FUNC_0(FUNC_9(VAR_2.ptr));


 FUNC_6(&VAR_2, FUNC_4(), "d1/foo/bar/asdf");
 FUNC_0(!FUNC_9(VAR_2.ptr));
 FUNC_2(FUNC_8(VAR_2.ptr, 0755));
 FUNC_0(FUNC_9(VAR_2.ptr));


 FUNC_6(&VAR_2, FUNC_4(), "d2/foo/bar/asdf");
 FUNC_0(!FUNC_9(VAR_2.ptr));
 FUNC_1(FUNC_7(VAR_2.ptr, 0755, 0));
 FUNC_0(!FUNC_9(VAR_2.ptr));

 FUNC_5(&VAR_2);
}
