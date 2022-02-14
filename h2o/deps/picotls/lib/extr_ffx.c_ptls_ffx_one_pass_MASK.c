
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptls_cipher_context_t ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int *,int*,int const*,int) ;
 int FUNC_2 (int *,int*) ;

__attribute__((used)) static void FUNC_3(ptls_cipher_context_t *VAR_0, uint8_t *VAR_1, size_t VAR_2, uint8_t *VAR_3,
                              size_t VAR_4, uint8_t VAR_5, uint8_t *VAR_6, uint8_t *VAR_7, uint8_t *VAR_8,
                              uint8_t VAR_9, uint8_t VAR_10)
{
    static const uint8_t VAR_11[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    FUNC_0(VAR_7, VAR_8, 16);
    VAR_7[VAR_9 & 15] ^= VAR_10;
    for (size_t VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
        VAR_7[VAR_12] ^= VAR_1[VAR_12];
    }
    FUNC_2(VAR_0, VAR_7);
    FUNC_1(VAR_0, VAR_6, VAR_11, 16);
    for (size_t VAR_13 = 0; VAR_13 < VAR_4 - 1; VAR_13++) {
        VAR_3[VAR_13] ^= VAR_6[VAR_13];
    }
    VAR_3[VAR_4 - 1] ^= (VAR_6[VAR_4 - 1] & VAR_5);
}
