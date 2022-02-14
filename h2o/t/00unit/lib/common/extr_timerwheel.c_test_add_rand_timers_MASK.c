
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int h2o_timerwheel_t ;
typedef int h2o_timerwheel_entry_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int) ;
 int VAR_1 ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (int) ;

void FUNC_8()
{
    uint32_t VAR_3 = 3;
    h2o_timerwheel_t *VAR_4 = FUNC_1(6, VAR_3);
    h2o_timerwheel_entry_t VAR_5[VAR_0];
    int VAR_6;


    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        uint32_t VAR_7 = VAR_3 + FUNC_6() % VAR_0;
        FUNC_3(&VAR_5[VAR_6], VAR_2);
        FUNC_4(VAR_4, &VAR_5[VAR_6], VAR_7);
    }

    int VAR_8 = VAR_1;

    FUNC_7(FUNC_5(VAR_4, VAR_0 - 1 + VAR_3) == VAR_0);
    FUNC_7(VAR_1 - VAR_8 == VAR_0);
    FUNC_0(VAR_4);

    FUNC_2(VAR_4);
}
