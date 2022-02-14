
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int direction_t ;
typedef int Con ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int **,int ,int) ;

bool FUNC_4(Con *VAR_2, direction_t VAR_3) {
    Con *VAR_4 = FUNC_1(VAR_2);
    Con *VAR_5 = FUNC_0(VAR_4, VAR_0);
    if (VAR_5 == ((void*)0))
        VAR_5 = FUNC_0(VAR_4, VAR_1);


    if (VAR_2 == VAR_5)
        return 0;

    Con *VAR_6 = VAR_2;
    Con *VAR_7 = ((void*)0);
    bool VAR_8 = FUNC_3(&VAR_6, &VAR_7, VAR_3, 0);
    if (!VAR_8)
        return 0;


    if (VAR_5 == ((void*)0))
        return 1;


    return FUNC_2(VAR_2, VAR_5) && FUNC_2(VAR_7, VAR_5);
}
