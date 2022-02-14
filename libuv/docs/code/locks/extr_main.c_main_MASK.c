
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int*) ;
 int VAR_4 ;

int FUNC_6()
{
    FUNC_1(&VAR_0, 4);

    VAR_3 = 0;
    FUNC_4(&VAR_1);

    uv_thread_t VAR_5[3];

    int VAR_6[] = {1, 2, 1};
    FUNC_5(&VAR_5[0], VAR_2, &VAR_6[0]);
    FUNC_5(&VAR_5[1], VAR_2, &VAR_6[1]);

    FUNC_5(&VAR_5[2], VAR_4, &VAR_6[2]);

    FUNC_2(&VAR_0);
    FUNC_0(&VAR_0);

    FUNC_3(&VAR_1);
    return 0;
}
