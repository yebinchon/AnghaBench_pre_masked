
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,unsigned long long,unsigned char*,unsigned char*) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_6 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (unsigned char*,size_t) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (unsigned char*) ;
 scalar_t__ FUNC_11 (size_t) ;

int
FUNC_12(void)
{
    unsigned char *VAR_3;
    unsigned char *VAR_4;
    unsigned char *VAR_5;
    unsigned char *VAR_6;
    unsigned char *VAR_7;
    unsigned char *VAR_8;
    size_t VAR_9;
    size_t VAR_10;

    VAR_9 = (size_t) FUNC_9((uint32_t) 10000) + 1U;
    VAR_3 = (unsigned char *) FUNC_11(VAR_9);
    VAR_4 = (unsigned char *) FUNC_11(VAR_9);
    VAR_5 = (unsigned char *) FUNC_11(VAR_1 + VAR_9);
    VAR_6 = (unsigned char *) FUNC_11(VAR_2);
    VAR_7 = (unsigned char *) FUNC_11(VAR_0);
    VAR_8 = (unsigned char *) FUNC_11(VAR_1);
    FUNC_2(VAR_7);
    FUNC_8(VAR_3, VAR_9);
    FUNC_8(VAR_6, VAR_2);
    FUNC_1(VAR_5, VAR_3, (unsigned long long) VAR_9, VAR_6, VAR_7);
    if (FUNC_4(
            VAR_4, VAR_5, (unsigned long long) VAR_9 + VAR_1, VAR_6,
            VAR_7) != 0) {
        FUNC_7("crypto_secretbox_open_easy() failed\n");
    }
    FUNC_7("%d\n", FUNC_5(VAR_3, VAR_4, VAR_9));

    for (VAR_10 = 0; VAR_10 < VAR_9 + VAR_1 - 1; VAR_10++) {
        if (FUNC_4(VAR_4, VAR_5, (unsigned long long) VAR_10, VAR_6,
                                       VAR_7) == 0) {
            FUNC_7("short open() should have failed\n");
            return 1;
        }
    }
    FUNC_0(VAR_5, VAR_8, VAR_3, (unsigned long long) VAR_9, VAR_6, VAR_7);
    if (FUNC_3(((void*)0), VAR_5, VAR_8, (unsigned long long) VAR_9,
                                       VAR_6, VAR_7) != 0) {
        FUNC_7("crypto_secretbox_open_detached() with a NULL message pointer failed\n");
    }
    if (FUNC_3(VAR_4, VAR_5, VAR_8, (unsigned long long) VAR_9,
                                       VAR_6, VAR_7) != 0) {
        FUNC_7("crypto_secretbox_open_detached() failed\n");
    }
    FUNC_7("%d\n", FUNC_5(VAR_3, VAR_4, VAR_9));

    FUNC_6(VAR_5, VAR_3, VAR_9);
    FUNC_1(VAR_5, VAR_5, (unsigned long long) VAR_9, VAR_6, VAR_7);
    FUNC_7("%d\n", FUNC_5(VAR_3, VAR_5, VAR_9) == 0);
    FUNC_7("%d\n", FUNC_5(VAR_3, VAR_5 + VAR_1, VAR_9) == 0);
    if (FUNC_4(
            VAR_5, VAR_5, (unsigned long long) VAR_9 + VAR_1, VAR_6,
            VAR_7) != 0) {
        FUNC_7("crypto_secretbox_open_easy() failed\n");
    }
    FUNC_7("%d\n", FUNC_5(VAR_3, VAR_5, VAR_9));

    FUNC_10(VAR_3);
    FUNC_10(VAR_4);
    FUNC_10(VAR_5);
    FUNC_10(VAR_6);
    FUNC_10(VAR_7);
    FUNC_10(VAR_8);

    return 0;
}
