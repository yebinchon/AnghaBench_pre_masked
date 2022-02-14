
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int buffer ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int,char) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void FUNC_5(void)
{
 git_buf VAR_0;

 FUNC_4(&VAR_0, 0, sizeof(VAR_0));
 FUNC_1(FUNC_3(&VAR_0, "", 0, '#'));
 FUNC_0(VAR_0.ptr, "");
 FUNC_2(&VAR_0);
 FUNC_1(FUNC_3(&VAR_0, "", 1, '#'));
 FUNC_0(VAR_0.ptr, "");
 FUNC_2(&VAR_0);

 FUNC_1(FUNC_3(&VAR_0, "Short", 0, '#'));
 FUNC_0("Short\n", VAR_0.ptr);
 FUNC_2(&VAR_0);
 FUNC_1(FUNC_3(&VAR_0, "Short", 1, '#'));
 FUNC_0("Short\n", VAR_0.ptr);
 FUNC_2(&VAR_0);

 FUNC_1(FUNC_3(&VAR_0, "This is longer\nAnd multiline\n# with some comments still in\n", 0, '#'));
 FUNC_0(VAR_0.ptr, "This is longer\nAnd multiline\n# with some comments still in\n");
 FUNC_2(&VAR_0);

 FUNC_1(FUNC_3(&VAR_0, "This is longer\nAnd multiline\n# with some comments still in\n", 1, '#'));
 FUNC_0(VAR_0.ptr, "This is longer\nAnd multiline\n");
 FUNC_2(&VAR_0);
}
