
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int *) ;

void FUNC_11(void)
{

 git_reference *VAR_3, *VAR_4;
 git_buf VAR_5 = VAR_0;


 FUNC_2(FUNC_4(&VAR_5, FUNC_9(VAR_1), VAR_2));
 FUNC_0(FUNC_5(VAR_5.ptr));


 FUNC_2(FUNC_8(&VAR_3, VAR_1, VAR_2));


 FUNC_0(FUNC_10(VAR_3) == 0);


 FUNC_2(FUNC_6(VAR_3));
 FUNC_7(VAR_3);


 FUNC_1(FUNC_8(&VAR_4, VAR_1, VAR_2));


 FUNC_0(!FUNC_5(VAR_5.ptr));

 FUNC_7(VAR_4);
 FUNC_3(&VAR_5);
}
