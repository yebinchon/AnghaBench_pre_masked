
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (size_t*,size_t*,size_t,size_t) ;

void FUNC_2(void) {
    size_t VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_4 = 0;
    VAR_5 = 1;
    FUNC_0(FUNC_1(&VAR_2, &VAR_3, VAR_4, VAR_5) == 0);

    VAR_4 = 1;
    VAR_5 = 0;
    FUNC_0(FUNC_1(&VAR_2, &VAR_3, VAR_4, VAR_5) == 1);
    FUNC_0(VAR_2 == 0);
    FUNC_0(VAR_3 == 0);

    VAR_4 = 2;
    VAR_5 = 5;
    FUNC_0(FUNC_1(&VAR_2, &VAR_3, VAR_4, VAR_5) == 1);
    FUNC_0(VAR_2 == 3);
    FUNC_0(VAR_3 == 2);

    VAR_4 = VAR_0;
    VAR_5 = VAR_0;
    FUNC_0(FUNC_1(&VAR_2, &VAR_3, VAR_4, VAR_5) == 1);
    FUNC_0(VAR_2 == 1);
    FUNC_0(VAR_3 == VAR_0);

    VAR_4 = VAR_0 + 1;
    VAR_5 = VAR_0 + 1;
    FUNC_0(FUNC_1(&VAR_2, &VAR_3, VAR_4, VAR_5) == 1);
    FUNC_0(VAR_2 == 2);
    FUNC_0(VAR_3 == VAR_0/2 + 1);

    VAR_4 = 1;
    VAR_5 = VAR_1;
    FUNC_0(FUNC_1(&VAR_2, &VAR_3, VAR_4, VAR_5) == 1);
    FUNC_0(VAR_2 == VAR_1);
    FUNC_0(VAR_3 == 1);

    VAR_4 = 2;
    VAR_5 = VAR_1;
    FUNC_0(FUNC_1(&VAR_2, &VAR_3, VAR_4, VAR_5) == 1);
    FUNC_0(VAR_2 == VAR_1/2 + 1);
    FUNC_0(VAR_3 == 2);
}
