
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

void FUNC_4(void)
{
 git_buf VAR_2 = {0};

 FUNC_1(FUNC_2(&VAR_2, VAR_0, VAR_1));

 FUNC_0("test", VAR_2.ptr);
 FUNC_3(&VAR_2);
}
