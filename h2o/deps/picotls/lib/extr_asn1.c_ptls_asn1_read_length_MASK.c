
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptls_minicrypto_log_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*,size_t,size_t,int,int *) ;

size_t FUNC_1(const uint8_t *VAR_2, size_t VAR_3, size_t VAR_4, uint32_t *VAR_5, int *VAR_6,
                             size_t *VAR_7, int *VAR_8, int VAR_9, ptls_minicrypto_log_ctx_t *VAR_10)
{
    int VAR_11 = 0;

    *VAR_6 = 0;
    *VAR_5 = 0;
    *VAR_7 = VAR_3;

    if (VAR_4 < VAR_3) {
        *VAR_5 = VAR_2[VAR_4++];
        if ((*VAR_5 & 128) != 0) {
            VAR_11 = *VAR_5 & 127;
            *VAR_5 = 0;

            if (VAR_4 + VAR_11 >= VAR_3) {

                VAR_4 = FUNC_0("Incorrect length coding", VAR_3, VAR_4, VAR_9, VAR_10);
                *VAR_8 = VAR_1;
            } else {
                for (int VAR_12 = 0; VAR_12 < VAR_11 && VAR_4 < VAR_3; VAR_12++) {
                    *VAR_5 <<= 8;
                    *VAR_5 |= VAR_2[VAR_4++];
                }

                if (VAR_11 == 0) {
                    *VAR_7 = VAR_3;
                    *VAR_6 = 1;
                } else {
                    *VAR_7 = VAR_4 + *VAR_5;
                }
            }
        } else {
            *VAR_7 = VAR_4 + *VAR_5;
        }

        if (*VAR_8 == 0) {

            if (*VAR_7 > VAR_3) {
                VAR_4 = FUNC_0("Length larger than message", VAR_3, VAR_4, VAR_9, VAR_10);
                *VAR_8 = VAR_0;
            }
        }
    }

    return VAR_4;
}
