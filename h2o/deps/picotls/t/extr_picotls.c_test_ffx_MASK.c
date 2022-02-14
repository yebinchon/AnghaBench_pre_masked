
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int ptls_cipher_context_t ;
struct TYPE_2__ {int bit_length; int * algo; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (int *,int,char*) ;
 int * FUNC_7 (int *,int,int,int,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(void)
{
    static uint8_t VAR_2[32] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f',
                                          'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v'};

    static uint8_t VAR_3[32] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
                                       17, 18, 19, 20, 21, 22, 23, 24, 25, 27, 28, 29, 30, 31, 32};
    static uint8_t VAR_4[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
                                           16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 27, 28, 29, 30, 31};

    static uint8_t VAR_5[16] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    static uint8_t VAR_6[16] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};

    static uint8_t VAR_7[8] = {0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F};
    ptls_cipher_context_t *VAR_8 = ((void*)0);
    ptls_cipher_context_t *VAR_9 = ((void*)0);
    ptls_cipher_context_t *VAR_10 = ((void*)0);
    uint8_t VAR_11[32];
    uint8_t VAR_12[32];

    for (int VAR_13 = 0; VAR_0[VAR_13].algo != ((void*)0); VAR_13++) {
        VAR_8 = FUNC_6(VAR_0[VAR_13].algo, 1, VAR_3);
        VAR_9 = FUNC_6(VAR_0[VAR_13].algo, 0, VAR_3);
        VAR_10 = FUNC_6(VAR_0[VAR_13].algo, 0, VAR_4);
        FUNC_2(VAR_8 != ((void*)0) && VAR_9 != ((void*)0) && VAR_10 != ((void*)0));
        if (VAR_8 != ((void*)0) && VAR_9 != ((void*)0) && VAR_10 != ((void*)0)) {
            int VAR_14 = VAR_0[VAR_13].bit_length;
            int VAR_15 = (VAR_14 + 7) / 8;

            FUNC_5(VAR_8, VAR_5);
            FUNC_3(VAR_8, VAR_11, VAR_2, VAR_15);
            FUNC_2((VAR_11[VAR_15 - 1] & VAR_7[VAR_14 % 8]) == (VAR_2[VAR_15 - 1] & VAR_7[VAR_14 % 8]));

            FUNC_5(VAR_9, VAR_5);
            FUNC_3(VAR_9, VAR_12, VAR_11, VAR_15);
            FUNC_2(FUNC_1(VAR_2, VAR_12, VAR_15) == 0);

            FUNC_5(VAR_9, VAR_6);
            FUNC_3(VAR_9, VAR_12, VAR_11, VAR_15);
            FUNC_2(FUNC_1(VAR_2, VAR_12, VAR_15) != 0);

            FUNC_5(VAR_10, VAR_5);
            FUNC_3(VAR_10, VAR_12, VAR_11, VAR_15);
            FUNC_2(FUNC_1(VAR_2, VAR_12, VAR_15) != 0);
        }
        if (VAR_8 != ((void*)0)) {
            FUNC_4(VAR_8);
        }
        if (VAR_9 != ((void*)0)) {
            FUNC_4(VAR_9);
        }
        if (VAR_10 != ((void*)0)) {
            FUNC_4(VAR_10);
        }
    }





    FUNC_0(VAR_0[2].bit_length == 53);
    VAR_8 = FUNC_7(&VAR_1, 1, 4, 53, VAR_3);
    VAR_9 = FUNC_6(VAR_0[2].algo, 0, VAR_3);
    FUNC_2(VAR_8 != ((void*)0) && VAR_9 != ((void*)0));
    if (VAR_8 != ((void*)0) && VAR_9 != ((void*)0)) {
        FUNC_5(VAR_8, VAR_5);
        FUNC_3(VAR_8, VAR_11, VAR_2, 7);
        FUNC_5(VAR_9, VAR_5);
        FUNC_3(VAR_9, VAR_12, VAR_11, 7);
        FUNC_2(FUNC_1(VAR_2, VAR_12, 7) == 0);
    }
    if (VAR_8 != ((void*)0)) {
        FUNC_4(VAR_8);
    }
    if (VAR_9 != ((void*)0)) {
        FUNC_4(VAR_9);
    }
}
