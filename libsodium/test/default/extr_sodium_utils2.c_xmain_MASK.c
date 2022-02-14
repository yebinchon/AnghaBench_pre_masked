
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (void*,void*,size_t) ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (void*,unsigned int,size_t) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (void*,size_t) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int (*) (int )) ;
 void* FUNC_9 (unsigned int,unsigned int) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (size_t) ;
 int FUNC_12 (unsigned char*,unsigned int) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*) ;
 scalar_t__ FUNC_16 (void*) ;
 scalar_t__ FUNC_17 (void*) ;

int
FUNC_18(void)
{
    void *VAR_7;
    void *VAR_8;
    size_t VAR_9;
    unsigned int VAR_10;

    VAR_9 = FUNC_6(100U);
    if ((VAR_7 = FUNC_11(VAR_9)) == ((void*)0) ||
        (VAR_8 = FUNC_11(VAR_9)) == ((void*)0)) {
        return 1;
    }
    FUNC_5(VAR_7, VAR_9);
    FUNC_2(VAR_8, VAR_7, VAR_9);
    VAR_6 = VAR_0;
    if (FUNC_16(VAR_7) != 0) {
        FUNC_0(VAR_6 == VAR_1);
    } else {
        FUNC_0(VAR_9 == 0U || FUNC_1(VAR_7, VAR_8, VAR_9) != 0);
    }
    VAR_6 = VAR_0;
    if (FUNC_17(VAR_7) != 0) {
        FUNC_0(VAR_6 == VAR_1);
    } else {
        FUNC_0(VAR_9 == 0U || FUNC_1(VAR_7, VAR_8, VAR_9) == 0);
    }
    FUNC_10(VAR_8);
    FUNC_10(VAR_7);

    if (FUNC_11(VAR_5 - 1U) != ((void*)0)) {
        return 1;
    }
    if (FUNC_11(0U) == ((void*)0)) {
        return 1;
    }
    if (FUNC_9(VAR_5 / 2U + 1U, VAR_5 / 2U) != ((void*)0)) {
        return 1;
    }
    FUNC_10(FUNC_9(0U, 0U));
    FUNC_10(FUNC_9(0U, 1U));
    FUNC_10(FUNC_9(1U, 0U));

    VAR_7 = FUNC_9(1000U, 50U);
    FUNC_3(VAR_7, 0, 50000U);
    FUNC_10(VAR_7);

    FUNC_10(FUNC_11(0U));
    FUNC_10(((void*)0));
    for (VAR_10 = 0U; VAR_10 < 10000U; VAR_10++) {
        VAR_9 = 1U + FUNC_6(100000U);
        VAR_7 = FUNC_11(VAR_9);
        FUNC_0(VAR_7 != ((void*)0));
        FUNC_3(VAR_7, VAR_10, VAR_9);
        FUNC_13(VAR_7);
        FUNC_10(VAR_7);
    }
    FUNC_4("OK\n");
    VAR_9 = 1U + FUNC_6(100000U);
    VAR_7 = FUNC_11(VAR_9);
    FUNC_0(VAR_7 != ((void*)0));



    FUNC_14(VAR_7);
    FUNC_15(VAR_7);
    FUNC_7(0);

    return 0;
}
