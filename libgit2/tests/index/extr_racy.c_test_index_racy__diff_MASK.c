
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_index ;
typedef int git_diff ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ) ;
 int FUNC_12 (int ) ;

void FUNC_13(void)
{
 git_index *VAR_2;
 git_diff *VAR_3;
 git_buf VAR_4 = VAR_0;

 FUNC_2(FUNC_4(&VAR_4, FUNC_12(VAR_1), "A"));
 FUNC_1(VAR_4.ptr, "A");


 FUNC_2(FUNC_11(&VAR_2, VAR_1));
 FUNC_2(FUNC_8(VAR_2, "A"));
 FUNC_2(FUNC_10(VAR_2));

 FUNC_2(FUNC_6(&VAR_3, VAR_1, VAR_2, ((void*)0)));
 FUNC_0(0, FUNC_7(VAR_3));
 FUNC_5(VAR_3);


 FUNC_1(VAR_4.ptr, "B");

 FUNC_2(FUNC_6(&VAR_3, VAR_1, VAR_2, ((void*)0)));
 FUNC_0(1, FUNC_7(VAR_3));

 FUNC_9(VAR_2);
 FUNC_5(VAR_3);
 FUNC_3(&VAR_4);
}
