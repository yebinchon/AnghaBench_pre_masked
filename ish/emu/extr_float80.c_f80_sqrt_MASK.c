
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int exp; scalar_t__ sign; } ;
typedef TYPE_1__ float80 ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ FUNC_1 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_2 (TYPE_1__,TYPE_1__) ;
 int FUNC_3 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__) ;
 int FUNC_6 (int ) ;

float80 FUNC_7(float80 VAR_1) {
    if (FUNC_5(VAR_1) || VAR_1.sign)
        return VAR_0;

    float80 VAR_2 = VAR_1;
    VAR_2.exp = FUNC_0(FUNC_6(VAR_2.exp) / 2);

    float80 VAR_3;
    float80 VAR_4 = FUNC_4(2);
    int VAR_5 = 0;
    do {
        VAR_3 = VAR_2;
        VAR_2 = FUNC_2(FUNC_1(VAR_2, FUNC_2(VAR_1, VAR_2)), VAR_4);
    } while (!FUNC_3(VAR_2, VAR_3) && VAR_5++ < 100);
    return VAR_2;
}
