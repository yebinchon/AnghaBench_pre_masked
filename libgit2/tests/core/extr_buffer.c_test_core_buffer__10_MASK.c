
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char,int,char*,...) ;

void FUNC_5(void)
{
 git_buf VAR_1 = VAR_0;

 FUNC_1(FUNC_4(&VAR_1, '/', 1, "test"));
 FUNC_0(VAR_1.ptr, "test");
 FUNC_1(FUNC_4(&VAR_1, '/', 1, "string"));
 FUNC_0(VAR_1.ptr, "test/string");
 FUNC_2(&VAR_1);
 FUNC_1(FUNC_4(&VAR_1, '/', 3, "test", "string", "join"));
 FUNC_0(VAR_1.ptr, "test/string/join");
 FUNC_1(FUNC_4(&VAR_1, '/', 2, VAR_1.ptr, "more"));
 FUNC_0(VAR_1.ptr, "test/string/join/test/string/join/more");

 FUNC_3(&VAR_1);
}
