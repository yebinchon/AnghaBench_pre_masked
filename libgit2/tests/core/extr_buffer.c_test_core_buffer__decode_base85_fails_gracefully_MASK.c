
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

void FUNC_6(void)
{
 git_buf VAR_1 = VAR_0;

 FUNC_5(&VAR_1, "foobar");

 FUNC_2(FUNC_3(&VAR_1, "invalid charsZZ", 15, 42));
 FUNC_2(FUNC_3(&VAR_1, "invalidchars__ ", 15, 42));
 FUNC_2(FUNC_3(&VAR_1, "overflowZZ~~~~~", 15, 42));
 FUNC_2(FUNC_3(&VAR_1, "truncated", 9, 42));
 FUNC_1(6, VAR_1.size);
 FUNC_0("foobar", VAR_1.ptr);

 FUNC_4(&VAR_1);
}
