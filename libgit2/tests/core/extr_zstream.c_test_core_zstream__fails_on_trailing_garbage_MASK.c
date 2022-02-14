
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

void FUNC_5(void)
{
 git_buf VAR_1 = VAR_0, VAR_2 = VAR_0;
 char VAR_3 = 0;


 FUNC_3(&VAR_1, "foobar!!", 8);


 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  FUNC_2(&VAR_1, VAR_3);
 }

 FUNC_0(FUNC_4(&VAR_2, VAR_1.ptr, VAR_1.size));

 FUNC_1(&VAR_1);
 FUNC_1(&VAR_2);
}
