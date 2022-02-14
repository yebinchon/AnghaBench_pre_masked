
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,char*,char*) ;

void FUNC_6(void)
{
 git_buf VAR_1 = VAR_0;

 FUNC_2(&VAR_1);
 FUNC_1(FUNC_5(&VAR_1, "this is a test", "", ""));
 FUNC_0("this is a test", VAR_1.ptr);

 FUNC_2(&VAR_1);
 FUNC_1(FUNC_5(&VAR_1, "this is a test", "t", "\\"));
 FUNC_0("\\this is a \\tes\\t", VAR_1.ptr);

 FUNC_2(&VAR_1);
 FUNC_1(FUNC_5(&VAR_1, "this is a test", "i ", "__"));
 FUNC_0("th__is__ __is__ a__ test", VAR_1.ptr);

 FUNC_2(&VAR_1);
 FUNC_1(FUNC_4(&VAR_1, "^match\\s*[A-Z]+.*"));
 FUNC_0("\\^match\\\\s\\*\\[A-Z\\]\\+\\.\\*", VAR_1.ptr);

 FUNC_3(&VAR_1);
}
