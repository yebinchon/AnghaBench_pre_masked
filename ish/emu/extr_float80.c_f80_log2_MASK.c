
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ signif; scalar_t__ exp; scalar_t__ sign; } ;
typedef TYPE_1__ float80 ;


 TYPE_1__ VAR_0 ;
 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_4 (TYPE_1__) ;
 scalar_t__ FUNC_5 (TYPE_1__,TYPE_1__) ;
 scalar_t__ FUNC_6 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_7 (TYPE_1__,TYPE_1__) ;

float80 FUNC_8(float80 VAR_1) {
    float80 VAR_2 = FUNC_2(0);
    float80 VAR_3 = FUNC_2(1);
    float80 VAR_4 = FUNC_2(2);
    if (FUNC_4(VAR_1) || FUNC_6(VAR_1, VAR_2))
        return VAR_0;

    int VAR_5 = 0;
    while (FUNC_5(VAR_1, VAR_3)) {
        VAR_5--;
        VAR_1 = FUNC_7(VAR_1, VAR_4);
    }
    while (FUNC_3(VAR_1, VAR_4)) {
        VAR_5++;
        VAR_1 = FUNC_1(VAR_1, VAR_4);
    }
    float80 VAR_6 = FUNC_2(VAR_5);

    float80 VAR_7 = VAR_3;
    while (FUNC_3(VAR_7, VAR_2)) {
        while (FUNC_6(VAR_1, VAR_4) && FUNC_3(VAR_7, VAR_2)) {
            VAR_1 = FUNC_7(VAR_1, VAR_1);
            VAR_7 = FUNC_1(VAR_7, VAR_4);
        }
        float80 VAR_8 = VAR_6;
        VAR_6 = FUNC_0(VAR_6, VAR_7);
        if (VAR_8.signif == VAR_6.signif && VAR_8.exp == VAR_6.exp && VAR_8.sign == VAR_6.sign)
            break;
        VAR_1 = FUNC_1(VAR_1, VAR_4);
    }
    return VAR_6;
}
