
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
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int **,int *,char const*,int ,int *) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int *) ;

void FUNC_10(void)
{

 git_reference *VAR_4, *VAR_5, *VAR_6;
 git_buf VAR_7 = VAR_0;
 const char *VAR_8 = "refs/heads/brand_new_name";


 FUNC_1(FUNC_3(&VAR_7, FUNC_8(VAR_1), VAR_3));
 FUNC_0(FUNC_4(VAR_7.ptr));


 FUNC_1(FUNC_6(&VAR_5, VAR_1, VAR_3));


 FUNC_0(FUNC_9(VAR_5) == 0);
 FUNC_5(VAR_5);


 FUNC_1(FUNC_6(&VAR_4, VAR_1, VAR_2));


 FUNC_0(FUNC_9(VAR_4) != 0);


 FUNC_1(FUNC_7(&VAR_6, VAR_4, VAR_8, 0, ((void*)0)));
 FUNC_5(VAR_4);


 FUNC_1(FUNC_6(&VAR_5, VAR_1, VAR_3));


 FUNC_0(FUNC_9(VAR_5) == 0);


 FUNC_0(FUNC_4(VAR_7.ptr));

 FUNC_5(VAR_6);
 FUNC_5(VAR_5);
 FUNC_2(&VAR_7);
}
