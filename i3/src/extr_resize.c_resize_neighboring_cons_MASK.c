
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double percent; struct TYPE_7__* parent; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 double FUNC_3 (TYPE_1__*) ;

bool FUNC_4(Con *VAR_0, Con *VAR_1, int VAR_2, int VAR_3) {
    FUNC_0(VAR_2 * VAR_3 == 0);

    Con *VAR_4 = VAR_0->parent;
    double VAR_5;
    double VAR_6;
    if (VAR_3) {
        VAR_5 = VAR_0->percent + ((double)VAR_3 / 100.0);
        VAR_6 = VAR_1->percent - ((double)VAR_3 / 100.0);
    } else {

        const double VAR_7 = (double)VAR_2 / (double)FUNC_2(VAR_0->parent);
        VAR_5 = VAR_0->percent + VAR_7;
        VAR_6 = VAR_1->percent - VAR_7;
    }


    if (VAR_5 < FUNC_3(VAR_0) || VAR_6 < FUNC_3(VAR_1)) {
        return 0;
    }

    VAR_0->percent = VAR_5;
    VAR_1->percent = VAR_6;
    FUNC_1(VAR_4);
    return 1;
}
