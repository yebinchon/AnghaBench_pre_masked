
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ direction_t ;
typedef int Output ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (scalar_t__,int *,int ) ;
 int FUNC_2 (int *) ;

Output *FUNC_3(direction_t VAR_6, Output *VAR_7) {
    Output *VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_0);

    if (!VAR_8) {
        direction_t VAR_9;
        if (VAR_6 == VAR_3)
            VAR_9 = VAR_2;
        else if (VAR_6 == VAR_2)
            VAR_9 = VAR_3;
        else if (VAR_6 == VAR_1)
            VAR_9 = VAR_4;
        else
            VAR_9 = VAR_1;
        VAR_8 = FUNC_1(VAR_9, VAR_7, VAR_5);
    }
    if (!VAR_8)
        VAR_8 = VAR_7;
    FUNC_0("current = %s, best = %s\n", FUNC_2(VAR_7), FUNC_2(VAR_8));
    return VAR_8;
}
