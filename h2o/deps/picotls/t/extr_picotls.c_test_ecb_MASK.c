
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptls_cipher_context_t ;
typedef int ptls_cipher_algorithm_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int*,int const*,size_t) ;
 int FUNC_4 (int*,int ,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int*,int const*,size_t) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int,int const*) ;

__attribute__((used)) static void FUNC_9(ptls_cipher_algorithm_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
    static const uint8_t VAR_3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
                                  16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31},
                         VAR_4[] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
                                        0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff};

    uint8_t *VAR_5 = FUNC_2(VAR_2);
    FUNC_0(VAR_5 != ((void*)0));

    FUNC_4(VAR_5, 0, VAR_2);
    ptls_cipher_context_t *VAR_6 = FUNC_8(VAR_0, 1, VAR_3);
    FUNC_6(VAR_6, VAR_5, VAR_4, VAR_2);
    FUNC_7(VAR_6);
    FUNC_5(FUNC_3(VAR_5, VAR_1, VAR_2) == 0);


    VAR_6 = FUNC_8(VAR_0, 0, VAR_3);
    FUNC_6(VAR_6, VAR_5, VAR_5, VAR_2);
    FUNC_7(VAR_6);
    FUNC_5(FUNC_3(VAR_5, VAR_4, VAR_2) == 0);

    FUNC_1(VAR_5);
}
