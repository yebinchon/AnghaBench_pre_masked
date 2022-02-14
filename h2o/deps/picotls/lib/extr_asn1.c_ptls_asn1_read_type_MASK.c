
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptls_minicrypto_log_ctx_t ;


 int VAR_0 ;
 size_t FUNC_0 (char*,size_t,size_t,int,int *) ;

size_t FUNC_1(const uint8_t *VAR_1, size_t VAR_2, int *VAR_3, int *VAR_4, uint32_t *VAR_5,
                           int *VAR_6, int VAR_7, ptls_minicrypto_log_ctx_t *VAR_8)
{

    size_t VAR_9 = 1;
    uint8_t VAR_10 = VAR_1[0];
    *VAR_3 = (VAR_10 >> 5) & 1;
    *VAR_4 = (VAR_10 >> 6) & 3;
    *VAR_5 = VAR_10 & 31;

    if (*VAR_5 == 31) {
        uint32_t VAR_11 = 0;
        const uint32_t VAR_12 = 0x07FFFFFFF;
        int VAR_13;
        int VAR_14 = 0;

        while (VAR_9 < VAR_2 && VAR_11 <= VAR_12) {
            VAR_13 = VAR_1[VAR_9++];
            VAR_11 <<= 7;
            VAR_11 |= VAR_13 & 127;
            if ((VAR_13 & 128) == 0) {
                VAR_14 = 1;
                break;
            }
        }

        if (VAR_14) {
            *VAR_5 = VAR_11;
        } else {

            VAR_9 = FUNC_0("Incorrect type coding", VAR_2, VAR_9, VAR_7, VAR_8);
            *VAR_6 = VAR_0;
        }
    }

    return VAR_9;
}
