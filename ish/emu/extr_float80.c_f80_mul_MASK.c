
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint128_t ;
struct TYPE_12__ {int sign; int signif; int exp; } ;
typedef TYPE_1__ float80 ;


 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (TYPE_1__) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 scalar_t__ FUNC_3 (TYPE_1__) ;
 TYPE_1__ FUNC_4 (int,int,int) ;
 int FUNC_5 (int ) ;

float80 FUNC_6(float80 VAR_2, float80 VAR_3) {
    if (!FUNC_0(VAR_2) || !FUNC_0(VAR_3))
        return VAR_1;
    if (FUNC_2(VAR_2))
        return VAR_1;
    if (FUNC_2(VAR_3))
        return VAR_1;

    if (FUNC_1(VAR_2) || FUNC_1(VAR_3)) {

        if (FUNC_3(VAR_2) || FUNC_3(VAR_3))
            return VAR_1;

        float80 VAR_4 = VAR_0;
        VAR_4.sign = VAR_2.sign ^ VAR_3.sign;
        return VAR_4;
    }


    int VAR_5 = FUNC_5(VAR_2.exp) + FUNC_5(VAR_3.exp) + 1;

    uint128_t VAR_6 = (uint128_t) VAR_2.signif * VAR_3.signif;

    float80 VAR_7 = FUNC_4(VAR_6, VAR_5, VAR_2.sign ^ VAR_3.sign);

    VAR_7.sign = VAR_2.sign ^ VAR_3.sign;
    return VAR_7;
}
