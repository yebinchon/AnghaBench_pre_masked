
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 size_t FUNC_7 (int ) ;

void FUNC_8(void)
{
 git_buf VAR_1 = VAR_0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 10; ++VAR_2) {
  FUNC_6(&VAR_1, "1234");
  FUNC_0(FUNC_5(&VAR_1) == 0);
  FUNC_2(&VAR_1, VAR_1.ptr + 2);
  FUNC_0(FUNC_7(FUNC_3(&VAR_1)) == (size_t)((VAR_2 + 1) * 2));
 }

 FUNC_1("12341234123412341234", FUNC_3(&VAR_1));

 FUNC_2(&VAR_1, ((void*)0));
 FUNC_1("12341234123412341234", FUNC_3(&VAR_1));

 FUNC_2(&VAR_1, "invalid pointer");
 FUNC_1("12341234123412341234", FUNC_3(&VAR_1));

 FUNC_2(&VAR_1, VAR_1.ptr);
 FUNC_1("12341234123412341234", FUNC_3(&VAR_1));

 FUNC_2(&VAR_1, VAR_1.ptr + 1);
 FUNC_1("2341234123412341234", FUNC_3(&VAR_1));

 FUNC_2(&VAR_1, VAR_1.ptr + VAR_1.size);
 FUNC_1("", FUNC_3(&VAR_1));

 FUNC_4(&VAR_1);
}
