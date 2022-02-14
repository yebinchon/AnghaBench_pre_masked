
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int average; int member_0; } ;
typedef TYPE_1__ h2o_sliding_counter_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
    h2o_sliding_counter_t VAR_0 = {0};
    size_t VAR_1;

    FUNC_0(&VAR_0, 100);
    FUNC_1(&VAR_0, 80 + 100);
    FUNC_2(VAR_0.average == 10);

    for (VAR_1 = 0; VAR_1 != 7; ++VAR_1) {
        FUNC_0(&VAR_0, 1);
        FUNC_1(&VAR_0, 81);
    }
    FUNC_2(VAR_0.average == 80);

    FUNC_0(&VAR_0, 1000);
    FUNC_1(&VAR_0, 1000 + 1000 * 8 - 80 * 7);
    FUNC_2(VAR_0.average == 1000);

    for (VAR_1 = 0; VAR_1 != 8; ++VAR_1) {
        FUNC_0(&VAR_0, 1);
        FUNC_1(&VAR_0, 11);
    }
    FUNC_2(VAR_0.average == 10);
}
