
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 int FUNC_1 (int*,int*,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int*,int*,unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 (int*,size_t) ;

int
FUNC_7(void)
{
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < sizeof VAR_1; ++VAR_4) {
        FUNC_3(VAR_3);
        FUNC_6(VAR_1, VAR_4);
        FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3);
        if (FUNC_2(VAR_0, VAR_1, VAR_4, VAR_3) != 0) {
            FUNC_4("fail %u\n", (unsigned int) VAR_4);
            return 100;
        }
        if (VAR_4 > 0) {
            VAR_1[(size_t) FUNC_5() % VAR_4] += 1 + (FUNC_5() % 255);
            if (FUNC_2(VAR_0, VAR_1, VAR_4, VAR_3) == 0) {
                FUNC_4("forgery %u\n", (unsigned int) VAR_4);
                return 100;
            }
            VAR_0[FUNC_5() % sizeof VAR_0] += 1 + (FUNC_5() % 255);
            if (FUNC_2(VAR_0, VAR_1, VAR_4, VAR_3) == 0) {
                FUNC_4("forgery %u\n", (unsigned int) VAR_4);
                return 100;
            }
        }
    }

    FUNC_3(VAR_3);
    FUNC_1(VAR_0, VAR_2, 0U, VAR_3);
    FUNC_0(FUNC_2(VAR_0, VAR_2, 0U, VAR_3) == 0);

    return 0;
}
