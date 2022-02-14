
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int crypto_generichash_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,size_t,unsigned char*,size_t,unsigned char*,size_t) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int *,unsigned char*,size_t) ;
 int FUNC_3 (int *,unsigned char*,size_t,size_t) ;
 int FUNC_4 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (unsigned char*,size_t) ;
 size_t FUNC_7 (scalar_t__) ;
 int FUNC_8 (unsigned char*) ;
 scalar_t__ FUNC_9 (size_t) ;

__attribute__((used)) static void
FUNC_10(void)
{
    crypto_generichash_state VAR_6;
    unsigned char *VAR_7, *VAR_8;
    unsigned char *VAR_9;
    unsigned char *VAR_10;
    size_t VAR_11;
    size_t VAR_12;
    size_t VAR_13;
    size_t VAR_14, VAR_15;
    int VAR_16;

    for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
        VAR_13 = FUNC_7(VAR_0);
        VAR_10 = (unsigned char *) FUNC_9(VAR_13);
        VAR_12 = FUNC_7(VAR_4 -
                                   VAR_5 + 1U)
            + VAR_5;
        VAR_9 = (unsigned char *) FUNC_9(VAR_12);
        VAR_11 = FUNC_7(VAR_2 -
                                   VAR_3 + 1U)
            + VAR_3;
        VAR_7 = (unsigned char *) FUNC_9(VAR_11);
        VAR_8 = (unsigned char *) FUNC_9(VAR_11);

        FUNC_6(VAR_9, VAR_12);
        FUNC_6(VAR_10, VAR_13);

        FUNC_3(&VAR_6, VAR_9, VAR_12, VAR_11);
        VAR_14 = FUNC_7((uint32_t) VAR_13);
        VAR_15 = FUNC_7((uint32_t) (VAR_13 - VAR_14));
        FUNC_4(&VAR_6, VAR_10, VAR_14);
        FUNC_4(&VAR_6, VAR_10 + VAR_14, VAR_15);
        FUNC_4(&VAR_6, VAR_10 + VAR_14 + VAR_15, VAR_13 - VAR_14 - VAR_15);
        FUNC_2(&VAR_6, VAR_7, VAR_11);

        FUNC_1(VAR_8, VAR_11, VAR_10, VAR_13, VAR_9, VAR_12);

        FUNC_0(FUNC_5(VAR_7, VAR_8, VAR_11) == 0);

        FUNC_8(VAR_8);
        FUNC_8(VAR_7);
        FUNC_8(VAR_9);
        FUNC_8(VAR_10);
    }
}
