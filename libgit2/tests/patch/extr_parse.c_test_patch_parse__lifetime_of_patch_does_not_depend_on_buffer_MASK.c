
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_patch ;
struct TYPE_6__ {int ptr; int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

void FUNC_7(void)
{
 git_buf VAR_2 = VAR_0, VAR_3 = VAR_0;
 git_patch *VAR_4;

 FUNC_1(FUNC_3(&VAR_2, VAR_1));
 FUNC_1(FUNC_5(&VAR_4, VAR_2.ptr, VAR_2.size, ((void*)0)));
 FUNC_2(&VAR_2);

 FUNC_1(FUNC_6(&VAR_3, VAR_4));
 FUNC_0(VAR_1, VAR_3.ptr);
 FUNC_2(&VAR_3);

 FUNC_1(FUNC_6(&VAR_3, VAR_4));
 FUNC_0(VAR_1, VAR_3.ptr);
 FUNC_2(&VAR_3);

 FUNC_4(VAR_4);
}
