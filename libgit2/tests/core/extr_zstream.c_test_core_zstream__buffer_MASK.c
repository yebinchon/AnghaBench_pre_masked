
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(void)
{
 git_buf VAR_2 = VAR_0;
 FUNC_1(FUNC_3(&VAR_2, VAR_1, FUNC_4(VAR_1) + 1));
 FUNC_0(VAR_1, FUNC_4(VAR_1) + 1, VAR_2.ptr, VAR_2.size);
 FUNC_2(&VAR_2);
}
