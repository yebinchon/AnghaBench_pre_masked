
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(void)
{
 git_buf VAR_2 = VAR_0;

 FUNC_1(FUNC_4(VAR_1, 0777));

 FUNC_0(FUNC_3(&VAR_2, VAR_1, "/one"));
 FUNC_1(FUNC_4(VAR_2.ptr, 0777));

 FUNC_0(FUNC_3(&VAR_2, VAR_1, "/one/two_one"));
 FUNC_1(FUNC_4(VAR_2.ptr, 0777));

 FUNC_0(FUNC_3(&VAR_2, VAR_1, "/one/two_two"));
 FUNC_1(FUNC_4(VAR_2.ptr, 0777));

 FUNC_0(FUNC_3(&VAR_2, VAR_1, "/one/two_two/three"));
 FUNC_1(FUNC_4(VAR_2.ptr, 0777));

 FUNC_0(FUNC_3(&VAR_2, VAR_1, "/two"));
 FUNC_1(FUNC_4(VAR_2.ptr, 0777));

 FUNC_2(&VAR_2);
}
