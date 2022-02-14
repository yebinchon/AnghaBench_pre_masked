
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int h2o_timerwheel_t ;
typedef int h2o_timerwheel_entry_t ;


 int * FUNC_0 (int,int const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int const) ;
 int FUNC_4 (int *,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
    const uint64_t VAR_2 = 0x1659418c000;
    h2o_timerwheel_t *VAR_3 = FUNC_0(3, VAR_2 - 2048);
    h2o_timerwheel_entry_t VAR_4, VAR_5;

    VAR_0 = 0;

    FUNC_2(&VAR_4, VAR_1);
    FUNC_3(VAR_3, &VAR_4, VAR_2);

    FUNC_4(VAR_3, VAR_2 - 100);
    FUNC_5(VAR_0 == 0);

    FUNC_2(&VAR_5, VAR_1);
    FUNC_3(VAR_3, &VAR_5, VAR_2);

    FUNC_4(VAR_3, VAR_2 - 100);
    FUNC_5(VAR_0 == 0);

    FUNC_4(VAR_3, VAR_2);
    FUNC_5(VAR_0 == 2);

    FUNC_4(VAR_3, VAR_2 + 1024);

    FUNC_1(VAR_3);
}
